#include <iostream>
#include<bits/stdc++.h>
using namespace std;


unordered_map<char,int>sym={{'[',-1},{'{',-2},{'(',-3},{']',1},{'}',2},{')',3}};
string isbalanced(string s){
    stack<char>st;
    for(char brackets:s){
        if(sym[brackets]<0){
            st.push(brackets);
        }else{
            if(st.empty()){
                return "no";
            }
            char top=st.top();
            st.pop();
            if(sym[top]+sym[brackets]!=0){
                return "no";
            }
        }
    }

    if(st.empty()){
        return "yes";
    }else{
        return "no";
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        cout<<isbalanced(str)<<endl;
    }

    return 0;
}