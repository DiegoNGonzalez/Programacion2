#include <iostream>

using namespace std;
#include "funciones.h"
/**
Las autoridades de la carrera TUP de la UTN están realizando un análisis de los cursos virtuales
de las distintas materias. Por cada una de las 20 materias de la carrera tiene la siguiente información
Número de materia (entre 1 y 20), Nombre, Cantidad de alumnos inscriptos, Cantidad de profesores

 Además por cada ingreso de los estudiantes al aula virtual se registra lo siguiente:

 Legajo, Fecha de acceso (día y mes), Número de la materia a la que ingreso, Cantidad de horas (número real)

 El fin de los datos se indica con un número de legajo igual a 0.
 Se quiere responder las siguientes preguntas:
 - Las materias que no tuvieron acceso de alumnos nunca
 - La materia que más cantidad de horas registro de acceso de alumnos
 - Por cada materia y día de marzo, la cantidad de ACCESOS DE alumnos a las aulas virtuales.

 Hacer un programa EN EL MARCO DE UN PROYECTO DE CODEBLOCK con un menú con opciones para cargar los datos,
 mostrar cada punto y salir del programa.

**/

int main()
{
   int vectorNumeroMateria[20]={0}, vectorCantidadAlumnos[20]={0}, vectorCantidadProfesores[20]={0},opcion, vectorAccesos[20]={0}, matrizMarzo[20][31]={0};
   char vectorNombres[20][25]={""};
   float vectorAcumuladorHoras[20]={0};


   opcion = menu();
   while (opcion != 0){
        switch(opcion){
        case 1:
            CargarMaterias(vectorNumeroMateria,vectorCantidadAlumnos,vectorCantidadProfesores,vectorNombres);
            break;
        case 2:
            CargarAlumnos(vectorAccesos,vectorAcumuladorHoras, matrizMarzo);
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        default:
            cout << "Opcion incorrecta vuelva a intentarlo"<< endl;
            break;


        }
        opcion = menu();
   }
    return 0;
}
