#include <iostream>

int main() {
    //basicamente operadores

    int students = 20;

    //students = students + 1;
    //students+=1; inclusão mais específica
    //sudents++; //inclusão de +1, melhor para loops em

    //students = students -1;   ---- subtração
    //students-=1;
    //students--;


    //students = students * 2; --- multiplicação
    //students*=2;

    //students = students / 2; --- divisão
    //students/=2;

    int remainder = students % 3; //-- resto da divisão

    std::cout << remainder;


    return 0;
}