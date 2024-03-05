#include <bits/stdc++.h>

using namespace std;
// nesting vector

void printvec(vector<pair<int,int>>&v){
    cout<<v.size()<<endl;     //O(1)

    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
}
int main()
{
    vector<pair<int,int>> v={{1,2},{3,4}};
     printvec(v);
    
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
      int x,y;
      cin>>x>>y;
      v.push_back({x,y});
   }
   printvec(v);






   // array of vector
   int N;
   cin>>N;
   vector<int>v[N];  // N vector bna jiska size 0 hai
   for(int i=0;i<N;i++){
       int n; // andar wale vec ka size
       cin>>n;
       for(int j=0;j<n;j++){
           int x;
           cin>>x;
           v[i].push_back(x);
       }
   }
     

   



   // vector of vector 
 int n2;
 cin>>n2;
  vector<vector<int>>v3;

  for(int i=0;i<n2;i++){
    int n3;
    cin>>n3;

    vector<int>temp;

    for(int j=0;j<n3;j++){
        int x;
        cin>>x;
        temp.push_back(x);


    }
    v3.push_back(temp);
  }
  for(int i=0;i<v.size();i++){
    printvec(v3[i]);
  }

   

   
    return 0;
}