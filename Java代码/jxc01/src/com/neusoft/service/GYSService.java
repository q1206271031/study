package com.neusoft.service;

import java.util.List;

import com.neusoft.model.GYS;

public interface GYSService {

	int addGYS(GYS gys);
	
	public List<GYS> findAllGYS();

	int deleteGYSById(String id);

	GYS findGYSById(String id);

}
