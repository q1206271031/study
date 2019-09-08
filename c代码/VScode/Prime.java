import java.lang.Math.*;
import java.util.Scanner;
public class Prime {
    static Scanner in =new Scanner (System.in);
    public int x;
    public Prime(int x){
        this.x=x;
    }
    public Prime(){
    }
    public void check() {
        int i;
        for (i = 2; i <= Math.sqrt(x); i++) {
            if (x % i == 0) {
                System.out.println("是和数");
                break;
            }
        }
        if (i > Math.sqrt(x) ) {
            System.out.printf("%d是素数\n", x);
        }


    }
    public void checkOfHunder(){
        for (int n = 1; n <= 100; n++) {
            Prime p=new Prime(n);
            int i;
            for ( i = 2; i <= Math.sqrt(n); i++) {
                if (n % i == 0) {
                   // System.out.println("是和数");
                    break;
                }
            }
            if (i > Math.sqrt(n) ) {
                System.out.printf("%d是素数\n", n);
            }
          //  this.check();
        }
    }
    public static void main(String[] args) {
        Prime p1=new Prime();
        //System.out.println("输入要判断的数字");
        //p1.x=in.nextInt();
        p1.checkOfHunder();

    }
}