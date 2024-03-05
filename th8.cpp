#include <iostream>
#include<bits/stdc++.h>
using namespace std;
// sets & unordered_set



void print(set<string> &s){
    for( string value:s){
        cout<< value<<endl;
    }
}
int main()
{
    set<string> s;
    s.insert("abc");  //log(n)

    s.insert("gfd");
    s.insert("gjh");

    auto it =s.find("abc");  //log(n)
    if(it!=s.end()){
        s.erase(it);
    }
    print(s);



    // question unique string in sorted order


    set<string>s2;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;

        s.insert(str);
    }

    for(auto value:s){
        cout<<value<<endl;
    }



    // same for unordered_set -store unique element without any order ->O(1)

    return 0;
}