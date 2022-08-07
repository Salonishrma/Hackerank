#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        int array[n];
        for(int i=0;i<n;i++){
            cin>>array[i];
        }
        sort(array,array+n);
        for(int i=0;i<n;i++){
        if(count>=array[i]){
            count++;
        }
        }
            cout<<count<<endl;
        
    }
    return 0;
}
