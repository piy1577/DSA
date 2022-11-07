#include <iostream>
#define n 100
using namespace std;

class queue
{
    int *arr;
    int front;
    int back;

public:
    queue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void push(int x)
    {
        if (back == n - 1)
        {
            cout << "queue overflow" << endl;
            return;
        }
        if (front == -1)
        {
            front++;
        }
        back++;
        arr[back] = x;
    }

    void pop()
    {
        if (front == back + 1 || front == -1)
        {
            cout << "queue is empty" << endl;
            return;
        }
        front++;
    }

    int peek()
    {
        if (front == -1 || front == back + 1)
        {
            cout << "queue is empty" << endl;
            return -1;
        }

        return arr[front];
    }

    bool empty()
    {
        if (front == -1 || front == back + 1)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();

    cout << q.empty() << endl;
    return 0;
}