#include <iostream>
using namespace std;


int menu()
{
    int opcion=0;
    cout << "--------- **MENU** --------" << endl;
    cout << "1 - Cargar las materias" << endl;
    cout << "2 - Cargar ingreso de estudiantes" << endl;
    cout << "3 - Ver materias sin ingresos" << endl;
    cout << "4 - Ver materia con mayor cantidad de horas de acceso" << endl;
    cout << "5 - Ver accesos por materia durante días de marzo" << endl;
    cout << "0 - Salir" << endl;

    cout << "Opcion: ";

    cin >> opcion;
    return opcion;


}
void CargarMaterias(int vectorNumeroMateria[], int vectorCantidadAlumnos[],int vectorCantidadProfesores[], string vectorNombres[])
{
    int i;
    for (i =0; i<20; i++)
    {
        cout << "Ingrese el numero de materia: "<< endl;
        cin >>vectorNumeroMateria[i];
        cout << "Ingrese el nombre de la materia: "<< endl;
        cin >> vectorNombres[i];
        cout <<"Ingrese la cantidad de alumnos: "<< endl;
        cin>> vectorCantidadAlumnos[i];
        cout <<"Ingrese la cantidad de profesores: "<< endl;
        cin >>vectorCantidadProfesores[i];
    }
}

void CargarAlumnos(int vectorAccesos[], float vectorAcumuladorHoras[], int matrizMarzo[][31])
{
    int legajo, dia, mes, nroMateria;
    float cantidadHoras;
    cout <<"Ingrese el nro de legajo: "<< endl;
    cin>> legajo;
    while (legajo !=0)
    {

        cout <<"Ingrese el nro de dia: "<< endl;
        cin>> dia;
        cout <<"Ingrese el mes en numeros: "<< endl;
        cin>> mes;
        cout <<"Ingrese el nro de materia: "<< endl;
        cin>> nroMateria;
        cout <<"Ingrese la cantidad de horas: "<< endl;
        cin>> cantidadHoras;
        vectorAccesos[nroMateria-1]++;
        vectorAcumuladorHoras[nroMateria-1]+= cantidadHoras;

        if (mes==3){
            matrizMarzo[nroMateria-1][dia-1]++;
        }


        cout <<"Ingrese el nro de legajo: "<< endl;
        cin>> legajo;
    }

}
