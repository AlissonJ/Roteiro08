#include "Conta.h"
#include<string>

using namespace std;

Conta::Conta(string nome, double salario, string numConta, double sal){
    nomeCliente = nome;
    salarioMensal = salario;
    numeroConta = numConta;
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

void Conta::setLimite(double lim){
    limite = lim;
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
void Conta::sacar(double valor){
    if(getSaldo() < valor ){
        cout<<"Saldo Insuficiente"<<endl;
    }else{
        setSaldo(getSaldo() - valor);
    }
}

void Conta::depositar(double valor){
    setSaldo( getSaldo() + valor);
}


