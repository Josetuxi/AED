#include <string>
#include <cassert>
//#include <iostream>
//#include <cstdio>

int main()
{
    //booleanos
    assert(true);
    assert(not false);
    assert(true and true);
    assert(false or true);
    assert(true != false);
    assert(true == true);

    //caracteres

    assert('a' != 'b');
    assert('J' + 'O' == 74+79);
    assert('P' - 'A' == 80-65);
    assert('P' + 'R' < 200);
    assert('C'- 2 == 'A');
    assert('C'- 2 == 65 and 'C'- 2 == 'A');
    //printf("%c",153);
    
    //Enteros
    assert(200 == 200);
    // Punto Flotante (Reales)  (double)  otros tipos flotantes: (float)     (long double)
    assert(0.5 < 3.0);
    assert(0.5 + 2.9 < 4.1);
    assert(5.4 - 3.5 == 1.9);
    assert(2.0 + 1 == 3.0);
    assert(3E2 == 3e2); //Notacion Cientifica
    assert(3E2 == 3*10*10);
    assert(3E2 == 300.0);
    assert(3E6 == 3000000.0);
    assert(3E6 == 3'000'000.0); // ' sirve para separar digitos 
    assert(3E6 == 3'0'0'0'0'0'0.0); // No hace falta que sea de forma decimal.
    assert(1.0); 
    //mas operaciones
    //estos son los tipos de assert visto en clase
    
    //string
    using namespace std::string_literals;
    assert(12 == std::string("Las Palabras").length());
    assert(12 == "Las Palabras"s.length());
    assert("abcd"s == "ab"s + "cd"s);
    
}
