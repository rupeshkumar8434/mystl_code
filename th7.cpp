#include <iostream>
#include<bits/stdc++.h>
using namespace std;


// unordered_map



int main()
{
    
    unordered_map<int,string> m;
    m[1]="abc";  //O(1);
    m[5]="cdc";
    m[3]="acd";
    m.insert({4,"fgh"});
    unordered_map<int ,string>:: iterator it;

    for(it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<" "<<(*it).second;
    }

   // using range based loops
   print(m);


   // map ki sari key unique hoti hai



   // find -> returns iterator   O(1)

   auto it=m.find(3);
   if(it==m.end()){
    cout<<"no value"<<endl;
   }else{
    cout<<(*it).first<<" "<<(*it).second;
   }


   // erase 

   // erase takes 2 value iterator or key


   // m.clear -> clear all the map


    return 0;
}