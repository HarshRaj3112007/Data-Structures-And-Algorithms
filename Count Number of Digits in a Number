// method 1 to count number of digits in a number


#include <iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    int count=0;
    while (a>0){
        cout<<a%10<<endl;
        a=a/10;
        count++;
    }
    cout<<"The number of digits is "<<count<<endl;
    return 0;
}

// time complexity: O(log n base 10)


//method 2 using log10 function

#include <iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    int count=log10(a)+1;
    cout<<"The number of digits is "<<count<<endl;
    return 0;
}
//time complexity: O(1)
