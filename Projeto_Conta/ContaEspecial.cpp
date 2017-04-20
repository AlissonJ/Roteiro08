#include "ContaEspecial.h"
using namespace std;

void ContaEspecial::definirLimite(){
   setLimite( getSalarioMensal() * varLimiteEspecial );
}

ContaEspecial::ContaEspecial(){}

ContaEspecial::ContaEspecial(string nomeC,double salarioM,string numConta,double saldo){
    setNomeCliente(nomeC);
    setSalarioMensal(salarioM);
    setNumeroConta(numConta);
    setSaldo(saldo);
}


