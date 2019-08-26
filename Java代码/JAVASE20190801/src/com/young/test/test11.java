package com.young.test;

import java.util.*;

public class test11 {
	
	public static boolean search(int[]arr,int key,int len) {
		for (int i = 0; i < len; i++) {
			if (arr[i]==key) {
				return true;
			}
		}
		return false;
	}
	public static void main(String[] args) {
		//
		java.util.Scanner input=new Scanner(System.in);
		int[]arr=new int[100];
		int[]appear=new int[100];
		for (int i = 0; i < 100; i++) {
			appear[i]=0;
		}
		int count=0;
		do {
			System.out.println("请输入如第"+count+"个元素");
			arr[count]=input.nextInt();
			//Arrays.binarySearch(arr,arr[i])
			if (search(arr, arr[count], count)) {
				appear[count]++;
			}
			++count;
		} while (arr[count-1]!=0);
		for (int i = 0; i < count; i++) {
			System.out.println(arr[i]+"occurs"+appear[i]+"times");
		}
	}
}
