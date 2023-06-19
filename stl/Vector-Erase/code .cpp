#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int n;
   cin>>n;
   vector<int>v1;
   for(int i=0;i<n;i++){
       int x;
       cin>>x;
       v1.push_back(x);
   }
   int m;
   cin>>m;
   m--; //1 based indexing
   v1.erase(v1.begin()+m);
   int l,s;
   cin>>l>>s;
   l--;
   s--;
   v1.erase(v1.begin()+l,v1.begin()+s);
   cout<<v1.size()<<endl;
   for(int i=0;i<v1.size();i++){
       cout<<v1[i]<<" ";
   }
    return 0;
}
