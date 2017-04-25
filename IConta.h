//
// Created by Alisson on 24/04/2017.
//

#ifndef PROJCONTA_ICONTA_H
#define PROJCONTA_ICONTA_H
class IConta{

    public:
        virtual void sacar(double valor) = 0;

        virtual void depositar(double valor) = 0;


};





#endif //PROJCONTA_ICONTA_H
