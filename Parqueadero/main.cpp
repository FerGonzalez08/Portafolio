#include <iostream>
#include "Parqueadero.h"
using namespace std;

int main() {
    Parqueadero parqueadero;
    int opcion;

    do {
        cout << "Bienvenido al parqueadero" << endl;
        cout << "1. Registrar vehiculo" << endl;
        cout << "2. Espacios disponibles" << endl;
        cout << "3. Pago" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                parqueadero.registrarVehiculo();
                break;
            case 2:
                parqueadero.mostrarEspaciosDisponibles();
                break;
            case 3:
                parqueadero.realizarPago();
                break;
            case 4:
            	cout << "Gracias, vuelva pronto" << endl;
                break;
            default:
                cout << "Opcion invalida. Por favor, ingrese una opcion valida." << endl;
                break;
        }

        cout << endl;

    } while (opcion != 4);

    return 0;
}