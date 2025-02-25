#include <iostream>
using namespace std;
int main()
{
    //    int n;
    //    cout<<"enter teh number";
    //    cin>>n;
    //    int i=1;
    //    while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<(i-j+1);
    //         j+=1;
    //     }
    //     cout<<endl;
    //     i+=1;
    //    }
    //-----------------------------------------
    // int n;
    // cout << "enter the number";
    // cin >> n;
    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= n)
    //     {
    //         char ch = 'A' + row - 1;
    //         cout << ch;
    //         col += 1;
    //     }  
    //     cout << endl;
    //     row += 1;
    //  }
    //----------------------------------*pattern
    int n;
    cout<<"enter the number";
    cin>>n;
    int row=1;
    while(row<=n){
        //space print 
        int space=n-row;
        while(space)
        {
            cout<<" ";
            space-=1;
        }
        int col=1;
        while(col<=row){
            cout<<"*";
            col+=1;
        }
        cout<<endl;
        row+=1;

        
    }
    
}