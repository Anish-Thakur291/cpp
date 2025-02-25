// duplicate of number


# include <iostream>
using namespace std;
// int rev(int a[],int n){
//     int i=0;
//     int j=n-1;
//     while(i<=j){

//         swap(a[i],a[j]);
//         i++;
//         j--;
//     }
// }
// int  print(int a[],int n){
//     for(int i=0;i<n;i++){
//         cout<<a[i];
//     }
// }
int main (){
    // int a[5]={3,2,1,4,1};
    // rev(a,5);
    // print(a,5); 
    int n;
    cout<<"enter the number";
    cin>>n;
    cout<<"ente the element";
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                cout<<a[j];
            }

        }
        

    }
    return 0;
}
