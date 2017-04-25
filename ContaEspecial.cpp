//
// Created by Alisson on 24/04/2017.
//

#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(string nCliente, double salario, string numConta, double sal) : Conta(nCliente, salario,
                                                                                                   numConta, sal) {
    setNomeCliente(nCliente);
    setSalario(salario);
    setNumConta(numConta);
    setSaldo(sal);
    definirLimite();
}

void ContaEspecial::definirLimite() {
    Conta::limite = (  varLimiteEspecial * getSalario() );
}
