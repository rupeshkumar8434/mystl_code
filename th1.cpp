#include <bits/stdc++.h>
// pairs 
using namespace std;

int main()
{ //fdkhjlgysldfjhgdfskjhgskjdfgh
    pair<int,string>p;
   //  p=make_pair(2,"abc");
    p={2,"abc"};
    pair<int,string>&p1=p;
    // refrence nhi denge to copy create hogi
    p1.first=3;
    cout<<p.first<<" "<<p.second<<endl;


    int a[]={1,2,3};
    int b[]={2,3,4};

    pair<int,int> p_array[3];    // array of pairs
     
     // ham pair ka aaray nhi declre karte hain der
     // ham vector of pair karte hain
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};

    for(int i=0;i<3;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }

    


    // we can also take input
    pair<int,string>p;
    cin>>p.first;
    cin>>p.second;
    return 0;
}


