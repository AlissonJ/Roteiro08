#ifndef CONTA_H_INCLUDED
#define CONTA_H_INCLUDED
#include<IConta.h>

class Conta:public IConta{
    private:
        string nomeCliente;
        double salarioMensal;
        string numeroConta;
        double saldo;
        double limite;
    public:
        Conta();
        Conta(string nomeC, double salarioM, string numeroC, double sal);
        string getNomeCliente();
        void setNomeCliente(string n);
        double getSalarioMensal();
        void setSalarioMensal(double salarioM);
        string getNumeroConta();
        void setNumeroConta(string numero);
        double getSaldo();
        void setSaldo(double s);
        //double getLimite();
        //void setLimite(double l);
        virtual void definirLimite();
};



#endif // CONTA_H_INCLUDED
