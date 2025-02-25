#include <iostream>
using namespace std;
int main()
{
    // int a;
    // cin>>a;
    // if(a>0){
    //     cout<<"it is a positive number";
    // }
    // else {
    //     cout<<"a is negative";
    // }

    // int a, b;
    // cout << "enter the value of a"<<endl;
    // cin >> a;
    // cout << "enter the value of b"<<endl;
    // cin >> b;
    // if (a > b)
    // {
    //     cout << "A is greater" <<endl;
    // }
    // if(b>a)
    // {
    //     cout << "b is greater"<<endl;
    // }

    char ch;
    cout<<"enter character";
    cin>>ch;
    if(ch>=65 && ch<=96){
        cout<<"you enter the upper case"<<endl;
    }
    else if(ch>=48 && ch<=57){
        cout<<"enter the lower case"<<endl;
    }
    else if(ch>=97 && ch>=122){
        cout<<"enter the numeric value"<<endl;
    }
    else{
        cout<<"enter the special character";
    }

    return 0;
}