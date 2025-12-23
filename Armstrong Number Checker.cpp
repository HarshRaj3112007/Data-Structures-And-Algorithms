//Armstrong number checker
//Armstrong number is a number which is equal to the sum of cubes of its digits.

#include <iostream>
using namespace std;
int main() {
    int a, original;
    cin >> a;
    original = a; 
    int sum = 0;
    while (a > 0) {
        int lastdigit = a % 10;
        int cube = lastdigit * lastdigit * lastdigit;
        sum += cube; 
        a = a / 10;
    }
    if (sum == original) {
        cout << "The number is an Armstrong number" << endl;
    } else {
        cout << "The number is not an Armstrong number" << endl;
    }
    return 0;
}
