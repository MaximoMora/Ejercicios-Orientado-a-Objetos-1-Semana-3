#include <iostream>


class Rectangulo {

    public:
    int _broad;
    int _lenght;

    Rectangulo(int broad, int lenght) {
        _broad = broad;
        _lenght = lenght;

    }

    void ShowInformation() {
        std::cout << "Ancho: " << _broad << std::endl << "Longitud: " << _lenght << std::endl;
    }

    int Area() {
        int area = _broad * _lenght;
        return area;
    }

    int Perimeter() {
        int perimeter = _broad * 2 + _lenght * 2;

        return perimeter;
    }

    void ChangeBroad(int newBroad) {
        _broad = newBroad;

    }

    void ChangeLenght(int newLenght) {
        _lenght = newLenght;

    }
};


int main() {

    Rectangulo kevin(3,4);
    kevin.ShowInformation();
    int area = kevin.Area();
    std::cout << "Area: " << area << std::endl;

    kevin.ChangeBroad(5);
    kevin.ShowInformation();
    

}