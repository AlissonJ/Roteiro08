#ifndef ICONTA_H_INCLUDED
#define ICONTA_H_INCLUDED
#include<string>

class IConta{

    public:

        virtual void sacar(double valor) = 0;

        virtual void depositar(double valor) = 0;
};




#endif // ICONTA_H_INCLUDED
