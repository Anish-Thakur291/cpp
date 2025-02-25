#include <iostream> // Header file for input/output stream
using namespace std;
double pow(int x,int n){
   if (n==0){
    return 1;
   }
   else if(n<0){
    return (1.0/(x,n-1));
   }
   return x*(x,n-1);
}
int main(){
int x=2;
int n=-2;
cout<<pow(x,n);
}