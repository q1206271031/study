public class Day07 {

    public static void main(String[] args) {
        Calculator c1 = new Calculator(2,5);
        Calculator c2 = new Calculator(3);

        System.out.println(c1.getNum1()+"  "+c1.getNum2());
        System.out.println(c2.getNum1()+"  "+c2.getNum2());
        c1.swap();
        System.out.println(c1.getNum1()+"  "+c1.getNum2());
        System.out.println();
    }

}
class Calculator{
    private int num1;
    private int num2;
    public Calculator(int x,int y){
        num1 = x;
        num2 = y;
    }
    public Calculator(int x){
        num1 = num2 = x;
    }
    public int getNum1() {
        return num1;
    }

    public void setNum1(int num1) {
        this.num1 = num1;
    }

    public int getNum2() {
        return num2;
    }

    public void setNum2(int num2) {
        this.num2 = num2;
    }
    public void swap(){
        int temp;
        temp = this.num2;
        this.num2 = this.num1;
        this.num1 = temp;
    }
}