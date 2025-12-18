#include <iostream>
using namespace std;
int main() {
    cout<<"Bubble Sort Pseudo Code"<<endl;
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n;i++){
        int didSwap=0;
        for (int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
            didSwap=1;
        }
        if (didSwap==0){
            break;
        }
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

Note:
Time Complexity : O(N**2) for worst and average test cases and O(N) for best test case
Space Complexity : O(1)
