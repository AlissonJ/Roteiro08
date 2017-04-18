#include<ContaEspecial.h>
#include<Conta.h>

void ContaEspecial::definirLimite(){
    Conta::limite = (Conta::salarioMensal * 3);
}
