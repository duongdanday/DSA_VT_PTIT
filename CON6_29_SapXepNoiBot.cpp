#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin>>t;
    while(t--){
        int a[101];
        int n;
        cin>>n;
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }

        for(int i = 0; i < n-1; i++){
            bool swapped = false;
            for(int j = 0; j < n-i-1; j++){
                if(a[j] > a[j+1]){
                    swap(a[j], a[j+1]);
                    swapped = true;
                }
            }
            if(swapped){
                cout << "Buoc " << i+1 <<": ";
                for(int k = 0; k < n; k++){
                cout << a[k] <<" ";
                }
                cout << '\n';
            }
            else{
                break;
            }
        }
    }
}