#include <iostream>
using namespace std;
// enum hellow{
//     a,b=99,c,d=-1
// };
//   main()
// {
//     enum hellow m;
//     printf("%d%d%d%d",a,b,c,d);
// }
int main()
{  

    bool bl=true;
cout<<bl<<endl;
int f=1.3;
cout<<f<<endl;

int a=123;
cout<<a<<endl;
int size=sizeof(a);
cout<<"size of a is:"<<size<<endl;


int d=sizeof(bl);
cout<<"size of bool is"<<d<<endl;


int p=sizeof(f);
cout<<"size of float"<<p<<endl;

    return 0;
}


// bool --->1  bit