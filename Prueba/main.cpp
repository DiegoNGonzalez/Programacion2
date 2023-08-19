#include <iostream>
#include "Fecha.h"
using namespace std;

int main()
{
    Date yesterday(10,8,2023);
    Date today(11,8,2023);
    Date tomorrow(12,8,2023);
    int dia, mes, anio;
    cout << "Introduce el dia: ";
    cin >> dia;
    cout << "Introduce el mes: ";
    cin >> mes;
    cout << "Introduce el anio: ";
    cin >> anio;

    Date hoy(dia,mes,anio);
    cout << "Hoy es: " << hoy.to_string() << endl;

    hoy.add_days(-1);
    cout << "Ayer fue: " << hoy.to_string() << endl;

    hoy.add_days(2);
    cout << "Mañana sera: " << hoy.to_string() << endl;

    hoy.add_days(-365);
    cout << "Hace un anio fue: " << hoy.to_string() << endl;

    hoy.add_days(366);
    cout << "Dentro de un anio sera: " << hoy.to_string() << endl;

    std::cout << yesterday.to_string() << "\n";
    std::cout << today.to_string() << "\n";
    std::cout << tomorrow.to_string() << "\n";

    yesterday.add_days(1);
    today.add_days(-365);
    tomorrow.add_days(-1);

    std::cout << yesterday.to_string() << "\n";
    std::cout << today.to_string() << "\n";
    std::cout << tomorrow.to_string() << "\n";
}
