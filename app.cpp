#include <iostream>
using namespace std;
#include "app.h"
#include "funcionesGlobales.h"

 void App::MenuPrincipal()
 {
   int opcion;
    while(true)
    {
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

      cout << "INGRESE UNA OPCION: ";
      //cin >> opcion;
      opcion = ingresoEntero();
      clear();
      switch (opcion)
      {
       case 1:
        {
          //subMenuTurnos.menuTurnos();
        }
        break;
       case 2:
        {
          //subMenuPacientes.menuPacientes();
          break;
        }
       case 3:
        {
          //subMenuEmpleados.menuEmpleados();
          break;
        }
        break;
       case 4:
        {
          //subMenuInformes.menuInformes();
        }
        break;
       case 0:
        {
          return;
        }
        break;
       default:
        {
          cout << "OPCION INCORRECTA" << endl;
          pausa();
        }
      }
      clear();
    }
   return;
 }
