#include <iostream>

/*namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main() {
    using namespace first;


    std::cout << second::x;

    //int x = 0;

    //std::cout << first::x;


    return 0;
}
*/

int main() {
    using std::cout;
    using std::string;



    string name = "bro";

    cout << "Hello " << name;



    return 0;
}