#include <iostream>


int main()
{

    float Valor1, Valor2, Valor3;
    float Resultado {0.0};
    std::cout << "Digite o primeiro valor: " << "\n";
    std::cin >> Valor1;
    std::cout << "Digite o segundo valor: " << "\n";
    std::cin >> Valor2;
    std::cout << "Digite o terceiro valor: " << "\n";
    std::cin >> Valor3;
    Resultado = ((Valor1 + Valor2 + Valor3)/3);
    std::cout << "Numeros Digitados: " << Valor1 << " " << Valor2 << " " <<
     Valor3 << "\n";
    std::cout << "Media dos Valores: " << Resultado << "\n";

    system("PAUSE"); 
    

}
