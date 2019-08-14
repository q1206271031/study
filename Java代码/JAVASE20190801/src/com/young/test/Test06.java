package com.young.test;

public class Test06 {
	//阶乘
	static int method01(int num)
	{
		double e=0;
		int result=1;
		for (int i = 1; i <= num; i++) {
			result*=i;//数字太大存不下
			e+=1.0/result;
		}
		return result;
	}
	static double method02()//这个算法好；
	{
		double e = 1;
		double temp = 1;
		for (double i = 1; i <100000000; i++) {
			
			temp = temp / i;//1! 1/1 ,2! 1/1/2 ,3! 1/1/2/3.....
			e += temp;
		}
		return e;
	}
	public static void main(String[] args) {
		double e=0;
		System.out.println(e);
		System.err.println(method02());
	}

}
