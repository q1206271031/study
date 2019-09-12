public class Rectangle{
    double weight=1.0;
    double height=1.0;
    public Rectangle(){//无参数构造方法

    }
    public Rectangle(double weight,double height){
        this.weight=weight;
        this.height=height;
    }
    public double getArea(){
        return weight*height;
    }
    public double getPerimeter(){
        return 2*(weight+height);

    }
    public static void main(String [] args){
        Rectangle rectangle1=new Rectangle(4,40);
        Rectangle rectangle2=new Rectangle(3.5,35.9);
        System.out.println(rectangle1.getArea()+" "+rectangle2.getPerimeter());
    }
    
}