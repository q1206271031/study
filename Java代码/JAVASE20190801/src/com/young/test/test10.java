package com.young.test;

import java.util.Scanner;

public class test10 {

	public static void main(String[] args) {
		java.util.Scanner input = new Scanner(System.in);
		System.out.println("请输入学生数");
		int numberOfStudents = input.nextInt();
		int best = 0;
		int[] score = new int[numberOfStudents];
		char[] level = new char[numberOfStudents];
		for (int i = 0; i < numberOfStudents; i++) {
			System.out.println("请输入第" + i + "个学生的成绩");
			score[i] = input.nextInt();
			best = best > score[i] ? best : score[i];
		}
		for (int i = 0; i < level.length; i++) {
			if (score[i] >= best - 10) {
				level[i] = 'A';
			} else if (score[i] >= best - 20) {
				level[i] = 'B';
			} else if (score[i] >= best - 30) {
				level[i] = 'C';
			} else if (score[i] >= best - 40) {
				level[i] = 'D';
			}else {
				level[i] = 'F';
			}
		}
		for (int i = 0; i < level.length; i++) {
			System.out.println("student" + i + " score " + "is " + score[i] + "and grade is " + level[i]);
		}
	}
}