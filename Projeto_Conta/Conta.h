#ifndef CONTA_H_INCLUDED
#define CONTA_H_INCLUDED
#include "IConta.h"
#include<string>
using namespace std;

class Conta:public IConta{
    private:
        string nomeCliente;
        double salarioMensal;
        string numeroConta;
        double saldo;
        double limite;
        int varLimite = 2;
    public:
        Conta(string nome,double salario,string numConta,double sal);
        string getNomeCliente();
        void setNomeCliente(string n);
        double getSalarioMensal();
        void setSalarioMensal(double salarioM);
        string getNumeroConta();
        void setNumeroConta(string numero);
        double getSaldo();
        void setSaldo(double s);
        void sacar(double valor);
        void depositar(double valor);
       // virtual void definirLimite();
        void setLimite(double lim);

};



#endif // CONTA_H_INCLUDED
