#include<iostream>
#include"inc.h"
using namespace std;


int main()
{
    ClaseDerivada obj1;
    obj1.unMetodo(); /* Acceso a los miembros heredados de ClaseBase */
    obj1.unMetodo();
    obj1.x=1;
    cout<<obj1.x<<endl;
    return 0;
}