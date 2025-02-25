#include <iostream>
using namespace std;
// int fact(int n)
// {
//     //function body
//     int fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//         }
//         return fact;
//     }
//     int nCr(int n, int r)
//     {
//         int num = fact(n);
//         int denm = fact(r) * fact(n - r);
//         int ans = num / denm;
//         return ans;
//     }
bool isprime(int n){
    for(int i=2;i<n;i++){
        //divide ho gya hai to not prime
        if(n%i==0){
            return 0;
        }
        return 1;
    }
}


int main()
{
    // int n,r;
    // cin >> n>>r;
    // //funtion call
    // cout<<"answer is"<<nCr(n,r);
int n;
cin>>n;
if(isprime(n)){

cout<<"is prime number";
}
else{
    cout<<"not prime";
}



}
