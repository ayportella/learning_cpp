#include <iostream>
#include <string>

int main()
{
    //voce pode usar ( ) para iniciar variaveis com valores literais
    //{ } é para inicializacao uniforme, permite tanto iniciar valores literais
    //(int, float, caractere, quanto valores escalares, vetores, enums, etc)
    int NumeroInteiro (12);
    float NumeroReal (34.56);
    char Caractere ('c');
    //String é uma cadeia de caracteres, é um texto e deve estar entre aspas 
    //duplas "texto da string"
    //para declarar uma string usamos std::string
    std::string Texto ("Vou Aprender C++ e descobrir o lado sombrio da forca");
    //%d indica que voce quer que seja colocado na string:
    //"Valor Numero Inteiro = %d " o valor da variavel NumeroInteiro
    //std::printf("Valor Numero Inteiro = %d \n", NumeroInteiro);
    //%d é chamado de especificador de formato
    //Cada tipo de dado tem um especificador de formato
    //printf é uma função que veio de linguagem C
    //std::printf("Valor Numero Real = %.4f \n", NumeroReal);
    std::printf("Valor Inteiro = %d - Real = %.2f - Caractere: %c  - Texto: %s "
    , NumeroInteiro, NumeroReal, Caractere, Texto.c_str());
    std::cout << "Texto da String: " << Texto << "\n";

    std::printf("o Valor do Caractere Digitado: %c na Tabela ASCII é: %d \n", Caractere, Caractere);
    /*%d numero decimal inteiro (int)
    %f numero decimal de ponto flutuante, serve tanto para float como para double
    %lf serve para double (l-long, f-float - lf)
    %c caractere: imprime o caractere que tem o codigo ascii correspondente ao valor dado
    %s sequencia de caracteres (string, em ingles)
    */

    system("PAUSE");
    return 0;



}
