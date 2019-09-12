public class LeapYear {
   // private int year;

    // public setYear(int x){
    //     this.year=x;
    // }

    public void Check() {
        for (int year = 1000; year <= 2000; year++) {
            if (year % 100 == 0) {
                if (year % 400 == 0) {
                    System.out.println(year+"闰年");
                } else {
                    System.out.println(year+"平年");
                }
            } else if (year % 4 == 0) {
                System.out.println(year+"闰年");
            } else {
                System.out.println(year+"平年");
            }
        }
    }

    public static void main(String[] args) {
        LeapYear y = new LeapYear();
        y.Check();
    }
}