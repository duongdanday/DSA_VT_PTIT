#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count = 0;
        int m[10] = {1000,500,200,100,50,20,10,5,2,1};
        
        for(int i = 0; i<10; i++){
            count += n/m[i];
            n = n%m[i];
        }
        cout<<count<<endl;
    }
}