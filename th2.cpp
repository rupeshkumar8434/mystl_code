#include <bits/stdc++.h>

using namespace std;
// vector


// locally array 1e5  
// globally 1e7
void printvec(vector<int>&v){
    cout<<v.size()<<endl;     //O(1)

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int>v; // declere 0 size vector 
    int n; // size input liye
    cin>>n;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;

        v.push_back(x);  //O(1)
    }

    printvec(v);


  cout<<endl;


    // 2nd type

    vector<int>v2(10,3);  // 10 size ka vector all value filled with 3
    v2.push_back(7);  //O(1)

     printvec(v2);



     v.pop_back(); //O(1)

     // vector ko copy kar sakte hain

     vector<int>v2=v; // copy ban rhi O(n)  galst bbat
    

     vector<string>v3;

     int n2;
     cin>>n2;

     for(int i=0;i<n2;i++){
        string s;
        cin>>s;

        v3.push_back(s);
     }
    return 0;
}