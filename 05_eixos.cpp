#include <iostream>
///Andressa Yumi Portella
//Data 17/07/2023
/* Este programa a seguir coloca na tela a associação entre variáveis de tipos string e inteiro */

    namespace eixos
    {
        int x;
        int y; 
        int z;
    }

    int main(int argc, char * argv[])
    {
        eixos::x=4;
        eixos::y=5;
        eixos::z=3;
        std::cout << " X: " <<eixos::x << " Y: " << eixos::y << " Z: " << eixos::z << std::endl;

        system("color 0F");
        system("Pause");
    
        return 0;
    }
