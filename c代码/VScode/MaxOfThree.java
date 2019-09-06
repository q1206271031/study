public class MaxOfThree{
    private int num1;
    private int num2;
    private int num3;
    public MaxOfThree(int x,int y,int z){
        num1=x;
        num2=y;
        num3=z;
    }
    public int getnum1(){
        return num1;
    }
    public int getnum2(){
        return num2;
    }
    public int getnum3(){
        return num3;
    }
    public int Max() {
        int max=(num1>num2?num1:num2)>num3?(num1>num2?num1:num2):num3;
        return max;
    }
    public static void main(String[] args) {
        MaxOfThree a1=new MaxOfThree(3,8,2);
        System.out.println(a1.Max());
    }

}