// #include<iostream>
// using namespace std;
// int main(){
 int arr[] = {4,1,7,3,9,2,0,8};
 int n = sizeof(arr)/4;
 int i = 1;
 for(i = 1 ; i<n; i++){
  int j= i;
  while(j>=1 && arr[j]<arr[j-1]){
    swap(arr[j],arr[j-1]);
    j--;
  }

 }
 for(int h = 0; h<n; h++){
  cout<< arr[h] << " ";
 }
 return 0;
}

