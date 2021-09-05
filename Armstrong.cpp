#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,a,d,sum=0;
    cin >> n ;
    a=n;
   while(n>0){
       d=n%10;
       sum+=pow(d,3);
       n=n/10;
   }
   if(sum==a){
      cout << "Armstrong Number" ;
     }
   else{
       cout<<"Number not Armstrong";
   }
  
}

