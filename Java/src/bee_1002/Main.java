package bee_1002;

// Copy and run in beecrowd only the code below this comment

import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner input = new Scanner(System.in);
        
        double r, pi = 3.14159;

        r = input.nextDouble();

        System.out.printf("A=%.4f\n", (pi*r*r));

        input.close();
    }
}
