package com.young.test;

public class Test05 {
	public static void main(String[] args) {
		//System.out.println("");
		double result1=0;
		double result2=0;
		for (int i = 1; i < 1001; i++) {
			result1+=1.0/i;
		}
		for (int i = 1000; i > 0; i--) {
			result2+=1.0/i;
		}
		System.out.println(result1);
		System.out.println(result2);

	}

}
