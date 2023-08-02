#include <iostream>

int main()

{
    int Num1, Num2;
    char Operacao;
    std::cout << "Digite um Numero: ";
    std::cin >> Num1;
    std::cout << "Digite outro Numero: ";
    std::cin >> Num2;
    std::cout << "\nQual Operacao Deseja Efetuar? \n+ Adicao \n- Subtracao \n* Multiplicacao \n/ Divisao";
    std::cout << "\nDigite sua opcao: ";
    std::cin >> Operacao;

    //O Usuario vai digitar um caractere. Como um carectere é mapeado como 
    //inteiro da tabela ascii o switch este tipo de expressao
    //Logo Operacao pode ser + - * /
    switch (Operacao)
    {
    case '+': 
        std::cout << "\nSoma de Num1 + Num2 = " << Num1 + Num2;
        break;
    case '-':
        std::cout << "\nSubtracao de Num1 - Num2 = " << Num1 - Num2;
        break; 
    case '*':
        std::cout << "\nMultiplicacao de Num1 * Num2 = " << Num1 * Num2;
        break;
    case '/':
        std::cout << "\nDivisao de Num1 / Num2 = " << Num1 / Num2;
    //Caso Operador não tenha um valor de nenhum destes casos
    //voce pode colocar de forma opcional um valor padrao(default) que sera 
    //executado se nenhum dos casos sejam validos
    default:
        std::cout << "\nVoce nao digitou um operador valido! ";
        break;
    }
    std::cout << "\n";
    system("PAUSE");

}
