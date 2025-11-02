#include <iostream>
using namespace std;

//small number factorial using recursion.

int factorial(int n){
    if (n<=1){
        return 1;
    }
    return n * factorial(n-1);
}

int main() {
    //factorial of a number:
    int n;
    cout<<"Enter the number you want factorial of"<<endl;
    cin>>n;
    cout<<factorial(n);
    return 0;
}