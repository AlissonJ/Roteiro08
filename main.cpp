#include <iostream>
#include "Conta.h"
#include "ContaEspecial.h"

int main() {
    Conta c1("Alisson",2000,"114255",7700.89);
    ContaEspecial c2("Luiz",2500,"114023",8300);
    c1.depositar(300);
    cout.precision(2);
    cout<< fixed <<c1.getSaldo()<<endl;
    c1.sacar(500);
    c2.depositar(800);
    cout<< fixed <<c2.getSaldo()<<endl;
    c2.sacar(1000);
    cout<< fixed <<c2.getSaldo()<<endl;
    cout<< fixed <<c1.getSaldo()<<endl;
    c1.definirLimite();
    cout<< fixed<<"Limite conta c1 " <<c1.getLimite()<<endl;
    cout<< fixed<<"Limite conta c2 " <<c2.getLimite()<<endl;


    std::cout << "Hello, World!" << std::endl;
    return 0;
}