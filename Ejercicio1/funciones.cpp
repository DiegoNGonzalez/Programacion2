#include <iostream>

using namespace std;
int BuscarMin(int vectorEnteros[], int cant)
{
    int minimo= vectorEnteros[0];
    for (int i=1; i< cant; i++)
    {
        if(vectorEnteros[i] < minimo)
        {
            minimo= vectorEnteros[i];
        }
    }

    return minimo;
}
