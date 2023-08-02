#include <iostream>

int main()
{
    int Num1{ 10 }, Num2{ 20 }, Resultado;
    //Num1 = Num2++;
    //Num2 ++ é o mesmo que Num2 = Num2 +1;
    /*No entanto se ++ vier depois da variavel devemos ler da seguinte forma
    Num2++ pegue logo o valor da variavel Num2 e somente depois da instrução 
    incremente em 1 o valor de Num2
    Logo Num1 = Num2++ é equivalente às seguintes instruções:
    Num1= Num2;
    Num2 = Num2 +1;
    Chamamos isso de pós-fixado
    Assim se o ++ ou -- estiver após a variavel, ela somente sera 
    incrementada apos a execucao da instrucao*/

    //Num2 = ++Num1;
    //Agora temos outra situaçao. O operador ++ está PRÉ-FIXADO
    /*Assim a instrução seria equivalente a:
    Num1= Num1 + 1;
    Num2 = Num1;
    Ou seja se o operador estiver pré-fixado, primeiro a variável será 
    incrementada de 1 para depois ser atribuida a outra variavel 
    */
   std::cout << "Valor Atual de Num1: " << Num1 << " e " << "Num2: " << Num2 << "\n";
   Num1 = Num2++;
   std::cout << "Valor Atual de Num1: " << Num1 << " e " << "Num2: " << Num2 << "\n";
   Num2 = ++Num1;
   std::cout << "Valor Atual de Num1: " << Num1 << " e " << "Num2: " << Num2 << "\n";
   system("PAUSE");
}
