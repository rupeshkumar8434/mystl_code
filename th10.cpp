#include <iostream>

using namespace std;
// STACK-> lifo

// QUEUE->fifo
int main()
{
    stack<int> s;
    s.push(2);
    s.push(4);
    s.push(6);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }


    queue<string> q;
    q.push("rytty");
    q.push("fhgj");

    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }

    return 0;
}