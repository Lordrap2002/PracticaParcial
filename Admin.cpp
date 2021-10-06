#include "Admin.h"

Admin::Admin(){
    this->tarifaAdmin = 100;
    Propiedad a(1, 1, 120, true);
    Fundador* x = new Fundador("juan", 1, a);
    this->propietarios.insert({1, x});

    Propiedad b(2, 2, 160, false);
    Fundador* x1 = new Fundador("jose", 2, b);
    this->propietarios.insert({2, x1});

    Propiedad c(3, 1, 100, true);
    Reventa* x2 = new Reventa("juana", 3, c);
    this->propietarios.insert({3, x2});

    Propiedad d(4, 4, 1120, true);
    Fundador* x3 = new Fundador("juanito", 4, d);
    this->propietarios.insert({4, x3});

    Propiedad e(6, 2, 120, false);
    Reventa* x4 = new Reventa("juance", 5, e);
    this->propietarios.insert({5, x4});

    Propiedad f(6, 1, 10, true);
    Reventa* x5 = new Reventa("juanpa", 6, f);
    this->propietarios.insert({6, x5});
}

void Admin::impRecaudoAdmin(){
    float recaudo = 0;
    int i;
    for(i = 1; i < propietarios.size() + 1; i++){
        recaudo += this->propietarios[i]->calcularPagoAdmin(tarifaAdmin);
    }
    cout << recaudo << endl;
}

void Admin::impBeneficios(int id){
    this->propietarios[id]->mostrarBeneficios();
}

void Admin::impProConParq(){
    int i;
    for(i = 1; i < propietarios.size() + 1; i++){
        if(this->propietarios[i]->getPropiedad().getParqueadero()){
            cout << this->propietarios[i]->getNombre() << endl;
        }
    }
}

void Admin::cambiarTipoPropietario(int id){
    Propiedad a = this->propietarios[id]->getPropiedad();
    this->propietarios.erase(id);
    Reventa* x = new Reventa("santi", id, a);
    this->propietarios.insert({id, x});
    
}
