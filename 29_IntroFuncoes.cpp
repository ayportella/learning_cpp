#include <iostream>

// O que a função vai retornar?
// tipo de retorno da função
int SomaAUmNumero(int Numero, int NumeroaSerSomado)

{
    int SomaDosNumeros;
    SomaDosNumeros = Numero + NumeroaSerSomado;
    return SomaDosNumeros;
}

int main()
{
    int Numero, NumeroaSerSomado;
    std::cout << "Digite um numero: " << "\n";
    std::cin >> Numero;
    std::cout << "Digite o numero a ser somado: " << "\n";
    std::cin >> NumeroaSerSomado;
    std::cout << "A soma do numero " << Numero << " com o Numero " << NumeroaSerSomado << " Sera " << SomaAUmNumero(Numero, NumeroaSerSomado) << "\n";
    system("PAUSE");
    return 0;
