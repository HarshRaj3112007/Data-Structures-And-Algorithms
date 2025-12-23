// Using arrays

#include <iostream>
#include <algorithm>
using namespace std;
int fxn(int arr[],int high, int low){
    int pivot=arr[low];
    int i = low;
    int j = high;
    while (i<j){
        while (arr[i]<=pivot && i<high){
            i++;
        }
        while (arr[j]>pivot && j>=low+1){
            j--;
        }
        if (i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;

}
void quicksort(int arr[],int high,int low=0){
    if (low<high){ 
        int partitionidx=fxn(arr,high,low);
        quicksort(arr,partitionidx-1,low);
        quicksort(arr,high,partitionidx+1);
    }
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    quicksort(arr, n - 1);

    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// Using vectors


#include <vector>
#include <iostream>
using namespace std;
int f(vector<int> & arr, int low, int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while (i<j){
        while(arr[i]<=pivot &&  i < high){
            i++;
        }
        while (arr[j]>pivot && j>= low+1){
            j--;
        }
        if (i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}
void quicksort(vector<int>& arr, int low, int high){
    if (low<high){
        int partition_index=f(arr,low,high);
        quicksort(arr, low, partition_index-1);
        quicksort(arr, partition_index+1, high);
    }
}
int main() {
    int n; 
    cin>>n;
    vector <int> arr(n);
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    quicksort(arr, 0 , n-1);

    for (int i=0; i<n; i++){
        cout<<arr[i]<<"->";
    }
    return 0;
}

Note:
Time Complexity : O(NlogN)
Space Complexity : O(1)
