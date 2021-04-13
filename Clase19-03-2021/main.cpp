//
//  main.cpp
//  Clase19-03-2021
//
//  Created by Countyfoot on 4/12/21.
//
// En este programa estudiaremos que es y como se utiliza una función lambda.

// requires c++11: -std=c++11
#include <iostream>
// La función lambda es una función muy corta que para evitar escribirla como una función principal se puede escribir en una declaración como un objeto.
// [](){}; -> [capture](argumentos){instrucciones;};

int main(int argc, char *argv[]) {
    auto flambda = [](int a, int b) { return a < b; }; // La función auto nos permite que el programa al ser ejecutado deduzca por si mismo que nos estamos refiriendo a una función ya que al hacerlo por el metodo tradicional deberiamos escribir un tipo de función muy complicado.
    bool flag = flambda(3, 4);
    std::cout << flag << "\n";
    std::cout << flambda(4, 3) << "\n";
    return 0;
}
