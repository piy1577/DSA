#include <iostream>
#include <queue>
using namespace std;
//making push function costly

class stack {
    int n;
    queue<int> q1;
    queue<int> q2;
    public:

    stack(){
        n=0;
    }

    void push(int x) {
        q2.push(x);
        n++;
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }

    void pop() {
        q1.pop();
        n--;    
    }

    int top() {
        return q1.front();
    }
    
    int size() {
        return n;
    }
};
int main() {
    stack st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();


    return 0;
}