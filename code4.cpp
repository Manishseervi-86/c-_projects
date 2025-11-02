#include <iostream>
using namespace std;

//fiboancci using both recursion and iterative apporach.

int fibonacci(int n){
    if(n<2){
        return 1;
    }
    return fibonacci(n-2) + fibonacci(n-1);
}

int iterative(int c){
    int a=1,b=1;
    int d=c;
    for(int i=0;i<d;i++){
    c=b;
    b=a;
    a=b+c;
    cout<<c<<endl;
}
}

int main() {
    //fibonacci series
    int a;
    cout<<"The term fibonacci series is "<<endl;
    cin>>a;
    iterative(a);
    return 0;
}