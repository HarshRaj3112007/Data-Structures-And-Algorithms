#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int gcd = 1; 

    for (int i = 1; i <= min(a, b); i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i; 
        }
    }
    cout << "The GCD is " << gcd << endl;
    return 0;
}


//O(min(a,b)) time complexity


//gcd calculator using Euclidean algorithm


#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b; 
    while (a>0 && b>0){
        if (a>b){
            a=a%b;
        }
        else{
            b=b%a;
        } 
        if (a==0){
            cout<<"The GCD is "<<b<<endl;
        }
        else if (b==0){
            cout<<"The GCD is "<<a<<endl;
        }
    }
    return 0;
}

//O(log phi {min(a,b)}) time complexity
