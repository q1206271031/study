public class Swap{
    private int num1;
    private int num2;

    public Swap(int x,int y){
        num1=x;
        num2=y;
    }
    public int getnum1(){
        return this.num1;
    }
    public int getnum2(){
        return this.num2;
    }
    public void swap(){
        int temp=0;
        temp=num1;
        num1=num2;
        num2=temp;
    }
    
    public static void main(String[] args){
        Swap a1=new Swap(3,6);
        System.out.println("变化前num1="+a1.getnum1()+",num2="+a1.getnum2());
        a1.swap();
        System.out.println("变化后num1="+a1.getnum1()+",num2="+a1.getnum2());
        
    }
}