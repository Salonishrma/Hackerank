#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=3;
    int a[n],b[n];
    int alice=0;
    int bob=0;
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    for(int i=0;i<n;i++)
        cin>>b[i];
    
    for(int i=0;i<n;i++){
        if(a[i]>b[i])
            alice++;
        else if(a[i] < b[i])
           bob++;
    }
        cout<<alice<<" "<<bob<<endl;
    
    return 0;
}
