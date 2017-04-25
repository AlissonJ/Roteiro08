//
// Created by Alisson on 24/04/2017.
//

#ifndef PROJCONTA_CONTAESPECIAL_H
#define PROJCONTA_CONTAESPECIAL_H
#include "Conta.h"
using namespace std;

class ContaEspecial:public Conta{
    private:
        int varLimiteEspecial = 3;
        void definirLimite() override;
    public:
        ContaEspecial(string nCliente, double salario,string numConta, double sal);




};

#endif //PROJCONTA_CONTAESPECIAL_H
