#include <iostream>

int main()
{
    int Numero01, Numero02;
    int Resultado;
    std::cout << "Digite o primeiro numero: " << "\n";
    std::cin >> Numero01;
    std::cout << "Digite o segundo numero: " << "\n";
    std::cin >> Numero02;
    std::cout << Numero02 << "\n";
    Resultado = Numero01 % Numero02;
    std::cout << "O Resto da divisão de dois numeros: " << Resultado << "\n";
    system("PAUSE");
}
