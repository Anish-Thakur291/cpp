#include <iostream>
using namespace std;
int main()
{
    // while loop
    // int n;
    // cout<<"enter any number";
    // cin>>n;
    // int i=1;
    // while (i<=n){
    //     cout<<i<<" ";
    //     i=i+1;
    // }

    //     int n, sum = 0;

    //     cout << "enter the number"<<endl;
    //     cin >> n;
    //     int i = 1;
    //     while (i <= n)
    //     {
    //         sum = sum + i;
    //         i = i + 1;
    //     }
    // cout<<"value of sum is"<<sum<<endl;

    // int n, sum = 0;
    // cout << "enter the numbber" << endl;
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     if (i % 2 == 0)
    //     {
    //     }
    //     sum = sum + i;
    //     i = i + 1;
    // }
    // cout << "sum of even number is : " << sum << endl;

    int n;
    cout << "enter the numbber" << endl;
    cin >> n;
    int i = 2; // 1  is not a primr number
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << " not a prime for"<<  i  <<endl;
        }
        else
        {
            cout << " prime for"<< i <<endl;
        }
        i = i + 1;
    }

    return 0;
}