package bee_1001;

// Copy and run in beecrowd only the code below this comment

import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner input = new Scanner(System.in);

        int a, b;

        a = input.nextInt();
        b = input.nextInt();

        System.out.println("X = " + (a+b));

        input.close();
    }
}
