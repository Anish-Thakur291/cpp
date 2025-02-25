#include <iostream>
#include <math.h>
using namespace std;
int main()

{
  // int a = 6;
  // int b=6;
  // cout << "a~b =" << ~a;
  // cout << "a~b =" << a & b;
  // cout<<(17>>1)<<endl;
  //----------------------------------------------------------------------------------------------------------------------------------
    int sum=0,prod=1,sub,n;
    cout<<"entr the number";
    cin>>n;
    while(n!=0){
      int digit=n%10;
      sum+=digit;
      prod*=digit;
  n=n/10;
    }
    sub=sum-prod;
    cout<<"sub is:"<<sub;
  //----------------------------------------check set bit--------------------------------------------------

  // int count=0,n;
  // cout<<"enter the number";
  // cin>>n;
  // while(n!=0){
  //   if(n&1){
  //     count++;
  //   }
  //  n= n>>1;
  // }
  // cout<<count;

  int n;
  cout << "enter teh number";
  cin >> n;
  float ans = 0;
  int i = 0;
  while (n != 0)
  {
    int digit= n%10;
    ans = (digit* pow(2, i)) + ans;
    n = n/10;
    i++;
  }
  cout << "answer is:" << ans << endl;
}