import java.util.Arrays;

/**
 * 自主实现 "数组练习" 章节的所有代码
 */
public class Day06 {
    //数组转字符串
    public static  String method010(int [] arr){
        String str = "[";
        for (int i = 0; i <arr.length ; i++) {
            if(i < arr.length-1){
                str+=arr[i]+",";
            }else{
                str+=arr[i]+"]";
            }
        }
        return str;
    }
    public static String method011(int [] arr){
        String str = Arrays.toString(arr);
        return str;
    }
    //数组拷贝
    public static int[] method020(int[] arr){
        int[] arr2 = new int[arr.length];
        for (int i = 0; i <arr.length; i++) {
            arr2[i] = arr[i];
        }
        return arr2;
    }
    public static int[] method021(int[] arr){
        int[] arr2 = Arrays.copyOf(arr, arr.length);
        return arr2;
    }

    //找数组中最大元素
    public static int method03(int[] arr){
        int max = arr[0];
        for (int i = 0; i < arr.length; i++) {
            if(max < arr[i]){
                max = arr[i];
            }
        }
        return max;
    }
    //求平均数
    public static double method04(int[] arr){
        double avg = 0;
        for (int i = 0; i < arr.length; i++) {
            avg+=arr[i]/(double)arr.length;
        }
        return avg;
    }

    //找特定元素
    public static int method05(int[] arr,int target){
        for (int i = 0; i < arr.length; i++) {
            if(target == arr[i]){
                return i;
            }
        }
        return -1;
    }
    //二分查找
    public static int  method061(int[] arr,int target){
        int left = 0;
        int right = arr.length-1;
        while(left <= right){
            int mid = (left+right)/2;
            if(arr[mid] < target){
                left = mid + 1;
            }
            if(arr[mid] > target){
                right = mid - 1;
            }
            if(arr[mid] == target){
                return mid;
            }
        }
        return -1;
    }
    public static int  method062(int[] arr,int target){
        int index = Arrays.binarySearch(arr,target);
        return index;
    }
    //检查有序性(数组中无相同元素)
    public static boolean method07(int[] arr) {

        if(arr[0] > arr[1]){
            //降序
            for (int i = 0; i < arr.length-1; i++) {
                if(arr[i] < arr[i+1]){
                    return false;
                }
            }
        }
        if(arr[0] < arr[1]){
            //升序
            for (int i = 0; i < arr.length-1; i++) {
                if(arr[i] > arr[i+1]){
                    return false;
                }
            }
        }
        return true;
    }

    //冒泡排序
    public static int[] method08(int[] arr){
        for (int bound = 0; bound < arr.length; bound++) {
            for(int cur = arr.length - 1; cur > bound; cur-- ){
                if(arr[cur-1] > arr[cur]){
                    int temp = arr[cur-1];
                    arr[cur-1] = arr[cur];
                    arr[cur] = temp;
                }
            }
        }
        return arr;
    }
    //数组逆序
    public static int[] method09(int[] arr ){
        int right = arr.length-1;
        int left = 0;
        while (right > left){
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            right--;
            left++;
        }
        return arr;
    }
    //数组数字排列(偶数在前，奇数在后)
    public static int[] method10(int[] arr){
        int right = arr.length-1;
        int left = 0;
        while (right > left){
            if (arr[right] % 2 != 0){//找偶数
                right--;
            }
            if (arr[left] % 2 == 0){//找奇数
                left++;
            }
            if(arr[left] % 2 != 0 && arr[right] % 2 == 0){
                int temp = arr[left];
                arr[left] = arr[right];
                arr[right] = temp;
                right--;
                left++;
            }
        }
        return arr;
    }
    public static void main(String[] args) {
       //Integer[] arr = {1,2,3,4};
       int [] arr = {1,2,3,4};
        //数组转字符串
        String ret010 =method010(arr);
        System.out.println(ret010);
        String ret011 =method010(arr);
        System.out.println(ret011);
        //数组拷贝
        int[] ret020 = method020(arr);
        System.out.println(Arrays.toString(ret020));
        int[] ret021 = method021(arr);
        System.out.println(Arrays.toString(ret021));
        //找数组中最大元素
        int ret03 = method03(arr);
        System.out.println(ret03);
        //求平均数
        double ret04 = method04(arr);
        System.out.println(ret04);
        //找特定元素
        int ret05 = method05(arr,3);
        System.out.println(ret05);
        //二分查找
        int ret061 = method061(arr,3);
        System.out.println(ret061);
        int ret062 = method062(arr,3);
        System.out.println(ret062);
        //检查有序性
        boolean ret07 = method07(arr);
        System.out.println(ret07);
        //冒泡排序(升序)
        int[] ret08 = method08(arr);
        System.out.println(Arrays.toString(ret08));
        //数组逆序
        int[] ret09 = method09(arr);
        System.out.println(Arrays.toString(ret09));
        //数组数字排列
        int[] ret10 = method10(arr);
        System.out.println(Arrays.toString(ret10));

    }
}
