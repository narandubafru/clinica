#include <iostream>
using namespace std;
#include "funcionesGlobales.h"
#include <iostream>
#include <cstdlib>

//Clear usado en vez de system("pause")
#ifdef _WIN32
    // Windows-specific code
    #define CLEAR_COMMAND "cls"
#else
    // Linux-specific code
    #define CLEAR_COMMAND "clear"
#endif

void clear() {
    system(CLEAR_COMMAND);
}

//Pausa usada en vez de system("pause")
#ifdef _WIN32
    //Windows
    #define PAUSE_COMMAND "pause > nul"
#else
    //Linux
    #define PAUSE_COMMAND "read"
#endif

void pausa() {
    cout << "Presione Enter..." << endl;
    system(PAUSE_COMMAND);
}

//CARGAR CADENA
 void cargarCadena(char *palabra, int tamano)
 {
    int i=0;
    fflush(stdin);
    for (i=0; i<tamano; i++)
   {
     palabra[i]=cin.get();
     if (palabra[i]=='\n')
     {
        break;
     }
   }
    palabra[i]='\0';
    fflush(stdin);
 }

//Verifica que se ingrese un entero.
int ingresoEntero(){

    int num;
    cin >> num;

    while (cin.fail()) { //Ingresa al loop si el valor ingresado NO es un int
        clear();
        cout << " MENU PRINCIPAL" << endl;
        cout << "----------------" << endl;
        cout << "1 - TURNOS" << endl;
        cout << "2 - PACIENTES" << endl;
        cout << "3 - EMPLEADOS" << endl;
        cout << "4 - INFORMES" << endl;
        cout << endl;
        cout << "0 - PARA SALIR" << endl;
        cout << "----------------" << endl;
        cout << "ERROR: Valor ingresado no es un numero" << endl;

        cout << "INGRESE UNA OPCION: ";
        cin.clear();
        cin.ignore(132,'\n');
        cin >> num;
    }

    return num;
}
