#include <iostream>


class Persona {

    public:
    std::string _nombre;

    Persona(std::string nombre) {
        _nombre = nombre;
    }

    void ShowInformation() {
        std::cout << "Nombre: " << _nombre << std::endl;
    }

};


int main() {

    Persona Kevin("Kevin");

    Kevin.ShowInformation();

}