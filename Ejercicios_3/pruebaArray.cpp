
#include <iostream>
#include <vector>
#include <string>


int main() {

    std::vector<std::string> hola;


    for (int i = 0; i < 3; i= i+1) {
        hola.push_back("a");
    }


    for (int j = 0; j < 3; j= j +1) {
        std::cout << hola[j] << std::endl;
    }
    
    int lenght = hola.size();
    std::cout << "lenght: " << lenght << std::endl;
}