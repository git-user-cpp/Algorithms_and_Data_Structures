#include <iostream>
#include <stack>
#include <queue>

using namespace std;

template<class t>
void PrintStack(stack<t> &st) //templated function for outputting data from stacks
{
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
}

template<class t>
void Print_queue(queue<t> &my) //templated function for outputting data from queues
{
    while (!my.empty())
    {
        cout << my.front() << endl;
        my.pop();
    }
}

template<class t>
void InsertStack(stack<t> &st) //templated function for inserting data into stacks
{
    t iValue;
    int value;
    cout << "Enter the number of items to push into the stack: ";
    cin >> value;

    for(int i = 0; i < value; i++)
    {
        cout << "Enter the "<< i+1 << " value to push: ";
        cin >> iValue;

        st.push(iValue);
    }
}

template<class t>
void Insert_queue(queue<t> &my) //templated function for inserting data into queues
{
    t iValue;
    int value;
    cout << "Enter the number of items to push into the queue: ";
    cin >> value;

    for(int i = 0; i < value; i++)
    {
        cout << "Enter the "<< i+1 << " value to push: ";
        cin >> iValue;

        my.push(iValue);
    }
}

template<class t>
void Remove_queue(queue<t> &my) //templated function for removing data from queues
{
    int value;
    cout << "Enter the number of items to remove: ";
    cin >> value;

    for(int i = 0; i < value; i++)
    {
        my.pop();
    }
}

template<class t>
void RemoveStack(stack<t> &st) //templated function for removing data from stacks
{
    int value;
    cout << "Enter the number of items to remove: ";
    cin >> value;

    for(int i = 0; i < value; i++)
    {
        st.pop();
    }
}

int main()
{
    stack<int> Mystack; //creating a custom stack

    InsertStack(Mystack); //Inserting data into the stack

    cout << "\nOutput from stack:\n";
    PrintStack(Mystack);

    cout << "\nFill the stack again, please\n";
    InsertStack(Mystack);

    if(!Mystack.empty())
    {
        RemoveStack(Mystack); //Removing data from the stack
    }
    else
    {
        cout << "Stack is empty" << endl;
    }

    cout << "\nOutput from stack after removing elements:\n";
    PrintStack(Mystack);

    cout << "\nThe size of stack is: " << Mystack.size() << " elements." << endl;

///////////////////////////////////////////////////////////////////////////////////

    queue<int> Myqueue; //creating a custom queue

    cout << endl;
    Insert_queue(Myqueue); //Inserting data into the queue

    cout << "\nOutput from queue:\n";
    Print_queue(Myqueue);

    cout << "\nFill the queue again, please\n";
    Insert_queue(Myqueue);

    if(!Myqueue.empty())
    {
        Remove_queue(Myqueue); //Removing data from the queue
    }
    else
    {
        cout << "queue is empty" << endl;
    }

    cout << "\nOutput from queue after removing elements:\n";
    Print_queue(Myqueue);

    cout << "\nThe size of queue is: " << Myqueue.size() << " elements." << endl;

return 0;
}