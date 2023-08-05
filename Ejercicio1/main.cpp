#include <iostream>
using namespace std;
#include "funciones.h"


int main()
{
    int vectorInt[]= {5,20,30,1,100,99,200};
    int cantidad= 7;
    int resultado;

    resultado=BuscarMin(vectorInt, cantidad);
    cout << resultado;
    return 0;
}

