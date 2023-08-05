#include <iostream>
using namespace std;

int BuscarIndiceMin(int vectorEntero[], int cantidad)
{
    int posicionMinimo = 0;
    for (int i =1; i< cantidad; i++)
    {
        if (vectorEntero[i]< vectorEntero[posicionMinimo])
        {
            posicionMinimo=i;
        }
    }
    return posicionMinimo;
}
