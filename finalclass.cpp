#include <iostream>

// 
using namespace std;

class Final;

class MakeFinal
{
private:
    MakeFinal() { cout << "MakeFinal() constructor...." << endl; }
    friend class Final;
};

class Final : virtual MakeFinal
{
public:
    Final() { cout << "Final() constructor" << endl; }
};

class Derived : public Final // Compiler error
{
public:
    Derived() { cout << "Derived() constructor" << endl; }
};

int main()
{
    Final f;
    return 0;
} 
