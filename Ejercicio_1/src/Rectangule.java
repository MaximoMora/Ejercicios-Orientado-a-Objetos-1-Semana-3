public class Rectangule {

    int length;
    int broad;

    public Rectangule(int lenght, int broad) {
        this.length = lenght;
        this.broad = broad;

    }

    void ShowInformation() {
        System.out.println("lenght: " + length + " broad: " + broad);
    }

    int calcularArea() {
        int area = length * broad;
        System.out.println(area);
        return area;

    }

    int CalcularPerimetro() {
        int perimeter = length * 2 + broad * 2;
        System.out.println(perimeter);
        return perimeter;
    }

    void CambiarLongitud(int newlegth) {
        this.length = newlegth;
    }

    void CambiarAncho(int newbroad) {
        this.broad = newbroad;
    }
}
