public class Test{
	
	static void method(){
		System.out.println("hello world1");//类方法
	}
	static{
		System.out.println("hello world2");//先于主方法执行
	}
	public static void main(String[] args)
	{
		System.out.println("hello world3");
	}
}
