#include <iostream>
#include <stdexcept>

using namespace std;



class MyClass
{
public:
    MyClass();
    ~MyClass();

    void DoNasties() const;

private:
    void Foobar() const;
    int unused;
};



MyClass::MyClass()
{
    cout << "constructing" << endl;
}

MyClass::~MyClass()
{
    cout << "destructing" << endl;
}

void MyClass::DoNasties() const
{
    Foobar();
    throw exception("generic exception thrown");
}

void MyClass::Foobar() const
{
    cout << "cheating..." << endl;
    cout << "sizeof(MyClass) = " << sizeof(*this) << endl;
}
