#include <iostream>
#include <iomanip>

int main()
{
    int Numero;
    float Numero2;
    double Numero3;
    Numero = 45;
    Numero2 = 55.56f;
    Numero3 = 45345.904555;
    std::cout << "Valor Numero: " << Numero << std::endl;
    std::cout << "Tamanho da Variavel Numero: " << sizeof(Numero) << "Bytes" 
    "\n";
    std::cout << "Endereco Carregado na Memoria: " << &Numero << "\n";

    std::cout << "Valor Numero2: " << Numero2 << std::endl;
    std::cout << "Tamanho da Variavel Numero2: " << sizeof(Numero2) << "Bytes" 
    "\n";
    std::cout << "Endereco Carregado na Memoria: " << &Numero2 << "\n";

    std::cout << "Valor Numero3: " << std::setprecision(12);
    std::cout << Numero3 << std::endl;
    std::cout << "Tamanho da Variavel Numero3: " << sizeof(Numero3) << "Bytes" 
    "\n";
    std::cout << "Endereco Carregado na Memoria: " << &Numero3 << "\n";


    system("PAUSE");
    
}
