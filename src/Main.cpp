#include <iostream>
#include <string>
#include "Nodo.h"
#include "LinkedListSTR.h"
int main()
{
    std::cout << "Hello World!" << std::endl;

    LinkedListSTR nomes;
    nomes.addCheck("Lucas");
    nomes.add("Lucas1");
    nomes.addCheck("Lucas");
    nomes.addCheck("Lucas1");
    nomes.addCheck("Lucas2");
    nomes.removeByElement("Lucas");
    nomes.removeByElement("Lucas2");
    
    nomes.imprimeLista();
    return 0;
}
