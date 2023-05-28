#include <iostream>
#include <cmath>

int main() {


    double a;
    double b;
    double c;

    std::cout << "Valor do cateto A: ";
    std::cin >> a;
    
    std::cout << "Valor do cateto B: ";
    std::cin >> b;

    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);

    // c = sqrt(pow(a, 2) + pow(b, 2));  outra maneira de fazer com menos linhas de código

    std::cout << "Hipotenusa é igual a: " << c;

    return 0;
}