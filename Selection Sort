#include <iostream>
using namespace std;
int main() {
    cout<<"Selection Sort Pseudo Code"<<endl;
    int n;
    cin>>n;
    int arr[n];
    for (int i=1;i<=n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<=n-2;i++){
        int minidx=i;
        for (int j=0;j<i;j++){
            if (arr[j]<arr[minidx]) {
                minidx=j;
        }
        swap(arr[j],arr[minidx]);
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


Note:
Time Complexity : O(N**2)
Space Complexity : O(1)
