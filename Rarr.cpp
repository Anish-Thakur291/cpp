#include <iostream>
using namespace std;
// int rev(int a[], int n)
// {
//     int start = 0;
//     int end = n - 1;
//     while (start <= end)
//     {
//         swap(a[start], a[end]);
//         start++;
//         end--;
//     }
// }

// int print(int a[], int n)
// {
//     for (int i = 0; i <= n; i++)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;
// }
// int main()
// {
//    int a[6]={4,5,2,6,7,8};
//    int b[5]={5,3,7,21,8};
   
//     rev(a, 6);
//     rev(b, 5);
//     print(a, 6);
//     print(b, 5);
// }



//swaping to numbber in the list eg index 0to index 1

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

int print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}
int swap(int a[],int n){
    for(int i=0;i<n;i++){
        if(i+1<n){
            swap(a[i], a[i+1]);

        }
    }
}

int main(){
    int even[10]={2, 3, 1, 4, 5, 6, 7, 8, 9, 0};
    int odd[5]={2,3,4,1,4};
    swap(even,10);
    print(even,10);
    cout<<endl;
    swap(odd,5);
    print(odd,5);
}



