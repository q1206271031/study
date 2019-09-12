/*
练习题] 02.类的成员变量 (属性)请定义一个交通 工具(Vehicle)的类其中有:属性速度(speed)体积(size) 等等
方法移动(move())设置速度(setSpeed (intspeed) )加速speedUp() ,减速speedDown() 等等. 
 最后在测试类Vehicle中的main ()中实例化一个交通工具对象并通过方法给它初始化speed, size的值
 并且通过打印出来。另外调用加速减速的方法对速度进行改变。
*/
public class Vehicle{
	private double speed ;
	private double size;
	
	public void move(){
		
	}

	public void setSpeed(double speed){
		this.speed=speed;
	}
	public void setSize(double size){
		this.size=size;
	}
	public void getSpeed(){
		return this.speed;
	}
	public void getSize(){
		return this.size;
	}
	/*public voud speedUp(){
		
	}	
	public void speedDown(){
	}*/
	
	
	public static  void  main(String [] args){
		Vehicle car=new Vehicle();//默认构造方法
		car.setSize(120.3);
		car.setSpeed(60.5);
		System.out.println(car.getSize());
		System.out.println(car.getSpeeed());
		
	}
		
	

}