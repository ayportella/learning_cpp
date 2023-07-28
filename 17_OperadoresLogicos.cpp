#include <iostream>

int main()
{
    double Numero;
    bool ResultadoLogico, ResultadoLogico2;
    std::cout << "Digite um Numero: ";
    std::cin >> Numero;
    std::cout << "True = 1 e False = 0" << "\n";
    //A variavel booleaResultadoLogico ira receber 
    //o valor logico da comparacao (Numero >100)
    // numero é maior que cemResultadoLogico = ((Numero > 100) && (Numero != 0));
    ResultadoLogico = ((Numero > 100) && (Numero != 0));
    std::cout << "O Resultado Logico Expresao ((Numero > 100) && (Numero != 0)) eh: " << ResultadoLogico << std::endl;
    ResultadoLogico2 = ((Numero == 100) || (Numero > 200) && (Numero < 1000));
    std::cout << "O Resultado Logico Expresao ((Numero == 100) || (Numero > 200) && (Numero < 1000)) eh: " << ResultadoLogico2 << std::endl;
    system("PAUSE");

}
