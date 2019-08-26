package com.neusoft.service.impl;

import java.sql.SQLException;
import java.util.List;

import com.neusoft.dao.GYSDao;
import com.neusoft.dao.impl.GYSDaoImpl;
import com.neusoft.model.GYS;
import com.neusoft.service.GYSService;

public class GYSServiceImpl implements GYSService {

	private GYSDao dao = new GYSDaoImpl();
	@Override
	public int addGYS(GYS gys) {
		try {
			//	判断本次操作到底是修改还是添加
			if( gys.getId() == 0 ) {
				//	添加
				return dao.addGYS(gys);
			}else {
				//	修改
				return dao.updateGYS(gys);
			}
			
		} catch (SQLException e) {
			e.printStackTrace();
			throw new RuntimeException(e);
		}
	}
	@Override
	public List<GYS> findAllGYS() {
		try {
			List<GYS> list = dao.findAllGYS();
			return list;
		} catch (SQLException e) {
			throw new RuntimeException(e);
		}
	}
	@Override
	public int deleteGYSById(String id) {
		try {
			return dao.deleteGYSById(id);
		} catch (SQLException e) {
			throw new RuntimeException(e);
		}
	}
	@Override
	public GYS findGYSById(String id) {
		try {
			return dao.findGYSById(id);
		} catch (SQLException e) {
			throw new RuntimeException(e);
		}
	}

}
