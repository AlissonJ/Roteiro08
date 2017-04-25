//
// Created by Alisson on 24/04/2017.
//

#ifndef PROJCONTA_CONTA_H
#define PROJCONTA_CONTA_H

#include <string>
#include "IConta.h"
using namespace std;
class Conta:public IConta{

    private:
        string nomeCliente;
        double salarioMensal;
        string numeroConta;
        double saldo;
        int varLimite = 2;
    protected:
    double limite;
public:
        Conta(string nCliente, double salario,string numConta, double sal);
        const string &getNomeCliente();
        void setNomeCliente(const string &nCliente);
        double getSalario();
        void  setSalario(double salario);
        string getNumConta();
        void setNumConta(string numConta);
        double getSaldo();
        void setSaldo(double s);
        void sacar(double valor);
        void depositar(double valor);
        virtual void definirLimite();
        double getLimite();
};





#endif //PROJCONTA_CONTA_H
