#include <iostream>
using namespace std;


class queue
{
private:
    int *arr;
    int rear;
    int front;
    int cap;

public:
    queue(int size = SIZE);
    void enqueue(X);
    void  dequeue();
    int  Front();
    bool empty();
    bool full();
    void display();
};
queue(int size)
{
    arr = new X[size];
    cap = size;
    rear = -1;
    front = -1;
}
void enqueue(string x)
{
    if (full())
    {
        cout << "\nQueue Overflow!!\n";
    }
    else if (empty())
    {
        front = 0;
        rear = 0;
        arr[rear] = x;
    }
    else
    {
        rear = (rear + 1) % cap;
        arr[rear] = x;
    }
}
void dequeue()
{
    if (empty())
    {
        cout << "\nQueue Underflow!!\n";
    }
    else if (front == rear)
    {

        b = arr[front];
        rear = -1;
        front = -1;
    }
    else
    {
        b = arr[front];
        front = (front + 1) % cap;
    }
    return b;
}
int Front()
{
    if (!empty())
        return arr[rear];
    else
        cout << "queue is empty\n";
}
bool empty()
{
    if (front == -1 && rear == -1)
        return true;
    else
        return false;
}
bool full()
{
    if ((rear + 1) % cap == front)
        return true;
    else
        return false;
}
void display()
{
    if (empty())
    {
        cout << "\nqueue is empty\n";
    }
    else
    {
        int i = 0;
        while (i != rear + 1)
        {
            cout << arr[i] << endl;
            i = (i + 1) % cap;
        }
    }
}

int main()
{
    queue<string> k;
    k.enqueue("\nSTOP::RED LIGHT ON!!\n");
    k.enqueue("\nWAIT::YELLOW LIGHT ON!!\n");
    k.enqueue("\nGO ::GREEN LIGHT ON!!\n");
    int n;
    int i = 0;
    int a = 0;
    cout << "Set the time interval between two colour signals for traffic control system\n";
    cin >> n;

    while (i < 3)
    {
        string m = k.dequeue();
        k.enqueue(m);
        for (int j = n; j > 0; --j)
        {
            cout << m << "  " << j << " seconds are remaining!!\a\n"
                 << endl;
            
        }
        i++;
    }
    return 0;
}
