//
// Created by Alisson on 25/04/2017.
//

#ifndef PROJETOIMOVEL_CASA_H
#define PROJETOIMOVEL_CASA_H

#include "Imovel.h"

class Casa:public Imovel{
    private:
        int numeroDePavimentos;
        int quantidadeDeQuartos;
        double areaDoTerreno;
        double areaConstruida;
    public:
        int getNumeroDePavimentos();
        void setNumeroDePavimentos();
        int getQuantidadeDeQuartos();
        void setQuantidadeDeQuartos();

};
#endif //PROJETOIMOVEL_CASA_H
