#include "MyClass.h"

#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
    try
    {
        MyClass a;
        cout << "sizeof(MyClass) = " << sizeof(a) << endl;
        a.DoNasties();
    }
    catch (exception &e)
    {
        cout << "should see " << e.what() << ", but after the destructor" << endl;
    }
    return 0;
}
