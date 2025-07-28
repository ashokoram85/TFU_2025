#include<iostream>
using namespace std;
void f(int arr[],int i,int n){
      if(i>=n/2) return; // base case
      swap(arr[i], arr[n-i-1]); // swap the elements at i and n-i-1
      f(arr, i+1, n); // recursively call the function with updated index
    
}
int main(){
      int n;
      cout<< "Enter the size of the array: ";
      cin>>n;
      int arr[n];
      cout<< "Enter the elements of the array: ";
      for(int i=0;i<n;i++){
          cin>>arr[i];
      }
      f(arr,0,n-1);
      cout<< "Reversed array: ";
      for(int i=0;i<n;i++){
          cout<<arr[i]<<" ";
      }
      cout << endl;
      return 0;
}