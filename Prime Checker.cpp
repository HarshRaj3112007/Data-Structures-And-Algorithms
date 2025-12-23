#include <iostream>
using namespace std;
int main() {
    int n,count=0;
    cin>>n;
    for (int i=1; i<=n; i++){
        if (n%i==0){
            count++;
        }
    }
    if (count==2){
        cout<<"The number is prime."<<endl;
    }
    else{
        cout<<"The number is not prime."<<endl;
    }
    return 0;
}

//O(n) time complexity


//optimized prime number checker

#include <iostream>
using namespace std;
int main() {
    int n, count = 0;
    cin >> n;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            count++;
            if (i != n / i) {
                count++;
            }
        }
    }
    if (count == 2) {
        cout << "The number is prime." << endl;
    } else {
        cout << "The number is not prime." << endl;
    }

    return 0;
}

//O(sqrt(n)) time complexity

