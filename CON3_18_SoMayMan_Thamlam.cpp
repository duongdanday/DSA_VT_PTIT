#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int quan4 = -1, quan7 = -1;
//Duyet so luong so 7 giam dan
        for(int i = n/7; i>=0 ; i--){
            if((n-7*i)%4 == 0){
                quan7 = i;
                quan4 = (n-7*i)/4;
                break;
            }
        }
        if(quan4 == -1) {
            cout<<"-1"<<endl;
        }
        else{
            cout << string(quan4, '4') << string(quan7,'7') << endl;
        }
    }
}