package com.young.test;

//import java.util.logging.ErrorManager

import javax.swing.JOptionPane;

import javax.swing.JOptionPane;//明确导入
import javax.swing.*;//ͨ通配符导入，导入包中所有类；但其他用不上的包，整个程序中都不读，所以两个性能相同

public class Test01 {
	public static void main(String[] args) {
		char a='1';
//		char b='A';
//		char c='B';
//		char d='a';
//		char e='b';
		System.out.println((int)a);//输出字符的ASCIIM码
		//System.out.print("%d",a);
//	JOptionPane.showMessageDialog(null,"are you OK ?");
		javax.swing.JOptionPane.showMessageDialog(null, a);//包名加类名加方法直接调用免去import...;
//		javax.swing.JOptionPane.showMessageDialog(parentComponent, message, title, messageType);
/*		javax.swing.JOptionPane.showMessageDialog(null, "message", "title", JOptionPane.INFORMATION_MESSAGE);
		javax.swing.JOptionPane.showMessageDialog(null, "message", "title", JOptionPane.WARNING_MESSAGE);
		javax.swing.JOptionPane.showMessageDialog(null, "mes_asage", "title", JOptionPane.ERROR_MESSAGE);
		javax.swing.JOptionPane.showMessageDialog(null, "message", "title",JOptionPane. QUESTION_MESSAGE);
		javax.swing.JOptionPane.showMessageDialog(null, "message", "title",JOptionPane. PLAIN_MESSAGE);

*/	
//		确认对话框 showConfirmDialog 的返回类型是int,参数optionType有JOptionPane.YES_OPTION;JOptionPane.NO_OPTION;JOptionPane.CANCEL_OPTION\

		

		JOptionPane.showConfirmDialog(null," message", "title", JOptionPane.YES_NO_CANCEL_OPTION, JOptionPane. PLAIN_MESSAGE);
//		输入对话框
		
		JOptionPane.showInputDialog("arg0");

//		JOptionPane.showInputDialog(arg0, arg1);
//		JOptionPane.showInputDialog(arg0, arg1, arg2, arg3)
//		
		
//		javax.swing.JOptionPane.showMessageDialog(parentComponent, message, title, messageType, icon);
//		
	}

}
