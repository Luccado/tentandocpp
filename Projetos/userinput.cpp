#include <iostream>

// cout <<
// cin >>

int main() {

    std::string name;
    int age;

    std::cout << "Qual a sua idade? ";
    std::cin >> age;
    
    std::cout << "Qual o seu nome? ";
    //std::cin >> name;
    std::getline(std::cin >> std::ws, name); // string com espaço usar a função getline



    std::cout << "Ola " << name << '\n';
    std::cout << "Sua idade e de " << age << " anos.";

    return 0;
}