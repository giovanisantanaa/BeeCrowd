package bee_1005;

// Copy and run in beecrowd only the code below this comment

import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner input = new Scanner(System.in);
        
        double a, b, media;

        a = input.nextDouble();
        b = input.nextDouble();

        media = ((a*3.5)+(b*7.5))/11;

        System.out.printf("MEDIA = %.5f\n", media);

        input.close();
    }
}
