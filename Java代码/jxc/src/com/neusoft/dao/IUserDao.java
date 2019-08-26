package com.neusoft.dao;

import java.sql.SQLException;

import com.neusoft.model.User;

public interface IUserDao {

	User login(User user)throws SQLException;

}
