#include <iostream>
using std::cout;
using std::endl;
using std::string;


class CParent
{
public:
    virtual void PrintName()
    {
        cout << "I`m parent" << endl;
    }
};  

class CChild : public CParent
{
public:
    virtual void PrintName() override
    {
        cout << "I`m child" << endl;
    }
};

int main ()
{
    CParent *first;
    CChild *second;
    first = new CChild;
    first->PrintName();
}