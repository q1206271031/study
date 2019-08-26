package com.neusoft.utils;

import java.sql.Connection;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

import javax.sql.DataSource;

import com.mchange.v2.c3p0.ComboPooledDataSource;

/*
 * 鑾峰彇鏁版嵁婧愭垨閾炬帴鐨勫伐鍏风被锛屼互鍙婇噴鏀捐祫婧�
 */
public class JDBCUtils {
	// 鍒涘缓C3P0杩炴帴姹�
	private static ComboPooledDataSource comboPooledDataSource = new ComboPooledDataSource();

	// 鑾峰彇DataSource鐨勬柟娉�
	public static DataSource getDataSource(){
		return comboPooledDataSource;
	}
	// 寤虹珛杩炴帴
	public static Connection getConnection() throws SQLException {
		return comboPooledDataSource.getConnection();
	}

	public static void release(ResultSet rs, Statement stmt, Connection conn) {
		// 閲婃斁璧勬簮
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
