#include <iostream>
using namespace std;
//call by reference and call by value

int product(int a, int b){
    return a*b;
}
void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main() {
    int a,b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"The product of a and  is "<<product(a,b);
    return 0;
}