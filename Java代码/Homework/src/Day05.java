import java.util.Scanner;

/**
 * 1. 实现代码: 求斐波那契数列的第 N 项
 * 2. 实现代码: 求解汉诺塔问题(提示, 使用递归)
 *
 * 汉诺塔问题是一个经典的问题。汉诺塔（Hanoi Tower），又称河内塔，源于印度一个古老传说。
 *
 * 大梵天创造世界的时候做了三根金刚石柱子，在一根柱子上从下往上按照大小顺序摞着64片黄金圆盘。
 *
 * 大梵天命令婆罗门把圆盘从下面开始按大小顺序重新摆放在另一根柱子上。
 *
 * 并且规定，任何时候，在小圆盘上都不能放大圆盘，且在三根柱子之间一次只能移动一个圆盘。
 *
 * 问应该如何操作？
 *
 * 8. 实现代码: 青蛙跳台阶问题(提示, 使用递归)
 *
 * 一只青蛙一次可以跳上 1 级台阶，也可以跳上2 级。求该青蛙跳上一个n 级的台阶总共有多少种跳法
 */
public class Day05 {
    static Scanner in = new Scanner(System.in);
    public static int Fub(int n){
        if(n < 3){
            return 1;
        }else {
            //叶子节点之和
            return Fub(n-1) + Fub(n-2);
        }
    }
    public static void hanoi(int n,char A,char B,char C){
        if(n==1){
            move(A ,C);
        }
        else{
            hanoi(n-1,A,C,B);
            move(A,C);
            hanoi(n-1,B, A, C);
        }
    }
    public static void move(char A,char B){
        System.out.printf("%c->%c\n",A,B);
    }
    public static int Jump(int n){
        if(n < 4){
            return n ;
        }else {
            return Jump(n-1)+Jump(n-2);
        }
    }
    public static void main(String[] args) {
        System.out.println("输入汉诺塔层数");
        int n = in.nextInt();
        hanoi(n,'A','B','C');
        int ret01 = Fub(n);
        System.out.println(ret01);
        int ret02 = Jump(n);
        System.out.println(ret02);
    }
}
