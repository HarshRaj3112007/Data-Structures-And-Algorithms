// Ignoring leading zeros

#include <iostream>
using namespace std;
int main() {
    int a, reversed=0, lastdigit;
    cin>>a;
    while (a>0){
        lastdigit=a%10;
        reversed=reversed*10+lastdigit;
        a=a/10;
    }
    cout<<"The reversed number is "<<reversed<<endl;
    return 0;
}


// Not ignoring leading zeros


#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    while (n>0){
        cout<<n%10;
        n/=10;
    }
}
