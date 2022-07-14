#include<iostream>
using namespace std;

class ClaseBase
{
    protected:
    int unaVar = 0;
    public:
    void unMetodo(void);
};

class ClaseDerivada : public ClaseBase  /* Sintaxis para indicar que ClaseDerivada hereda de ClaseBase */
{
    public:
    int x=0;
};
