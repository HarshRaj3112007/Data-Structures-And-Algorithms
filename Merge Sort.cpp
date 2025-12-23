#include <iostream>
#include <vector>
using namespace std;
void milao(int arr[],int low,int mid,int high){
    vector <int> temp;
    int left=low;
    int right=mid+1;
    while (left<=mid && right<=high){
        if (arr[left]<=arr[right]){
            temp.emplace_back(arr[left]);
            left++;
        }
        else {
            temp.emplace_back(arr[right]);
            right++;
        }
    }
    while (left<=mid){
        temp.emplace_back(arr[left]);
        left++;
    }
    while (right<=high) {
        temp.emplace_back(arr[right]);
        right++;
    }
    for (int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}
// positional arguments with default values must be at the end
void mergesort(int arr[], int high, int low = 0){
    if (low >= high) return;

    int mid = (low + high) / 2;

    mergesort(arr, mid, low);
    mergesort(arr, high, mid + 1);
    milao(arr, low, mid, high);
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergesort(arr,n-1);
     for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

Note:
Time Complexity : O(NlogN)
Space Complexity : O(N)
