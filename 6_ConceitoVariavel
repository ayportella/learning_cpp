#include <iostream>
#include <iomanip>
#include <Windows.h>

int main()
{
    //Função que configura o console windows para mostrar acentos
    SetConsoleOutputCP(65001);

    //declaracao de variaveis
    //primeiro colocamos qual o tipo de variavel que desejamos que
    //o computador crie ao executar nosso programa
    //nesse caso escolhemos ambas como int (integer)
    //Ou seja o local da mamória que estamos solicitando ao computador
    //dever ser capaz de armazenar números inteiros (-3, -2, -1, 0, 1, 2)
    //Então int NumVidas pode ser lido da seguinte forma:
    /*Computador por favor me forneça um local namemória RAM com tamanho
    suficiente para armazenar um número inteiro e coloque o nome deste local
    como sendo NumVidas*/
    /*Eu sei que vcê só entende endereço de memória mas vai facilitar muito 
    para mim se você nomear este endereço de memória com um nome. Desta forma
    esta abstração vai me permitir manipular melhor este endereço de memória
    pois seria complicado ter que ficar digitando: 010FFDC8 = 5 */
    /*BEM MELHOR SE EU USAR UM NOME AO INVES DE UM ENDEREÇO QUE É DIFÍCIL
    DE MEMORIZAR E QUE MUDA A DEPENDER DA DISPONIBILIDADE DESTE ESPAÇO
    NA MEMÓRIA RAM!*/

    int NumVidas =5;
    //ACIMA O COMPUTADOR IRÁ ALOCAR UM ESPAÇO DE MEMÓRIA DO TIPO INTEIRO
    /*DEPOIS VAI ATÉ ESTE LOCAL NA RAM E VAI COLOCAR O VALOR 5*/


    int Pontuacao = 1350;
    //ACIMA O COMPUTADOR IRÁ ALOCAR UM ESPAÇO DE MEMÓRIA DO TIPO INTEIRO 
    /*DEPOIS VAI ATÉ ESTE LOCAL NA RAM E VAI COLOCAR O VALOR 1350*/


    std::cout << "***************" << std::endl;
    std::cout << "Vidas Jogador: " << NumVidas << std::endl;
    std::cout << "Pontuação: " << Pontuacao << std::endl;
    std::cout << "Tamanho da Variável NumVidas " << sizeof(NumVidas) << "\n";
    std::cout << "Tamanho da Variável NumVidas " << sizeof(NumVidas) << "\n";
    std::cout << "Endereco que Numvidas ocupa na Memória Ram: " <<&NumVidas << "\n";
    std::cout << "Endereco que Pontuacao ocupa na Memória Ram: " <<&Pontuacao << "\n";
    std::cout << "***************" << std::endl;

    std::cout << "******DURANTE O JOGO*********" << std::endl;

    //Vá até a região de memória rotulada com o nome de pontuação e coloque 
    //agora em soma o valor que está contido nela mais 150
    //Pontuacao = 1350 + 150;
    //Pontuacao = 1500;
    Pontuacao = Pontuacao + 150; //Pontuacao += 150;

    //Vá até a região de memória rotulada com o nome de NumVidas e coloque 
    //agora subtração o valor que está contido nela menos 1
    //NumVidas = 5 - 1;
    //NumVidas = 4;
    NumVidas = NumVidas - 1; //NumVidas -= 1;

    std::cout << "Vidas Jogador: " << NumVidas << std::endl;
    std::cout << "Pontuação: " << Pontuacao << std:: endl;
    std::cout << "***************" << std::endl;

    system("PAUSE");
