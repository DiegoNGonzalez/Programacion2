#include <iostream>
using namespace std;

int BuscarMax(int vectorEnteros[], int cantidad)
{
    int maximo= vectorEnteros[0];
    for (int i=1; i< cantidad; i++)
    {
        if (vectorEnteros[i]> cantidad)
        {
            maximo = vectorEnteros[i];
        }
    }

    return maximo;

}
