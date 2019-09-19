/**
 * 给定一个二维数组，其每一行从左到右递增排序，从上到下也是递增排序。
 * 给定一个数，判断这个数是否在该二维数组中。
 */
public class Find04 {
    public boolean Find(int target, int[][] matrix) {
        int row = 0;
        int col = matrix[0].length - 1;
        while (row < matrix.length && col >= 0) {
            if (matrix[row][col] < target) {
                row++;
            } else if (matrix[row][col] > target) {
                col--;
            } else if (matrix[row][col] == target) {
                return true;
            }
        }
        return false;
    }
}
/**
 * int col=array[0].length-1;
 * int row=0;
 * while(col >= 0 && row < array.length){
 * if(array[row][col] > target){
 * col--;
 * }
 * if(array[row][col] < target){
 * row++;
 * }
 * if(array[row][col] == target){
 * return true;
 * }
 * }
 * return false;
 */
