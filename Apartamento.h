//
// Created by Alisson on 25/04/2017.
//

#ifndef PROJETOIMOVEL_APARTAMENTO_H
#define PROJETOIMOVEL_APARTAMENTO_H

#include "Imovel.h"

class Apartamento:public Imovel{
    private:
        string posicao;
        double valorDOCondominio;
        int numeroDeVagasNaGaragem;
};
#endif //PROJETOIMOVEL_APARTAMENTO_H
