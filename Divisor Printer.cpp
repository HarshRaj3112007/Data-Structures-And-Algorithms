#include <iostream> 
using namespace std;
int main() {
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++) {
        if (a % i == 0) {
            cout << i << endl;
        }
    }
    return 0;
}
// O(n) time complexity

//another faster method to print divisors


#include <iostream>
using namespace std;
int main() {
    vector<int> divisors;
    int a;
    cin >> a;
    for (int i = 1; i * i <= a; i++) { // i*i<=a is same as i<=sqrt(a) but this is faster
        //O(sqrt(n))
        if (a % i == 0) {
            cout << i << endl;
            if (i != a / i) {
                divisors.push_back(a / i);
            }
        }
    //O(sqrt(n))
    }
    for (int j = divisors.size() - 1; j >= 0; j--) {
        cout << divisors[j] << endl;
    }
    return 0;
}

//total time complexity: O(sqrt(n)) (since adding two O(sqrt(n)) operations doesn't change the overall time complexity)

