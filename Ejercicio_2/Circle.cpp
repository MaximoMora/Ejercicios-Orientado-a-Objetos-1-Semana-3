#include <iostream>


class Circule {

    public:
    int _radio;
    const double PI = 3.14;

    Circule(int radio) {
        _radio = radio;

    }

    void ShowInformation() {
        std::cout << "Radio: " << _radio << std::endl;
    }

    int Area() {
        double area = PI * _radio*_radio;
        return area;
    }

    int Perimeter() {
        int perimeter = 2 * PI * _radio;

        return perimeter;
    }

    void ChangeRadio(int newRadio) {
        _radio = newRadio;

    }
};


int main() {

    Circule kevin(3);
    kevin.ShowInformation();
    double area =kevin.Area();
    double perimeter = kevin.Perimeter();
    std::cout << "Area: " << area << std::endl;
    std::cout << "Perimetro " << perimeter << std::endl;


}