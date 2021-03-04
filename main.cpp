#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;


int main() {
  int opc;
  cout<<"***BIENVENIDO***\n";
  do
  {
    cout<<"Menu\n";
    cout<<"1.- Ejercicio 1\n";
    cout<<"2.- Ejercicio 2\n";
    cout<<"3.- Ejercicio 3\n";
    cout<<"4.- Salir\n";
    cout<<"OPCION: "; 
    cin>>opc;
    switch (opc)
    {
      case 1:
      break;
      case 2:
      break;
      case 3:
      break;
      case 4:
      cout<<"Saliendo...\n";
      break;
      default:
      cout<<"Opcion no valida.\n";
    }
  } while (opc!=4);
  return 0;
}