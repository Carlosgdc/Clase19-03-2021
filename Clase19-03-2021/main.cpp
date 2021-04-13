//
//  main.cpp
//  Clase19-03-2021
//
//  Created by Countyfoot on 4/12/21.
//
// En este programa estudiaremos el alcance que tienen las variables.

#include <iostream> // Comenzamos añadiendo las librerias.

const int a = 20; // Esta es una variable global, ya que se encuentra fuera de cualquier función.
// En este caso escribimos que esta variable era constante, un mal habito de programación es escribir una variable global que pueda ser modificable.

void print_message(int a);

// El operador de resolución de alcance consiste en la notación "::" y luego una variable.
// Lo que realiza este operador es que el computador entienda que no nos referimos a la variable local en la función, si no por el contrario, nos referimos a la variable global.

int main(void)
{
    int a = 12; // Declaramos e inicializamos una variable con el mismo nombre y tipo que nuestra variable global.
    std::cout << "Direccion de a en main: " << &a << std::endl;
    std::cout << "Direccion de a global en main: " << &::a << std::endl;
    print_message(a);
    return 0;
}

void print_message(int a) // El valor de esta variable es 12 debido a que en la función main se encuentra añadida esta función, por lo cual dentro de la función print_message esta variable es diferente a las otras dos pero con el mismo valor que la variable de la función main.
{
    std::cout << "Hello world!\n";
    std::cout << "Parametro a: " << a << "\n";
    std::cout << "Direccion de a en print: " << &a << std::endl;
}
// Al ejecutar este programa con la instrucción &a podemos observar la dirección que posee la variable en la memoria, asi, podremos observar que nuestras tres variables poseen direcciones diferentes debido al alcance que posee cada una de ellas en donde existen sin ningun error de compilación.
