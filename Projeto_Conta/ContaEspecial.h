#ifndef CONTAESPECIAL_H_INCLUDED
#define CONTAESPECIAL_H_INCLUDED
#include "Conta.h"

class ContaEspecial:public Conta{

    private:
        int varLimiteEspecial = 3;
    public:
        ContaEspecial();
        ContaEspecial(string nomeC,double salarioM,string numConta,double saldo);
       // void definirLimite() override;
};


#endif // CONTAESPECIAL_H_INCLUDED
