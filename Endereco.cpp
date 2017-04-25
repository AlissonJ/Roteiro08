//
// Created by Alisson on 25/04/2017.
//
#include "Endereco.h"

Endereco::Endereco(string logra,string ba,int num,string ci,string ce) {
    logradouro = logra;
    bairro = ba;
    numero = num;
    cidade = ci;
    cep = ce;
}
string Endereco::getLogradouro() {
    return logradouro;
}

string Endereco::getBairro() {
    return bairro;
}

int Endereco::getNumero() {
    return numero;
}

string Endereco::getCidade() {
    return cidade;
}

string Endereco::getCep() {
    return cep;
}
