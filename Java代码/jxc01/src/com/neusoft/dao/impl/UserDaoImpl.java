package com.neusoft.dao.impl;

import java.sql.SQLException;

import org.apache.commons.dbutils.QueryRunner;
import org.apache.commons.dbutils.handlers.BeanHandler;

import com.neusoft.dao.IUserDao;
import com.neusoft.model.User;
import com.neusoft.utils.JDBCUtils;

/**
 * 	dao(database access object)
 * 	cao(catalog access object)
 * @author neuedu-qb
 */
public class UserDaoImpl implements IUserDao{
	
	//	操作数据库的数据源，底层对应的c3p0连接池
	private QueryRunner qr = new QueryRunner(JDBCUtils.getDataSource());

	@Override
	public User login(User user) throws SQLException {
		//	书写sql
		String sql = "select * from users where username = ? and password = ?";
		//	执行sql
		User loginUser = qr.query(sql, new BeanHandler<User>(User.class), user.getUsername(),user.getPassword());
		return loginUser;
	}

}
