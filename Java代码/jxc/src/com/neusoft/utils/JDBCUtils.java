package com.neusoft.utils;

import java.sql.Connection;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

import javax.sql.DataSource;

import com.mchange.v2.c3p0.ComboPooledDataSource;

/*
 * 获取数据源或链接的工具类，以及释放资源
 */
public class JDBCUtils {
	// 创建C3P0连接池
	private static ComboPooledDataSource comboPooledDataSource = new ComboPooledDataSource();

	// 获取DataSource的方法
	public static DataSource getDataSource(){
		return comboPooledDataSource;
	}
	// 建立连接
	public static Connection getConnection() throws SQLException {
		return comboPooledDataSource.getConnection();
	}

	public static void release(ResultSet rs, Statement stmt, Connection conn) {
		// 释放资源
		if (rs != null) {
			try {
				rs.close();
			} catch (SQLException e) {
				e.printStackTrace();
			}
			rs = null;
		}
		release(stmt, conn);
	}

	public static void release(Statement stmt, Connection conn) {
		if (stmt != null) {
			try {
				stmt.close();
			} catch (SQLException e) {
				e.printStackTrace();
			}
			stmt = null;
		}
		if (conn != null) {
			try {
				conn.close();
			} catch (SQLException e) {
				e.printStackTrace();
			}
			conn = null;
		}
	}
}
