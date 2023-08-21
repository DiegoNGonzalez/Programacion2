#include <iostream>

using namespace std;
#include <cstdlib>
#include <cstring>


void cargar_cadena(char *palabra, int tam)
{
    int i = 0;
    fflush(stdin);
    for (i = 0 ; i < tam ; i++ )
    {
        palabra[i] = cin.get();
        if(palabra[i] == '\n') break;
    }
    palabra[i] = '\0';
    fflush(stdin);
}

class Articulo
{

private:
    char _codigo[5];
    char _descripcion[30];
    float _precio;
    int _stock;
    bool _estado;

public:
    void setCodigo( char *codigo)
    {
        strcpy(_codigo, codigo);
    }
    void setDescripcion( char *descripcion)
    {
        strcpy(_descripcion, descripcion);
    }
    void setPrecio( float precio)
    {
        _precio=precio;
    }
    void setStock(int stock)
    {
        _stock=stock;
    }
    void setEstado(bool estado)
    {
        _estado = estado;
    }

    char* getCodigo()
    {
        return _codigo;
    }
    char* getDescripcion()
    {
        return _descripcion;
    }
    float getPrecio()
    {
        return _precio;
    }
    int getStock()
    {
        return _stock;
    }
    bool getEstado()
    {
        return _estado;
    }

    void Cargar();
    void Mostrar();

    Articulo()
    {
        strcpy(_codigo, "null");
        strcpy(_descripcion, "null");
        _precio=0;
        _stock=0;
        _estado = false;
    }

    Articulo(const char* codigo,const char* descripcion, float precio, int stock, bool estado)
    {
        strcpy(_codigo,codigo);
        strcpy(_descripcion,descripcion);
        _precio = precio;
        _stock = stock;
        _estado = estado;
    }


};

void Articulo::Cargar()
{
    char codigo[5], descripcion[30];
    float precio;
    int stock;
    bool estado;
    cout <<"Ingrese el codigo del articulo: "<<endl;
    cargar_cadena(codigo, 5);
    setCodigo(codigo);
    cout <<"Ingrese la descripcion del articulo: "<< endl;
    cargar_cadena(descripcion,30);
    setDescripcion(descripcion);
    cout <<"Ingrese el precio del articulo: "<< endl;
    cin >> precio;
    setPrecio(precio);
    cout <<"Ingrese el stock del articulo: "<< endl;
    cin >> stock;
    setStock(stock);
    cout <<"Ingrese el estado del articulo(true para disponible, false para no disponible): "<< endl;
    cin >>estado;
    setEstado(estado);

}
void Articulo::Mostrar()
{
    cout<< "El codigo del articulo es: "<< getCodigo()<< endl;
    cout <<"La descripcion el articulo es: "<< getDescripcion()<< endl;
    cout <<"El precio del articulo es: "<<getPrecio()<< endl;
    cout <<"El stock del articulo es: "<<getStock()<< endl;
    cout <<"El estado del articulo es: "<< getEstado()<< endl;
    cout << endl;

}


void cargarVector(Articulo *vecArticulos, const int tamanio)
{
    for (int i= 0; i< tamanio; i++)
    {
        vecArticulos[i].Cargar();
    }


}
void mostrarVector(Articulo *vecArticulos, const int tamanio)
{

    for (int i = 0; i< tamanio; i++)
    {
        vecArticulos[i].Mostrar();
    }

}

void articulosMayor(Articulo *vecArticulos, const int tamanio)
{
    float valor;
    cout <<"Ingrese valor a comparar: $"<< endl;
    cin>>valor;
    cout <<"Articulos con mayor valor al ingresado: "<<endl;
    for(int i =0; i<tamanio; i++)
    {
        if(vecArticulos[i].getPrecio() > valor)
        {
            cout<< vecArticulos[i].getCodigo()<< endl;
        }
        else
        {
            cout <<"No hay articulos con un precio mayor al ingresado. "<< endl;
        }

    }




}

char menu()
{

    char opcion;
    cout << "MENU " << endl;
    cout << "a) Cargar un vector de 10 articulos" << endl;
    cout << "b) Listar todos los articulos del vector." << endl;
    cout << "c) Listar todos los articulos cuyo precio sea mayor a un valor que se ingresa por teclado." << endl;
    cout << "d) A partir de un valor de código recibido como parámetro, devolver la posición del objeto que contiene ese código." << endl;
    cout << "   De no encontrarlo devolver -1." << endl;
    cout << "e) Igual a la función del punto anterior, pero debe devolver el objeto completo que contiene el código." << endl;
    cout << "   De no encontrar el código la función debe devolver un objeto Articulo con un valor de -1 en el stock." << endl;
    cout << "f) Dado un valor de stock que se recibe como parámetro devolver la cantidad de artículos cuyo stock sea" << endl;
    cout << "   inferior a ese valor recibido." << endl;
    cout << "g) Dado un porcentaje de incremento que se recibe como parámetro, modificar el precio unitario de todos los objetos." << endl;
    cout << "s) SALIR" << endl;
    cout << "SELECCIONE UNA LETRA :";
    cin >> opcion;

    return opcion;

}


int main()
{
    const int TAMANIO= 4;
    Articulo vecArticulos[TAMANIO]= {Articulo(),Articulo(),Articulo(),Articulo()};
    char opcion;

    do
    {
        system("cls");
        opcion = menu();
        switch (opcion)
        {
        case 'a':
            system("cls");
            cargarVector(vecArticulos, TAMANIO);
            system("pause");
            break;
        case 'b':
            system("cls");
            mostrarVector(vecArticulos, TAMANIO);
            system("pause");
            break;
        case 'c':
            system("cls");
            articulosMayor(vecArticulos, TAMANIO);
            system("pause");
            break;
        case 's':
            system("cls");
            cout << "Hasta pronto!!" << endl;
            break;






        }

    }while (opcion != 's');





        return 0;
}
