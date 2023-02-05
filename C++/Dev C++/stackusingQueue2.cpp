#include<bits/stdc++.h>
using namespace std;
#define int long long int

class Stack
{
    queue<int> q1,q2;

    public:
    void push(int val);
    void pop();
    int Top();
};

void Stack::push(int val)
{
    q2.push(val);

    while(q1.size()!=0)
    {
        q2.push(q1.front());
        q1.pop();
    }

    queue<int>q=q1;
    q1=q2;
    q2=q;

}

void Stack::pop()
{
    q1.pop();
}

int Stack::Top()
{

    return q1.front();

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