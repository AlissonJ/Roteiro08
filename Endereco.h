//
// Created by Alisson on 25/04/2017.
//

#ifndef PROJETOIMOVEL_ENDERECO_H
#define PROJETOIMOVEL_ENDERECO_H

#include <string>
using namespace std;
class Endereco{
    private:
        string logradouro;
        string bairro;
        int numero;
        string cidade;
        string cep;
    public:
        Endereco(string logra,string ba,int num,string ci,string ce);
        string getLogradouro();
        string getBairro();
        int getNumero();
        string getCidade();
        string getCep();
};
#endif //PROJETOIMOVEL_ENDERECO_H
