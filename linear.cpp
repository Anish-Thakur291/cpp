# include<iostream>
using namespace std;
int search(int a[],int n,int key){
    for(int i=0;i<=n;i++){
        if(a[i]==key){
            return i;
        }
    }
    return 0;
}
int main(){
    int key;
    cout<<"enter the search element";
    cin>>key;
    int a[6]={2,5,4,2,7,1};
   int found= search(a,6,key);
   cout<<found;


    return 0;
}



// #include<iostream>
// using namespace std;
//     bool search(int a[],int size,int key){
//         for(int i=0;i<size;i++){
//             if(a[i]==key){
//                 return 1;
//             }
            
//         }
//         return 0;

//     }
// int main (){

// int a[10]{10,11,2,1,3,4,7,8,9,23};
// cout<<"enter the search element";
// int key;
// cin>>key;
// bool found=search(a,10,key);
// if(found){
//     cout<<"key is found"<<endl;

// }
// else{
//     cout<<"key is not found";
// }



// }