#include <iostream>
using namespace std;
// inline function
//default argument and constant argument

inline int product(int a, int b)
{                                    // basically inline function is something which just replaces the function call by the operation to be performed
    return a * b;                    // which reduces the compliation time and do nothing much.
}                                   // although obvious but you should not make every fucntion inline because it beats the purpose of writing a fucntion
                                    // and it should mostly be used when you call it a lot of times. and it has fewer operation in the function.

float moneyreceived(int currentmoney,float factor=1.04) //here the float datatype factor is a defalut argument it has the defalut value of 1.04 if not specified.
{                                                       //all defalut argument should be in the right and cannot be before the compulsory argument.
    return currentmoney * factor;
}
int strlen(const char *p){
                                //here const means you cannot change the p here even if you write something which has the potential to change the value of p
                                //mostly used for pointers and stuff which changes the value when operation is performed.
}
int main()
{
    int a, b;
    cout << "Enter the value of a and b";
    cin >> a >> b;
    cout << "The product of a and b is" << product(a, b) << endl;
    cout << "The product of a and b is" << product(a, b) << endl;
    cout << "The product of a and b is" << product(a, b) << endl;
    cout << "The product of a and b is" << product(a, b) << endl;
    cout << "The product of a and b is" << product(a, b) << endl;
    cout << "The product of a and b is" << product(a, b) << endl;
    cout << "The product of a and b is" << product(a, b) << endl;
    cout << "The product of a and b is" << product(a, b) << endl;
    cout << "The product of a and b is" << product(a, b) << endl;
    cout << "The product of a and b is" << product(a, b) << endl;
    cout << "The product of a and b is" << product(a, b) << endl;
    cout << "The product of a and b is" << product(a, b) << endl;
    cout << "The product of a and b is" << product(a, b) << endl;
    return 0;
}