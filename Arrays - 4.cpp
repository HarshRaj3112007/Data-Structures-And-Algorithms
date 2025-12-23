// 2 sum problem - find all pairs of indices such that the sum of elements at those indices equals a given target value

// Brute Force Approach

#include <iostream>
using namespace std;
int main() {
    int n , target;
    cin >> n >> target;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++) {
        for (int j = 0; j<n; j++){
            if (i==j) continue;
            if (arr[i] + arr[j] == target){
                cout << i << " " << j << endl;
        }
        }
    }
    return 0;
}


// Little bit optimized Approach of Brute Force


#include <iostream>
using namespace std;
int main() {
    int n , target;
    cin >> n >> target;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++) {
        for (int j = i+1; j<n; j++){
            if (arr[i] + arr[j] == target){
                cout << i << " " << j << endl;
        }
        }
    }
    return 0;
}


// Better Approach using Hashing

#include <iostream>
#include <map>
using namespace std;
int main() {
    int n,target;
    cin>>n>>target;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    map <int,int> hash;
    int flag=0;
    for (int i=0;i<n;i++){
        if (hash.find(target-arr[i]) != hash.end()){
            cout << hash[target - arr[i]] << " " << i << endl;
            flag=1;
            break;
        }
        else {
            hash[arr[i]]=i;
        }
    }
    if (flag==0){
        cout<<"No pair found!!";
    }
    return 0;
}


// This is the most optimized approach for finding a pair with given sum in an array. Although , Not much difference in time complexity but still better than previous approaches.


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n,target;
    cin>>n>>target;
    vector <int> arr(n);
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int left=0;
    int right=n-1;
    int flag=0;
    while (left<right){
        int sum = arr[left]+arr[right];
        if (sum==target){
            cout<<"Yes";
            flag=1;
            break;
        }
        else if (sum<target){
            left++;
        }
        else {
            right--;
        }
    }
    if (flag==0) cout<<"No";
    return 0;
}


// Sort an array of 0s , 1s and 2s

// Brute Force Approach (use merge sort or quick sort)

#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    // merge two sorted halves
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // remaining elements
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // copy back to original array
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &arr, int low, int high) {
    if (low >= high) return;

    int mid = low + (high - low) / 2;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}

// TC: O(nlogn) and SC: O(n)


// Better Approach (Counting Sort)

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int count0 = 0, count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) count0++;
        else if (arr[i] == 1) count1++;
        else count2++;
    }
    int index = 0;
    for (int i = 0; i < count0; i++) {
        arr[index++] = 0;
    }
    for (int i = 0; i < count1; i++) {
        arr[index++] = 1;
    }
    for (int i = 0; i < count2; i++) {
        arr[index++] = 2;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

// TC: O(n) and SC: O(1)


