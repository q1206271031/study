import javax.security.auth.login.AccountNotFoundException;

public class Add {
    public static long add(int x, int y) {
        long sum = 0;
        int count1 = y ^ ~y;
        int count2 = x ^ ~x;
        for (int i = 0; count1 >> 1 != 0||count2 >> 1 != 0; i++) {

        }
        if (x > 0 && y > 0) {
            int temp1 = x & y;
            int temp2 = x ^ y;
            if (temp1 << 1 == 1) {
                sum = (long) temp1 + temp2;
            }
        }
        if (x > 0 && y > 0) {
        }
        return sum;
    }
}
