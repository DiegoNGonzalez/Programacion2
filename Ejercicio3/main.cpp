#include <iostream>

using namespace std;
#include "funciones.h"
int main()
{
    int vectorEntero[]={20,30,40,1,50,-2,3};
    int cantidad=7;
    int resultado=BuscarIndiceMin(vectorEntero,cantidad);
    cout << resultado;
    return 0;
}
