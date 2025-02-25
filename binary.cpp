#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    // find binary number to decimal
    int n;
    cout << "enter teh number";
    cin >> n;

    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit *pow(10 ,i)) + ans;
        n=n>>1;
        i++;
    }
    cout<<ans;

    //----decimal to binary ----digit k liye   %10  (mode krna pde ga)

    // int n;
    // cout<<"enter the number";
    // cin>>n;
    // int ans=0,i=0;
    // while(n!=0){
    //     int digit=n%10;
    //     if(digit==1){
    //         ans=(ans+pow(2,i));
    //     }
    //         n=n/10;
    //         i++;

    // }
        // cout<<ans;
        
}
