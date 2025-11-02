#include <iostream>
using namespace std;
//learning pointers. just the basics.
int main() {
    int a=3;
    int *b=&a;
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a using pointer is "<<b<<endl;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of a using deference operator is "<<*b<<endl;
    return 0;
}