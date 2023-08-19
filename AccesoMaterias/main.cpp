#include <iostream>
#include <cstring>
using namespace std;

#include "funciones.h"


int main(){
    char materias[20][35];
    float horasMaterias[20]={0};
    int matAccesos[20][31]={0};
    int opc=0;
    while(true){
        system("cls");
        cout << "************MENU**************" << endl;
        cout << "1. CARGAR MATERIAS" << endl;
        cout << "2. MOSTRAR MATERIA" << endl;
        cout << "3. CARGAR ACCESOS" << endl;
        cout << "4. MATERIAS SIN ACCESOS" << endl;
        cout << "5. MATERIA CON MAS HORAS" << endl;
        cout << "6. ACCESOS MARZO DIA MATERIA" << endl;
        cout << "0. FIN DEL PROGRAMA" << endl;
        cout << "*****************************" << endl;
        cout << "INGRESE OPCION" << endl;
        cin>>opc;
        system("cls");
        switch(opc){
            case 1:cargarMaterias(materias);
                    break;
            case 2:mostrarMaterias(materias);
                    break;
            case 3: cargarAccesos(horasMaterias, matAccesos);
                    break;
            case 4: puntoA(horasMaterias, materias);
                    break;
            case 5: puntoB(horasMaterias, materias);
                    break;
            case 6: puntoC(matAccesos,materias);
                    break;
            case 0: return 0;
                    break;
            default:cout<<"OPCION INCORRECTA. VUELVA A INGRESAR";
                    break;
        }
        cout<<endl;
        system("pause");
    }
    return 0;
}
