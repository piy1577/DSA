#include <bits/stdc++.h>
using namespace std;

int prec(char c)
{
  switch (c)
  {
  case '^':
    return 3;
  case '*':
    return 2;
  case '/':
    return 2;
  case '+':
    return 1;
  case '-':
    return 1;
  default:
    return -1;
  }
}

string infixtoprefix(string s)
{
  stack<char> st;
  reverse(s.begin(), s.end());
  string res ="";
  for (int i = 0; i < s.length(); i++)
  {
    if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
    {
      res += s[i];
    }
    else if (s[i] == ')')
    {
      st.push(s[i]);
    }
    else if (s[i] == '(')
    {
      while (!st.empty() && st.top() != ')')
      {
        res += st.top();
        st.pop();
      }
    }
    else
    {
      if (!st.empty() && prec(s[i]) > prec(st.top()))
      {
        res += st.top();
        st.pop();
      }
      
      
        st.push(s[i]);
    
    }
  }

  while (!st.empty())
  {
    res += st.top();
    st.pop();
  }

  reverse(res.begin(), res.end());
  return res;
}

int main()
{
  cout << infixtoprefix("(a-b/c)*(a/k-l)");
  return 0;
}