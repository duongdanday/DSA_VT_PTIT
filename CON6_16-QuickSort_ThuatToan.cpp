#include<bits/stdc++.h>
using namespace std;

//Phan hoach Hoare
int partition(int a[], int l, int r){
    int pivot = a[l];
    int i = l-1, j = r+1;
    while(1){
        do{
            ++i;
        } while(a[i]<pivot);
        do{
            --j;
        } while(a[j]>pivot);
        if(i<j){
            swap(a[i], a[j]);
        }
        else return j;
    }
}

void quicksort(int a[], int l, int r){
    if(l>=r) return;
    int p = partition(a,l,r);
    quicksort(a,l,p);
    quicksort(a,p+1,r);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n; 
        cin>>n;
        int a[n];
        for(int i = 0; i<n; i++){
            cin>> a[i];
        }
        quicksort(a,0,n-1);
        for(int i = 0; i<n; i++){
            cout<<a[i]<<' ';
        }
        cout<<'\n';
    }
}