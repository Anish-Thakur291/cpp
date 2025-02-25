# include<iostream>
using namespace std;
int print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}
int swap(int a[],int n){
for(int i=0;i<n;i++){
    int temp=a[1];
    a[1]=a[0];
    a[0]=temp;
}
        
    }

int main(){
    int rev[5]={2,3,4,5,6};
    swap(rev,5);
    print(rev,5);



}