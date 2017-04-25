//
// Created by Alisson on 25/04/2017.
//

#ifndef PROJETOIMOVEL_TERRENO_H
#define PROJETOIMOVEL_TERRENO_H

#include "Imovel.h"

class Terreno:public Imovel{

    private:
        double area;
    public:
        double getArea();
        void setArea();
};


#endif //PROJETOIMOVEL_TERRENO_H
