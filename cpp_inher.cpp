#include <iostream>
using std::cout;
using std::endl;
using std::string;


class CParent
{
public:
    virtual void PrintName() = 0;
    void exec()
    {
        PrintName();
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
    first->exec();
}