#include <iostream>

int main() {


    //double x = (int)3.14; coversão de dados (int)

    //std::cout << x;


    //char x = 100; //a letra "d" é a representação do caractere 100 no ASCII
    //std::cout << x;

    //std::cout << (char) 100;

    int correct = 8;
    int questions = 10;
    double score = correct/ (double) questions * 100;

    std::cout << score << "%";

    return 0;
}