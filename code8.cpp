#include <iostream>
using namespace std;
//learning to use structures, Unions,and Enums.
struct employee
    {                   //basically sturct is so that you can have multiple datatypes together.
        int id;
        char favchar;
        float salary;
    };

union money{            //basically it is used for using only one datatyeps at a time with giving multiple options.
    int rice;           //used for better memory management.
    char car;
    float pounds;
};
    
int main() {
    enum Meal{breakfast,lunch,dinner};   //basically used so that each inside can get ordered number and readability increases
    Meal m1 = lunch;                        //for example here breakfast is 0 lunch is 1 and dinner is 2;
    cout<<m1<<endl;
    struct employee manish;
    manish.id=1;
    manish.favchar = 'c';
    manish.salary=100000000;
    cout<<"The value of :"<<manish.id<<endl;
    cout<<"The value of :"<<manish.favchar<<endl;
    cout<<"The value of :"<<manish.salary;
    return 0;
}