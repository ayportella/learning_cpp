#include <iostream>
//A diretiva de pré-processador #include
//indica para incluir o arquivo de cabeçalho 
//iostream

int main()
//função principal. Todo programa C++ começa
//com esta função principal main()
{ //chaves
    // { indica início de um bloco
    //cout comando de saída de dados 
    //neste caso está solictando para
    //colocar na saída padrão (tela)
    //a frase especificada
    std::cout << "Primeiro Codigo" << std::endl;
    /*endl indica para inserir um caracter de
    quebra de linha na frase ("string")*/
    system("color 5F");
    system("Pause");
    //chama o shell do windows (DOS)
    //e coloca este comando PAUSE
    return 0;
    //retorna para o sistema operacional zero
    //zero é o padrão para informar que tudo deu certo!
    //assim se a função main der certo ela retornará 0(zero)

} //indica final de um bloco
