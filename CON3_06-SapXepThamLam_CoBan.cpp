#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
       int n;
       cin>>n;
       int a[n];
       for(int i = 0; i<n; i++){
        cin>>a[i];
       }
       int c = 0;
       for(int i = 0; i<n/2; i++){
        if(a[i]>a[n-i-1]){
            swap(a[i], a[n-i-1]);
        }
       }

      for(int i = 0; i<n-1; i++){
       if(a[i] > a[i+1]){
           c = 1;
           break;
       }
      }
      
      if(c == 1) cout<<"No"<<endl;
      else cout<<"Yes"<<endl;
    }
}