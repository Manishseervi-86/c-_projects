#include <iostream>
using namespace std;

//object oriented programming.
//learning classes public and private acces modifiers.

class Employee{

    private:            //private in class cannot be access by outside and only be access by inside function.
        int a,b,c;      
    public:             //public in class can be used by anyone and is open to use by all.
        int d,e;
        void setData(int a1,int b1,int c1);
        void getData(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};

void Employee :: setData(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}

int main() {
    Employee manish;
    manish.d=24;
    manish.e=34;
    manish.setData(1,2,4);
    manish.getData();
    return 0;
}