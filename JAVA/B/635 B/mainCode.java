//import java.util.Scanner;

class mainCode {
    public static void main(String[] args) {
        // Scanner input = new Scanner(System.in);
        // int a = input.nextInt();
        int x = 100, n = 3, m = 4;
        int temp=x;
        for (int i = 1; i < 2; i++) {
            int va=(temp/2)+10;
            int ls=temp-10;
            if(va>ls)
            {
                temp=va;
            }
            else if(va<ls)
            {
                temp=ls;
            }
        }
        System.out.println(temp);
        // input.close();

    }
}