package com.young.test;
//O(n),O(nlogn)
//O(1),O(logn)
public class SeqList {
	private int []array;//用来保存数据
	private int size;//保存array已有的数据个数；
	public SeqList()
	{
		array=new int[10];
		size= 0;
	}
	public void pushFront(int element) {
		//从后往前遍历；
		
	}
	public void pushBack(int element) {
		//判断
		array[size++]=element;//给size下标赋值
	}
	public void insert(int index,int element) {}
	public void popFront() {}
	public void popBack() {}
	public void pop() {}
	
	
}
