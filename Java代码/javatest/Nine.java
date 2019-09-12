public class Nine {
    /**
     * 5. 输出乘法口诀表 
     * 6. 求两个正整数的最大公约数 
     * 7. 计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。
     * 
     */
    int num1;
    int num2;
    double result;
    public Nine(int x,int y){
         num1=x;
         num2=y;
    }
    public void write(){
        for (int i = 1; i < 10; i++) {
            for (int j = 1; j <= i;j++) {
                System.out.print(i+"*"+j+"="+i*j+",");
            }
            System.out.println();
        }
    }
    public void MaxDivisor(){
        int max=num1>num2?num2:num1;
        for (int i = max; i > 0 ; i--) {
            if (num1 % i == 0 && num2 % i == 0) {
               System.out.println("最大公约数是"+i);
                break;
            }
        }
      
    } 
    public void aa(){
        for (int i = 1; i < 100; i++) {
            if(i%2==0){
                result-=1.0/i;
            }else{
                result+=1.0/i;
            }
        }
        
        System.out.println(result);
    }
    public static void main(String[] args) {
        Nine obj=new Nine(21,14);
        obj.write();
        obj.MaxDivisor();
        obj.aa();
    }
}