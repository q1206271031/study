public class Sum{
    public static void main(String[] args) {
        int sum=0;
        int temp=1;
        for (int i = 1; i <= 5; i++) {
            temp*=i;
            sum+=temp;
        }
        System.out.println(sum);

    }
}