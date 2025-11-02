#include <iostream>
using namespace std;

int main()
{
    // OOPs - Classes and objects.

    // C++ --> initially called-->C with classes by stroustroup
    // class --> extension of structures (in C)
    // structures had limitataions
    //     -->members are public
    //     -->No methods
    // classes -->structures + more
    // classes -->can have methods and properties
    // classes --> can make few members as private & few as public
    // structures in C++ are typedefed
    // you can declare objects along with the class declarion .
    /*class Employee{
            //class definition
        }harry,rohan ,lovish;*/

    // Nesting of member functions
    class binary
    {
        string s;

    public:
        void read(void);
        void chk_bin(void);
    };

    void binary ::read(void)
    {
        cout << "Enter a binary number";
        cin >> s;
    }
    void binary ::chk_bin(void)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) != '0' && s.at(i) != '1')
            {
                cout << "Incorrect binary format" << endl;
                exit(0);
            }
        }
    }
    return 0;
}