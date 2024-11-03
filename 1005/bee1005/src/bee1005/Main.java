package bee1005;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        double a = sc.nextDouble();
        double b = sc.nextDouble();
        
        double pesoA = 3.5 * a;
        double pesoB = 7.5 * b;
        
        double media = (pesoA + pesoB) / 11;
        
        System.out.printf("MEDIA = %.5f\n", media);
        
        sc.close();
    }
}
