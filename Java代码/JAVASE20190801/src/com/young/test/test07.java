package com.young.test;

import java.util.Scanner;

public class test07 {
	static Scanner input=new Scanner(System.in);
	public static void main(String[] args) {
		
		int numberofHits=0;
		final int numberOfTrials=10000;
		for (int i = 0; i <= numberOfTrials; i++) {
			double x=Math.random()*2.0-1;////产生[-1,1)的随机数
			double y=Math.random()*2.0-1;////产生[-1,1)的随机数
			if ((x*x+y*y)<=1) {
				numberofHits++;
			}
		}
		double Pi=4.0*numberofHits/numberOfTrials;
		System.out.println(Pi);

		                                             
		
		
	}

}
