#include <iostream>
using namespace std;
//using recursion for fibonacci series.
int fibonacici(int n){
    if(n==1 ||n==2){
        return 1;
    }
    else{
        return fibonacici(n-1)+fibonacici(n-2);
    }
}
int main() {
    int m;
    cin>>m;
    int c=fibonacici(m);
    cout<<c<<endl;
    return 0;
}