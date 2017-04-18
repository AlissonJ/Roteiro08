#ifndef CONTAESPECIAL_H_INCLUDED
#define CONTAESPECIAL_H_INCLUDED
#include<IConta.h>
#include<Conta.h>

class ContaEspecial:public IConta{

    public:
        void definirLimite();
} ;


#endif // CONTAESPECIAL_H_INCLUDED
