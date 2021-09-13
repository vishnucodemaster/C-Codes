#include<iostream>
using namespace std;

void buble(int a[],int n){
    for(int times=1;times<=n-1;times++){
        for (int j = 0; j <= n-times-1; j++){
            if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
            }

        }
        
        
    }
}
int main(){
    int arr[]={-2,3,4,-1,-12,6,15,12};
    int n = sizeof(arr)/sizeof(int);
    buble(arr,n);
    for(auto x:arr)
    cout<<x<<" ";
}
