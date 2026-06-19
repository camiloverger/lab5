/* CAMILO - GONZALO - FRANCO */

#include "IControladorUsuario.h"
#include "IControladorSesion.h"
#include "IControladorMaterial.h"
#include "IControladorPrestamo.h"
#include "IControladorInformacion.h"

using namespace std;

void main(){

    bool flag = true;
    while(flag){

        cout << "Bienvenido!\nElija una opción:\n(1) Iniciar Sesión\n(2) Cerrar Sesión\n(3) Registrar Lector\n(4) Registrar Funcionario\n(5) Registrar Material\n(6) Registrar Préstamo\n(7) Consultar Préstamos Lector\n(8) Ver Información Material\n(9) Puntuar Material\n(10) Consultar Puntajes Material\n(11) Eliminar Lector\n(12) Eliminar Material\n(0) Salir\nOpción: ";

        int opcion;
        cin >> opcion;

        switch(opcion) {

            case 1: // iniciar sesión
                break;
            case 2: // cerrar sesión
                break;
            case 3: // registrar lector
                break;
            case 4: // registrar funcionario
                break;
            case 5: // registrar material
                break;
            case 6: // registrar préstamo
                break;
            case 7: // consultar préstamos lector
                break;
            case 8: // ver información material
                break;
            case 9: // puntuar material
                break;
            case 10: // consultar puntajes material
                break;
            case 11: // eliminar lector
                break;
            case 12: // eliminar material
                break;
            case 0: // salir
                flag = false;
                break;
            default:
                cout << "Opción incorrecta.\n";
                break;

        }

    }

}
