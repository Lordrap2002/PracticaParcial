#include "View.h"

View::View(){
    
}

void View::mostrarMenu(){
    int opcion, id;
    do{
        cout << "Menu:" << endl
            << "1. Imprimir Recaudo Admin." << endl
            << "2. Imprimir Beneficios." << endl
            << "3. Imprimir propietarios con parqueadero." << endl
            << "4. Cambiar tipo de propietario." << endl
            << "0. Salir." << endl;
        cin >> opcion;
        switch(opcion){
            case 1:
                edificio.impRecaudoAdmin();
                break;
            case 2:
                cout << "Escriba la id del propietario: ";
                cin >> id;
                edificio.impBeneficios(id);
                break;
            case 3:
                edificio.impProConParq();
                break;
            case 4:
                cout << "Escriba la id del propietario: ";
                cin >> id;
                edificio.cambiarTipoPropietario(id);
                break;
        }
    }while(opcion);
}