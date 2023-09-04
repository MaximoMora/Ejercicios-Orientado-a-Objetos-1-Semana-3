public class Circle {
    int radio;
    double PI = 3.14;

    public Circle(int radio) {
        this.radio = radio;

    }

    void ShowInformation() {
        System.out.println("radio: " + radio);
    }


    double  CalcularArea() {
        double area = PI * radio;
        System.out.println(area);
        return area;
    }

    double CalcularPerimetro() {
        double perimetro = 2 * PI * radio;
        System.out.println(perimetro);
        return perimetro;
    }

    void CambiarRadio(int newRadio) {
        this.radio = newRadio;

    }
}
