package com.neusoft.service.impl;

import java.sql.SQLException;

import com.neusoft.dao.IUserDao;
import com.neusoft.dao.impl.UserDaoImpl;
import com.neusoft.model.User;
import com.neusoft.service.IUserService;

/**
 * 	关于平台账号的service   数据库的事务（ACID）
 * @author neuedu-qb
 *
 */
public class UserServiceImpl implements IUserService{
	
	// 	定义IUserDao的引用变量
	private IUserDao dao = new UserDaoImpl();
	@Override
	public User login(User user) {
		try {
			return dao.login(user);
		} catch (SQLException e) {
			e.printStackTrace();
			throw new RuntimeException(e);
		}
	}

}
