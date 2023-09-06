#include <iostream>
#include <string>

using namespace std;

class clsA
{
    private:
    int _var1;
    void _Func1()
    {
        cout << _var1 << endl;
    }

    protected:
    int var2 = 2;
    void Func2()
    {
        cout << "var2" << endl;
        
    }

    public:
    int var3;
    void Func3()
    {
        cout << var3 << endl;
        
    }

};

class clsB : public clsA
{

    public:
    void Func3()
    {
        clsA::Func2();
        cout << clsA::var2 << endl;
    }
};

int main()
{

    clsB B;
    B.Func3();

    system("pause>0");
}