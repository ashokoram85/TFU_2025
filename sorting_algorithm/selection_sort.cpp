#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
      for(int i=0; i<=n-2; i++){
            int min_index = i;
            for(int j=i+1; j<=n-1; j++){
                  if(arr[j]<arr[min_index]){
                        min_index=j;
                  }
            }
                  // int temp = arr[i];
                  // arr[i] = arr[min_index];
                  // arr[min_index] = temp;
                  swap(arr[i], arr[min_index]);
      }
}
int main(){
      int n;
      cout<<"Enter the number of elements: ";
      cin>>n;
      int arr[n];
      cout<<"Enter the elements: ";
      for(int i=0; i<n; i++){
            cin>>arr[i];
      }
      selectionsort(arr, n);
      cout<<"Sorted array: ";
      for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
      }
      cout<<endl;
      return 0;
}