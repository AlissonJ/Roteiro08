//
// Created by Alisson on 25/04/2017.
//

#ifndef PROJETOIMOVEL_IMOVEL_H
#define PROJETOIMOVEL_IMOVEL_H

#include "Endereco.h"
#include <string>
using namespace std;

class Imovel:public Endereco{
    private:
        Endereco endereco;

    public:
        Endereco getEndereco();
        virtual string getDescricao();


};


#endif //PROJETOIMOVEL_IMOVEL_H
