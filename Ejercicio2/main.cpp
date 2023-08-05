#include <iostream>

using namespace std;
#include "funciones.h"
int main()
{
    int vectorInt[]={200,1000,2000,9999,1,2,123456};
    int cantidad = 7;
    int resultado= BuscarMax(vectorInt, cantidad);
    cout << resultado;
    return 0;
}
