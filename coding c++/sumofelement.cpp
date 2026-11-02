// #include<iostream>
// using namespace std;
// int main(){
//     int arr[][4] = {{5,8,1,2},{9,9,4,4},{7,0,3,5}};
//     int sum = 0;
//     for(int i = 0; i< 3; i++){
//         for(int j = 0; j<4; j++){
//             cout<<arr[i][j]<<" ";
//             sum += arr[i][j];
//         }
//         cout<<endl;
//     }
//     cout<<sum;
// }

#include<iostream>
using namespace std;
int main(){
    int arr[][3] = {{2,1,3},{4,5,6},{7,8,9}};
    int sum = 0;
    for(int i = 1; i< 3; i++){
        for(int j = 0; j< 3; j++){
            cout<<arr[i][j]<<" ";
            sum += arr[i][j];
        }
        cout<<endl; 
    }
    cout<<sum;
}