#include<Conta.h>

Conta::Conta(){}

Conta::Conta(string nomeC, double salarioM, string numeroC, double sal){
    nomeCliente = nomeC;
    salarioMensal = salarioM;
    numeroConta = numeroC;
    saldo = sal;
}

string Conta::getNomeCliente(){
    return nomeCliente;
}

void Conta::setNomeCliente(string n){
    nomeCliente = n;
}

double Conta::getSalarioMensal(){
    return salarioMensal;
}

void Conta::setSalarioMensal(double salarioM){
    salarioMensal = salarioM;
}

string Conta::getNumeroConta(){
    return numeroConta;
}

void Conta::setNumeroConta(string numero){
    numeroConta = numero;
}

double Conta::getSaldo(){
    return saldo;
}

void Conta::setSaldo(double s){
    saldo = s;
}

void Conta::definirLimite(){
    limite = ( 2 * getSalarioMensal() );
}
