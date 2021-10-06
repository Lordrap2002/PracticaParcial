#ifndef ADMIN_H
#define ADMIN_H

#include <iostream>
#include <map>
#include "Propietario.h"
#include "Reventa.h"
#include "Fundador.h"

using namespace std;

class Admin{
    private:
        map<int, Propietario*> propietarios;
        int tarifaAdmin;
    public:
        Admin();
        void impRecaudoAdmin();
        void impBeneficios(int id);
        void impProConParq();
        void cambiarTipoPropietario(int id);
};

#endif