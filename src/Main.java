
public class Main {
    public static void main(String[] args) {
        Circle circulo = new Circle(4);
        System.out.println(circulo);
        circulo.ShowInformation();
        circulo.CalcularArea();
        circulo.CambiarRadio(5);
        circulo.CalcularArea();


        //rectangule
        System.out.println("woowowowowoowowowowow");

        Rectangule rectangulo = new Rectangule(4,2);
        rectangulo.calcularArea();
        rectangulo.ShowInformation();
        rectangulo.CambiarLongitud(9);
        rectangulo.ShowInformation();
        rectangulo.calcularArea();

    }


}