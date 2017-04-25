//
// Created by Alisson on 24/04/2017.
//
#include "Conta.h"
#include <iostream>

Conta::Conta(string nCliente, double salario, string numConta, double sal) {
    nomeCliente = nCliente;
    salarioMensal = salario;
    numeroConta = numConta;
    saldo = sal;
    definirLimite();
}

const string &Conta::getNomeCliente() {
    return nomeCliente;
}

void Conta::setNomeCliente(const string &nCliente) {
    nomeCliente = nCliente;
}

double Conta::getSalario() {
    return salarioMensal;
}

void Conta::setSalario(double salario) {
    salarioMensal = salario;
}

string Conta::getNumConta() {
    return numeroConta;
}

void Conta::setNumConta(string numConta) {
    numeroConta = numConta;
}

double Conta::getSaldo() {
    return saldo;
}

void Conta::setSaldo(double s) {
    saldo = s;
}

void Conta::sacar(double valor) {
    if(getSaldo() < valor ){
        cout<<"Saldo Insuficiente"<<endl;
    }else{
        setSaldo(getSaldo() - valor);
        cout<<"saque realizado"<<endl;
    }
}

void Conta::depositar(double valor) {
    setSaldo( getSaldo() + valor);
    cout<<"deposito realizado"<<endl;
}

void Conta::definirLimite() {
    limite = (varLimite * salarioMensal);
}
double Conta::getLimite() {
    return limite;
}

