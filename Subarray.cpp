#include <iostream>
using namespace std;
int largestsubarray(int arr[ ],int n){
    
    int pre[]={0};
    pre[0]=arr[0];
    for(int i=1;i<n;i++){
        pre[i]=arr[i]+pre[i-1];
    }
    int largestsubarray=0;

    for(int i=0;i<n;i++){
        for (int j= i; j < n; j++)
        {
            /* code */
            int sum=0;
            sum=i!=0?pre[j]-pre[i-1]:pre[0];
           largestsubarray= max(largestsubarray,sum);
        }
        
        
    }
    return largestsubarray;
}
int main(){
    int arr[]={'1', '2', '3', '4', '5', '6'};
    int n =sizeof(arr)/sizeof(int);
    cout<<largestsubarray(arr,n)<<endl;


}