#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void selectionSort(vector<int>&arr,int n){
    int min;
    for(int i = 0;i<n;i++){
        min = i;
        for(int j = i;j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        swap(arr[i],arr[min]);
    }
    return;
}
void BubbleSort(vector<int>&arr,int n){
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            }
        }
    }
    return;
}
void Recursive_BubbleSort(vector<int>&arr,int n){
       int didSwap = 0;    
      for(int j = 0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            didSwap = 1;
            }
        }
        if(didSwap==0) return;

    return Recursive_BubbleSort(arr, n-1);
} 
void Insertion_sort(vector<int>&arr,int n){
    for(int i = 0;i<=n-1;i++){
      int j=i;
        while(j>0&&arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
    return;
}
void Recursive_Insertion_sort(vector<int>&arr,int i, int n){
    if(i==n) return;
    int j=i;
        while(j>0&&arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    return Recursive_Insertion_sort(arr,i+1,n);
}
int main()
{
    vector<int>arr={13,46,24,52,20,9};
    int n = arr.size();
    // selectionSort(arr,n);
    // BubbleSort(arr,n);
    // Insertion_sort(arr,n);
    // Recursive_BubbleSort(arr,n);
    Recursive_Insertion_sort(arr,0,n); 
    for(int a : arr){
        cout<<a<<" ";
    }
    return 0;
}