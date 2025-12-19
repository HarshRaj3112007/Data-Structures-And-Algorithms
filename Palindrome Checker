#include <iostream>
using namespace std;
int main() {
    int a, reversed=0, lastdigit, original;
    bool palindrome=false;
    cin>>a;
    a=original;
    while (a>0){
        lastdigit=a%10;
        reversed=reversed*10+lastdigit;
        a=a/10;
    }
    if (reversed==original){
        palindrome=true;
        cout<<"The number is a palindrome"<<endl;
    }
    else{
        cout<<"The number is not a palindrome"<<endl;
    }
    return 0;
}
