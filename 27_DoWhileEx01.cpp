#include <iostream>

int main()
{
    int escolha = 0;
    do // as instruções abaixo serão executadas pelo menos uma vez!
    {
        std::cout << "****Tickets Cinema****"<< std::endl;
        std::cout << "\n 1 - Para Meia Entrada\n";
        std::cout << "\n 2 - Para Inteira\n";
        std::cout << "\n 3 - Sair";
        std::cout << "\n Escolha sua opcao: ";
        std::cin >> escolha;

        switch (escolha)
        {
        case 1: std::cout << "\nTicket Meia Entrada Comprada\n";
            break;
        case 2: std::cout << "\nTicket Inteira Comprado \n";
            break;
        case 3: std::cout << "\nSaindo Menu Tickets... \n";
            break;
        default: std::cout << "\nOpcao Invalida!!\n";
        }

    } while (escolha != 3);//enquanto escolha for diferente de 3 o menu vai 
    //aparecer! pois você está solicitando que fique em loop até que escolha 
    //seja igual a 3 e resultado seja falso saindo do loop do-while
    system("PAUSE");
    return 0;
}
