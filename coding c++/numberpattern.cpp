#include<iostream>
using namespace std;
int main() {
    int n, m;

    cout << "enter the first number:";
    cin >> n;

    cout << "enter the number:";
    cin >> m;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

// #include<iostream>
// #include <algorithm>
// using namespace std;
// int main(){
//     int arr[] = {4,1,7,3,9,2,0,8};
//     int n = sizeof(arr)/4;
//     int i = 0, j = 0;
//     for(i = 1; i <n; i++){
//       int j = i;
//       while(j>=1 && arr[j] < arr[j-1]){
//         swap(arr[j],arr[j-1]);
//         j--;
//       }   
//     }
// }