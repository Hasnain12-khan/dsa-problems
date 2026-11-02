// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cout<<"enetr the number of star:";
//    cin>>n;
//    for(int i = 1; i<=n; i++){
//     for(int j = 1; j<=i; j++){
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
//    } 
// }

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