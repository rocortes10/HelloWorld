#include<iostream>
using namespace std;

class ClaseBase
{
    protected:
    int unaVar = 0;
    public:
    void unMetodo(void)
    {
        unaVar++;
        cout<<"unaVar = "<<unaVar<<endl;
    }
};

class ClaseDerivada : public ClaseBase  /* Sintaxis para indicar que ClaseDerivada hereda de ClaseBase */
{
    public:
    int x=0;
};

int main()
{
    ClaseDerivada obj1;
    obj1.unMetodo(); /* Acceso a los miembros heredados de ClaseBase */
    obj1.unMetodo();
    obj1.x=1;
    cout<<obj1.x<<endl;
    return 0;
}