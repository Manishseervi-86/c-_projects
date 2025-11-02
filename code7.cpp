#include <iostream>
using namespace std;

//learning arrays and pointer arithmetic.

int main() {
    //general method of storing stuff in array.
    int marks[5]={23,34,25,77,47};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;
    //using loop for storing array.
    int mathmarks[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter the maths marks"<<endl;
        cin>>mathmarks[i];   
    }
     for(int i=0;i<5;i++)
    {
        cout<<mathmarks[i]<<endl;;   
    }
    //pointers arithmetic.

    int* p=mathmarks;
    cout<<"The value of 1st is "<<*p<<endl;
    cout<<"The value of 2nd is "<<*(p+1)<<endl;
    cout<<"The value of 3rd is "<<*(p+2)<<endl;
    cout<<"The value of 4th is "<<*(p+3)<<endl;
    cout<<"The value of 5th is "<<*(p+4)<<endl;
    return 0;
}