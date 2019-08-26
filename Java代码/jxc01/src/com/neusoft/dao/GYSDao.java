package com.neusoft.dao;

import java.sql.SQLException;
import java.util.List;

import com.neusoft.model.GYS;

public interface GYSDao {

	int addGYS(GYS gys) throws SQLException;

	List<GYS> findAllGYS()throws SQLException ;

	int deleteGYSById(String id) throws SQLException ;

	GYS findGYSById(String id)throws SQLException;

	int updateGYS(GYS gys)throws SQLException;

}
