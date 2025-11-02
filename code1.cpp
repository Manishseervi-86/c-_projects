#include <iostream>
using namespace std;
//using a function nothing much to see here.

int sum(int a,int b){
    
    return a+b;
}

int main() {
    int num1,num2;
    cout<<"Enter first number"<<endl;
    cin>>num1; 
    cout<<"Enter second number"<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1,num2);
    return  0;
}