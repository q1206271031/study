package com.neusoft.dao.impl;

import java.sql.SQLException;
import java.util.List;

import org.apache.commons.dbutils.QueryRunner;
import org.apache.commons.dbutils.handlers.BeanHandler;
import org.apache.commons.dbutils.handlers.BeanListHandler;

import com.neusoft.dao.GYSDao;
import com.neusoft.model.GYS;
import com.neusoft.utils.JDBCUtils;

public class GYSDaoImpl implements GYSDao {

	private QueryRunner qr = new QueryRunner(JDBCUtils.getDataSource());
	@Override
	public int addGYS(GYS gys) throws SQLException {
		String sql = "insert into gys values(null , ? , ? , ? , ? , ? , ? , ? , ? , ? , null)";
		Object[] params = {gys.getGysname() , gys.getJiancheng() , gys.getAddr() , 
				gys.getTelephone(),gys.getFax() , gys.getLinkman() , gys.getBank(),
				gys.getBanknumber() , gys.getEmail()};
		return qr.update(sql, params);
	}
	@Override
	public List<GYS> findAllGYS() throws SQLException {
		String sql = "select * from gys";
		
		return qr.query(sql, new BeanListHandler<GYS>(GYS.class));
	}
	@Override
	public int deleteGYSById(String id) throws SQLException {
		String sql = "delete from gys where id = ?";
		return qr.update(sql, id);
	}
	@Override
	public GYS findGYSById(String id) throws SQLException{
		String sql = "select * from gys where id = ?";
		return qr.query(sql, new BeanHandler<GYS>(GYS.class), id);
	}
	@Override
	public int updateGYS(GYS gys) throws SQLException {
		String sql = "update gys set gysname = ? , jiancheng = ? , addr = ? , telephone = ? , fax = ? , "
				+ "linkman = ? , bank = ? , banknumber = ? , email = ? where id = ?";
		Object[] params = {gys.getGysname() , gys.getJiancheng() , gys.getAddr() , 
				gys.getTelephone(),gys.getFax() , gys.getLinkman() , gys.getBank(),
				gys.getBanknumber() , gys.getEmail(),gys.getId()};
		return qr.update(sql, params);
	}

}
