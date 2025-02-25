#include<iostream>
using namespace std;
int power(int a,int b){
int ans=1;
for(int i=1;i<=b;i++){
    ans=ans*a;
}
return ans;
}
// bool iseven(int a){
//     if(a%2==0){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }

int main(){
int a,b;
cout<<"enter the value of a:/n";
cin>>a;
cout<<"enter the value of b/n";
cin>>b;

int answer=power(a,b);
cout<<"answer is: "<<answer;
// int num;
// cin>>num;
// if(iseven(num)){
//     cout<<"num is even"<<endl;
// }
// else{
//     cout<<"num is odd";
// }

}