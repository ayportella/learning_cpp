#include <iostream>

int main()
{
    double MaiorNumero, Numero01, Numero02;

    std::cout << "Digite Primeiro Numero: ";
    std::cin >> Numero01;
    std::cout << "\nDigite Segundo Numero: ";
    std::cin >> Numero02;

    //neste caso o operador ternario ? esta sendo utilizado 
    //para atribuir um valor a uma variavel
    //se Numero01 for maior que Numero02 MaiorNumero recebe valor de numero01
    //caso contrario (senao) MaiorNumero recebe Numero02

    MaiorNumero = (Numero01 > Numero02) ? Numero01 : Numero02;
    std::cout << "\nMaior Numero Digitado: " << MaiorNumero << "\n";
    //Aqui o operador ? está sendo utilizado para decidir que comando será executado. Se for true o primeiro std:: vai para tela
    //Se for falso, o segundo std vai para a tela

    if (Numero01 > Numero02) 
        std::cout << "Numero01 Maior que Numero02 << \n";
    else
    std::cout << "Numero02 Maior que Numero01 << \n";

 
    system("PAUSE");


}
