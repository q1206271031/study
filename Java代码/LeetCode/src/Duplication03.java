/**
 * 在一个长度为 n 的数组里的所有数字都在 0 到 n-1 的范围内。
 * 数组中某些数字是重复的，但不知道有几个数字是重复的，
 * 也不知道每个数字重复几次。请找出数组中任意一个重复的数字。
 */
public class Duplication03 {
    public static boolean  duplicate(int[] nums, int length, int[] duplication) {
        for (int i = 0; i < length; i++) {
            //值与索引不同
            if (nums[i] != i) {
                //判断值所在的索引处的值与值相同，即找到了重复
                if (nums[i] == nums[nums[i]]) {
                    duplication[0] = nums[i];
                    return true;
                }
                //断值所在的索引处的值与值不相同，将值放入索引处
               // swap(nums, i, nums[i]);

                int temp = nums[i];
                nums[i]= nums[nums[i]];
                nums[temp]= temp;
            }
        }
        return false;
    }

    private static void swap(int[] nums, int i, int j) {
        int t = nums[i];
        nums[i] = nums[j];
        nums[j] = t;
    }


/*// /**public class Solution {
    public static boolean duplicate(int numbers[], int length, int[] duplication) {
        if (numbers == null || length <= 0) {
            return false;
        }
        for (int i = 0; i < length; i++) {
            if (numbers[i] != i) {
                if (numbers[numbers[i]] == numbers[i]) {
                    duplication[0] = numbers[i];
                    return true;
                } else {
                    int temp = numbers[i];
                    numbers[i] = numbers[numbers[i]];
                    numbers[numbers[i]] = temp;
                }
            }
        }
        return false;
    }*/

    public static void main(String[] args) {
        int[] arr = {2,1,3,1,4};
        int[] duplication=new int[1];
        boolean b = Duplication03.duplicate(arr,5, duplication );
        System.out.println(b+""+duplication[0]);

    }
}
