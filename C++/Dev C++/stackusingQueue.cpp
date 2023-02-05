#include<bits/stdc++.h>
using namespace std;
#define int long long int
class Stack 
{
    queue<int> q1, q2;
    int curr_size;      
    
    public:
    void pop();
    void push(int x);
    int Top();
};

void Stack::push(int val)
{
    q1.push(val);
}

void Stack::pop()
{
    while(q1.size()!=1)
    {
        q2.push(q1.front());
        q1.pop();
    }

    q1.pop();

    queue<int >q=q1;
    q1=q2;
    q2=q;
}

int Stack::Top()
{

    while(q1.size()!=1)
    {
        q2.push(q1.front());
        q1.pop();
    }

    int top_val= q1.front();

    q2.push(q1.front());
    q1.pop();

    queue<int >q=q1;
    q1=q2;
    q2=q;

    return top_val;
}







signed main()
{
    Stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);

    cout<<s1.Top();

    s1.pop();
    cout<<endl;
    cout<<s1.Top();     
    s1.pop();
    cout<<endl;
    cout<<s1.Top();
    s1.pop();
    cout<<endl;
    cout<<s1.Top();
 
    return 0;
}