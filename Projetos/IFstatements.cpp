#include <iostream>

int main () {

    //if = fazer algo se o condicional for verdadeiro, senão, não fazer

    int age;

    std::cout << "enter your age: ";
    std::cin >> age;

    if(age >= 100){
        std::cout << "Vai para o caixao po";
    } //importante colocar essa "exceção" bem aqui se não o código não reconhece ele lá na frente
    else if(age >= 18){
        std::cout << "Bem vindo ao site!";
    }
    else if(age < 0){
        std::cout << "Voce nem nasceu doidao.";
    }

    else{
        std::cout << "Você não tem idade para acessar";
    }

    return 0;
}