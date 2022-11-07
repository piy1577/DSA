#include <iostream>
#include <stack>
using namespace std;

class queue {
    stack <int> stack1;
    stack <int> stack2;
    public:

    void push(int x){
        stack1.push(x);
    }

    int pop() {
        if(stack1.empty() && stack2.empty()){
            cout << "queue underflow"<< endl;
            return -1;
        }else if(stack2.empty()){
            while(!stack1.empty()){
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        int topval = stack2.top();
        stack2.pop();
        return topval;
    }

    bool empty() {
        if(stack1.empty() && stack2.empty()){
            return true;
        }

        return false;
    }
};

int main() {
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.empty() << endl;
    return 0;
}