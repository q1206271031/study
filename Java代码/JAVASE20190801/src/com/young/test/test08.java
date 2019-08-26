package com.young.test;

public class test08 {
	void method()
	{
		int year=2018;
		int day=3;
		int numberOfline=0;
		//判断闰年
		if (year%400==0||(year %100 !=0&&year%4==0)) {
			//打印一月
			System.out.println("Sun Mon Tue Wed Thu Fri Sat");
			if (day!=7) {//打印空格填充
				for (int i = 0; i < day ; i++) {
					System.out.print("  ");
				}
			} 
			//打印数字
			for(int i=1;i<=31;i++) {
				numberOfline++;
				if (numberOfline%7==0) {
					System.out.println(i);
				}else {
					System.out.print(i+" ");
				}
			}
		}else {
			System.out.println("Sun Mon Tue Wed Thu Fri Sat");
			if (day!=7) {//打印空格填充
				for (int i = 0; i < day ; i++) {
					System.out.print("  ");
				}
			} 
			//打印数字
			for(int i=1;i<=31;i++) {
				numberOfline++;
				if (numberOfline%7==0) {
					System.out.println(i);
				}else {
					System.out.print(i+" ");
				}
			}
		}
	}
	
	//判断闰年
	//
	public void main(String[] args) {
		method();
	}

}
