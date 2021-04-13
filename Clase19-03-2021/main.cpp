//
//  main.cpp
//  Clase19-03-2021
//
//  Created by Countyfoot on 4/12/21.
//
// En este programa estudiaremos el traspaso de valor y copiar por referencia una variable

#include <iostream>

int add1(int a, int b);
int add2(int a, int & c); // a es una copia del valor, estamos realizando un traspaso del valor de a, mientras que c es una referencia/homonimo. Al hacer esto, no se esta creando una nueva variable si no que se toma como referencia la variable ya escrita de la otra función, es decir, int b.

int main(int argc, char *argv[])
{
    int a = 12;
    int b = -10;

    std::cout << "Direccion de a en main: " << &a << std::endl;
    std::cout << "Direccion de b en main: " << &b << std::endl;
    std::cout << add1(a, b) << "\n";
    std::cout << "Valor de b en main: " << b << std::endl;
    std::cout << add2(a, b) << "\n";
    std::cout << "Valor de b en main: " << b << std::endl;
    return 0;
}

int add1(int a, int b)
{
    int r = a + b;
    std::cout << "Direccion de a local en addition copy: " << &a << std::endl;
    std::cout << "Direccion de b local en addition copy: " << &b << std::endl;
    return r;
}

int add2(int a, int & c)
{
    int r = a + c;
    std::cout << "Direccion de a local en addition copy: " << &a << std::endl;
    std::cout << "Direccion de c local en addition ref : " << &c << std::endl; // Al revisar la dirección de nuestra variable & c tenemos que es la misma dirección de memoria que nuestra variable int b. Por lo cual ambas variables se encuentran refiriendose a un mismo espacio d ememoria y por lo tanto son iguales.
    //c = -32; // Al realizar esta operación tanto el valor de c como de b cambiaraian, por lo cual es bueno colocar en la función principal un costante para que asi sea imposible que puedan modificarse.
    return r;
}
