#include <iostream>
using namespace std;
//function overloading.
//using same fucntion name does not produce error and does work as intended.
int sum(int a,int b){
    cout<<"Using function with 2 argument :"<<endl;
    return a+b;
}
int sum(int a,int b,int c){
    cout<<"Using function with 3 argument :"<<endl;
    return a+b+c;
}
int main() {
    cout<<"The sum of 3 and 6 is : "<<sum(3,6)<<endl;
    cout<<"The sum of 3,7,6 is : "<<sum(3,7,6)<<endl;
    return 0;
}
