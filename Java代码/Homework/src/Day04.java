import java.util.Arrays;
/**
 * 1.3 理解方法的基本用法, 方法重载, 方法递归, 并写一篇博客总结.
 *  * 2. 实现代码: 递归求 N 的阶乘
 *  * 3. 实现代码: 递归求 1 + 2 +  + ... + 10
 * 4. 实 现代位码: 按顺序打印一个数字的每一(例如 1234 打印出 1 23 4)
 *  * 5. 实现代码: 写一个递归方法，输入一个非负整数，返回组成它的数字之和
 */
public class Day04 {
    public static int method01(int num){
        if(num==1){
            return 1;
        }else{
            return num * method01(num-1);
        }
    }

    public static int method02(int num){
        if(num==1){
            return 1;
        }else{
            return num + method02(num-1);
        }
    }
    public static void method03(int num){
        if(num > 9){
            method03(num / 10);
        }
        System.out.println(num % 10);
    }
    public static  int method04(int num){
        if (num==0){
            return 0;
        }else{
            return num % 10+method04(num/10);
        }
    }
    public static void main(String[] args) {
        int num1 = 5;
        int num2 = 10;
        int num3 = 1234;
        int [] ret = new int [3];
        ret[0] = method01(num1);//5的阶乘
        ret[1] = method02(num2);//1+……+10
        ret[2] = method04(num3);//1234逐位求和
        System.out.println(Arrays.toString(ret));
        method03(1234);
    }
}
