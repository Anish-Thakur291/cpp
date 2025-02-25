#include <iostream>
using namespace std;
// int getmax(int a[],int size){
//     int max=INT16_MIN;
//     for(int i=0;i<size;i++){
//     if(a[i]>max){
//         max=a[i];
//     }
//     }
//     return max;
// }
int getmin(int a[],int n){
    int min=INT16_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    return min;
}
int main (){
 int a[10]= {2, 3, 10, 4, 5, 6, 7, 8, 9, 90};
// cout<<"max number is:"<<getmax(a,6);
cout<<"minimun number is:"<<getmin(a,10);
return 0;

}
// int print(int a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
// }
// int swap(int a[], int n)
// {
//     for (int i = 0; i < n; i += 2)
//     {
//         if (i + 1 < n)
//         {
//             swap(a[i], a[i + 1]);
//         }
//     }
// }
// int main()
// {
//     int even[10] = {2, 3, 1, 4, 5, 6, 7, 8, 9, 0};
//     int odd[5] = {2, 3, 4, 1, 5};
//     swap(even, 10);
//     print(even, 10);
//     cout << endl;

//     swap(odd, 5);
//     print(odd, 5);
// }

