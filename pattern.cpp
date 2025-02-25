#include <iostream>
using namespace std;
int main()
{//square
    // int n;
    // cout<<"enter the numbbber";
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //   int  j=1;
    //     while(j<=n){
    //         cout<<j;//revrse k liye cout<<n-j+1
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }


    // using count variable for countinity of te number
    // int n;
    // int count = 1;
    // cout << "enter the number";
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << count << " ";
    //         count = count + 1;
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }
    //=-------------------------star pattern-------------------------------------

    // int n;
    // cout<<"enter the numbber";
    // cin>>n;
    // int row=1;
    // while(row<=n){
    //     int j=1;
    //     while(j<=row){
    //         cout<<"&";
    //         j=j+1;
    //     }
    //     cout<<endl;

    // row=row+1;
    // }

//-----------------------------------------------------------------------------------------------------------------------------


    int n;
    cout<<"enter the number";
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<row;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
//-------------------------------------------------------------------------------------------------------------------------------------
    // int n;
    // int count=1;
    // cout<<"enter the numbber";
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<count;
    //         count+=1;
    //         j+=1;
    //     }
    //     cout<<endl;
    //     i+=1;
    // }
    // int n;
    // cout << "enter the number";
    // cin >> n;
    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //         int value = row;
    //     while (col <= row)
    //     {
    //         // cout << value;
    //         // value += 1;
    //         //without using value
    //         cout<<row+col+1;
    //         col += 1;
    //     }
    //     cout << endl;
    //     row += 1;
    // }

    return 0;
}