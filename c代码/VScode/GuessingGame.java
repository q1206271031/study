import java.util.*;
import java.lang.*;
public class GuessingGame{
    static Scanner in=new Scanner(System.in);
    private int count;//记录猜对字符数量
    private char [] input;//存放用户输入的字符
    private char [] chs;//存放系统产生的字符
    private int [] result=new int[2] ;//判断结果z

    public String InputChar(){
        //chs[];
    }
    public static char[] generate(){//产生随机字符
        char[] letter={'A','B','C','D','E','F','G','H',
        'I','J','K','L','M','N','O','P','Q','R','S','T','U','V',
        'W','X','Y','Z'};
        boolean[] flag=new boolean[letter.length];
        char[] chs=new char[5];
        for (int i = 0; i < chs.length; i++) {
            int index;
            do{
                index=(int)(Math.random()*(letter.length));
                
            }while(flag[index]==true)
            chs[i]=letter[index];
        }
        return chs;
    }
       
    public int check( char [] input,char [] chs){//与玩家输入对比;
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
        int choose=in.nextint();
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