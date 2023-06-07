#include <iostream>
#include "Parqueadero.h"
#include "Vehiculo.h"
#include <ctime>
using namespace std;

Parqueadero::Parqueadero() {
    espaciosCarrosDisponibles = 20;
    espaciosMotosDisponibles = 7;
}

void Parqueadero::registrarVehiculo() {
    string placa, tipo;
    cout << "Ingrese la placa del vehiculo (6 caracteres): ";
    cin >> placa;
    cout << "Ingrese el tipo de vehiculo (carro o moto): ";
    cin >> tipo;

    if (tipo == "carro") {
        if (espaciosCarrosDisponibles > 0) {
            carros[20 - espaciosCarrosDisponibles].setPlaca(placa);
            carros[20 - espaciosCarrosDisponibles].setTipo(tipo);
            carros[20 - espaciosCarrosDisponibles].setTiempoIngreso(time(0));
            espaciosCarrosDisponibles--;
            cout << "Vehiculo registrado exitosamente." << endl;
        } else {
            cout << "No hay espacios disponibles para carros." << endl;
        }
    } else if (tipo == "moto") {
        if (espaciosMotosDisponibles > 0) {
            motos[7 - espaciosMotosDisponibles].setPlaca(placa);
            motos[7 - espaciosMotosDisponibles].setTipo(tipo);
            motos[7 - espaciosMotosDisponibles].setTiempoIngreso(time(0));
            espaciosMotosDisponibles--;
            cout << "Vehiculo registrado exitosamente." << endl;
        } else {
            cout << "No hay espacios disponibles para motos." << endl;
        }
    } else {
        cout << "Tipo de vehiculo invalido." << std::endl;
    }
}

void Parqueadero::mostrarEspaciosDisponibles() {
    cout << "Espacios disponibles para carros: " << espaciosCarrosDisponibles << endl;
    cout << "Espacios disponibles para motos: " << espaciosMotosDisponibles << endl;
}

void Parqueadero::realizarPago() {
    string placa;
    cout << "Ingrese la placa del vehiculo: ";
    cin >> placa;

    bool vehiculoEncontrado = false;
    for (int i = 0; i < 20; i++) {
        if (carros[i].getPlaca() == placa) {
            int tiempoEstadia = difftime(time(0), carros[i].getTiempoIngreso());
            int costo = tiempoEstadia * 252;
            cout << "Tiempo de estadia: " << tiempoEstadia << " minutos" << endl;
            cout << "Total a pagar: " << costo << " pesos colombianos" << endl;
            int diferencia;
            int valorUtilizado = 0;
			do{
			
			
            int opcion;
            cout << "Seleccione el valor utilizado para pagar:" << endl;
            cout << "1. Mil pesos" << endl;
            cout << "2. Dos mil pesos" << endl;
            cout << "3. Cinco mil pesos" << endl;
            cout << "4. Diez mil pesos" << endl;
            cout << "5. Veinte mil pesos" << endl;
            cout << "6. Cincuenta mil pesos" << endl;
            cout << "Ingrese una opcion: ";
            cin >> opcion;
			
            
            switch (opcion) {
                case MIL_PESOS:
                    valorUtilizado = 1000;
                    break;
                case DOS_MIL_PESOS:
                    valorUtilizado = 2000;
                    break;
                case CINCO_MIL_PESOS:
                    valorUtilizado = 5000;
                    break;
                case DIEZ_MIL_PESOS:
                    valorUtilizado = 10000;
                    break;
                case VEINTE_MIL_PESOS:
                    valorUtilizado = 20000;
                    break;
                case CINCUENTA_MIL_PESOS:
                    valorUtilizado = 50000;
                    break;
                default:
                    cout << "Opcion invalida. No se realizo el pago." << endl;
                    return;
            }
			
				 diferencia =  valorUtilizado - costo;
				
	            if (diferencia < 0) {
	                cout << "falta dinero" << endl;
	            } else {
	            	cout << "Pago exitoso. Vueltas: " << diferencia << " pesos colombianos." << endl;
	            }
			}while (diferencia < 0);
            

            vehiculoEncontrado = true;
            carros[i].setPlaca("");
            carros[i].setTipo("");
            carros[i].setTiempoIngreso(0);
            espaciosCarrosDisponibles++;
            break;
        }
    }

    if (!vehiculoEncontrado) {
        for (int i = 0; i < 7; i++) {
            if (motos[i].getPlaca() == placa) {
                int tiempoEstadia = difftime(time(0), motos[i].getTiempoIngreso());
                int costo = tiempoEstadia * 176;
                cout << "Tiempo de estadia: " << tiempoEstadia << " minutos" << endl;
                cout << "Total a pagar: " << costo << " pesos colombianos" << endl;

                int opcion;
                cout << "Seleccione el valor utilizado para pagar:" << endl;
                cout << "1. Mil pesos" << endl;
                cout << "2. Dos mil pesos" << endl;
                cout << "3. Cinco mil pesos" << endl;
                cout << "4. Diez mil pesos" << endl;
                cout << "5. Veinte mil pesos" << endl;
                cout << "6. Cincuenta mil pesos" << endl;
                cout << "Ingrese una opcion: ";
                cin >> opcion;

                int valorUtilizado = 0;
                switch (opcion) {
                    case MIL_PESOS:
                        valorUtilizado = 1000;
                        break;
                    case DOS_MIL_PESOS:
                        valorUtilizado = 2000;
                        break;
                    case CINCO_MIL_PESOS:
                        valorUtilizado = 5000;
                        break;
                    case DIEZ_MIL_PESOS:
                        valorUtilizado = 10000;
                        break;
                    case VEINTE_MIL_PESOS:
                        valorUtilizado = 20000;
                        break;
                    case CINCUENTA_MIL_PESOS:
                        valorUtilizado = 50000;
                        break;
                    default:
                        cout << "Opcion invalida. No se realizo el pago." << endl;
                        return;
                }

                int diferencia = costo - valorUtilizado;
                if (diferencia < 0) {
                    cout << "Pago exitoso. No se requieren vueltas." << endl;
                } else {
                    cout << "Pago exitoso. Vueltas: " << diferencia << " pesos colombianos." << endl;
                }

                vehiculoEncontrado = true;
                motos[i].setPlaca("");
                motos[i].setTipo("");
                motos[i].setTiempoIngreso(0);
                espaciosMotosDisponibles++;
                break;
            }
        }
    }

    if (!vehiculoEncontrado) {
        cout << "No se encontro un vehiculo con la placa especificada." << endl;
    }
}