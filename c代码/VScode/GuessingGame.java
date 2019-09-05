public class GuessingGame{
    Scanner in=new Scanner(System.in);
    int count;//记录猜对字符数量
    char [] input;//存放用户输入的字符
    char [] chs;//存放系统产生的字符
    int result ;//判断结果z
    int set ;//位置猜对个数；
z
z
    public String RandomChar(){//产生随机字符

    }
       
    public int comp( char [] input,char [] chs){//与玩家输入对比;
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                if (input[i]==chs[j]) {
                    count++;
                }if (input[i]==chs[j]&&i==j) {
                    set++;
                }
            }

        }
        return result;

        
    }


    public static void main(){
        int choose=input.intnext();
        while(choose){
            if(choose==1){
                Game();
            }else{
                break;
            }
        }

        while
    }
}