import java.util.Random;
import java.util.Scanner;

/**
 * 1. 编写程序数一下 1到 100 的所有整数中出现多少个数字9。 
 * 2. 求出0～999之间的所有“水仙花数”并输出。(“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3?，则153是一个“水仙花数”。) 
 * 3. 编写代码模拟三次密码输入的场景。 
 * 最多能输入三次密码，密码正确，提示“登录成功”,密码错误， 
 * 可以重新输入，最多输入三次。三次均错，则提示退出程序 
 * 4. 写一个函数返回参数二进制中 1 的个数 
 * 比如： 15 0000 1111 4 个 1 
 * 5. 获取一个数二进制序列中所有的偶数位和奇数位， 
 * 分别输出二进制序列。 
 * 6. 输出一个整数的每一位. 
 * 7. 完成猜数字游戏 
 */
public class Homework{
    static Scanner in = new Scanner(System.in);
    
    public void methed1(){
        int ret = 0;
        for (int i = 1; i <=100 ; i++) {
            for (int n = i; n != 0; n /= 10) {
		        int temp=n%10;//依次遍历个位十位....
		         if(temp==9){
                    ret++;
                }
	        }
        }
        System.out.println(ret);
    }
    public void method2(){
        for(int i = 100; i < 1000 ; i++){
            if(Math.pow(i%10,3)+Math.pow(i/10%10,3)+
            Math.pow(i/100%10,3)==i){
                System.out.println(i);
            }
        }
    } 
    public void method3(){
        String Password="helloworld";
        int i;
        for ( i = 0; i < 3; i++) {
            System.out.println("请输密码：");
           String ps=in.nextLine(); 
           if (ps.equals(Password)) {
               System.out.println("登录成功");
               break;
           }
        }
        if(i==3){
            System.out.println("三次登录失败，账户冻结");
        }
    }
    public void method4(){
        int num=10;
        int count=0;
        while(num != 0){
            count++;
            num=num & (num-1);
        }
        System.out.println(count);
       
    }
    public void method5(){
        int num = 11321;
        int sum1 = 0;
        int sum2 = 0;
        int length = 0;
        while (num != 0){
            sum1 = (sum1 << 1) + (num & 1);     //奇
            sum2 = (sum2 << 1) + ((num >> 1) & 1);//偶
            length++;
            num=num>>2;
        }
       // System.out.println(sum1);
        for (int i = 0; i < length; i++) {
            System.out.print((sum1>>i&1)+" ");
        }
        System.out.println("");
        for (int i = 0; i < length; i++) {
            System.out.print(((sum2>>i)&1)+" ");
        }

    }
    public void method6(){
        int num=12345;
        for (int i = num; i != 0 ; i /= 10) {
            System.out.println(i%10);
        }
    }
    public void method7(){
        Random random = new Random();
        int Guss = random.nextInt(100)+1;
        while(true){
            System.out.println("请输入");
            int num = in.nextInt();
            if(Guss==num){
                System.out.println("猜对了");
                break;
            }
            if(Guss > num){
                System.out.println("猜小了");
            }
            if(Guss < num){
                System.out.println("猜大了");
            }
        }
    }
    public static void main(String[] args) {
        Homework h1=new Homework();
        h1.methed1();
        h1.method2();
        h1.method3();
        h1.method4();
        h1.method5();
        h1.method6();
        h1.method7();
        
    }
}