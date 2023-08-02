#include <iostream>
#include <string>


int main()
{
    bool bFezSol, bCarroPronto, bSalarioDepositado;
	bool bAcesso;
    std::string SenhaDeAcesso = "cmaismais";
    std::string SenhaDigitada;

    std::cout << "Digite a senha de acesso: ";
    std::cin >> SenhaDigitada;

    /*Se a senha digitada pelo usuario e armazenada na variavel SenhaDigitada 
    for igual a senha de acesso as instrucoes apois o if senao executadas pois 
    a condicao foi verdadeira true 1 */
    if (SenhaDigitada == SenhaDeAcesso)
    {
        std::cout << "\nAcesso Permitido!" << "\n";
        //aqui aproveitamos para indicar que o acesso foi concedido 
        //atraves de outra variavel booleana bAcesso
        bAcesso = true;
        //system("PAUSE");

    }
    /*Se a condicao for falsa entao as instrucoes do else serao executadas*/
    else
    {
        std::cout << "\n Acesso Negado!!!" << "\n";
        system("PAUSE");
        exit(0); //sai do programa, forca o fechamento da aplicacao
    }

    bFezSol = false;
    bCarroPronto = false;
    bSalarioDepositado = false;

    //aqui podemos deixar apenas a variavel 
    // nao eh necessario == pois sera buscado o valor de  bAcesso e ficara assim:
    //if (true) ou if(false)
    if (bAcesso)
    {
        if (bFezSol || bCarroPronto || bSalarioDepositado)
        {
            std::cout << "\nVai dar Praia!!!" << "std::endl";
        }
        //Aqui sera executado se a condicao do if falhar e se 
        //bsalariodepositado for false
        //da mesma forma aqui 
        //Como bSalarioDeposito é falso !(não) Falso dará True e ai entra no else if
        else if (!bSalarioDepositado) 
        {
            std::cout << "Nao vai dar Praia, mas o salario foi depositado!" 
            << "\n";
        }
    }


    system("PAUSE");



}
