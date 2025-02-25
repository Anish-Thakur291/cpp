#include <iostream>
using namespace std;
int main()
{
    //     int n;
    //     cout<<"enter the number";
    //     cin>>n;
    //     int sum=0;
    //     for(int i=0;i<=n;i++){
    // sum+=i;
    //     }
    //     cout<<"sum is"<<sum<<endl;
    // --------fibonacci series---------------------------------------------

    // int n=10;
    // int a=0;
    // int b=1;
    // cout<<a<<" "<<b<<" ";
    // for(int i=1;i<=n;i++){
    //     int fibo=a+b;
    //     cout<<fibo<<" ";
    //     a=b;
    //     b=fibo;
    // }

    // ----------------------prime number-----------------------

 int n;
 cout<<"entr the number";
 cin>>n;
//  bool isprime =1;
 for( int i =2;i<n;i++){
    if(n%i==0){
        cout<<"not a prime number";
        // isprime=0;
        break;
    }
    else{
        cout<<"prime number";
    }
 }
//  if(isprime==0){
//     cout<<"not a prime number";
//  }
 
  return 0;
}
