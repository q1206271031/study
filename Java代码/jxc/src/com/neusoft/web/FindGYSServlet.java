package com.neusoft.web;

import java.io.IOException;
import java.util.List;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.neusoft.model.GYS;
import com.neusoft.service.GYSService;
import com.neusoft.service.impl.GYSServiceImpl;

/**
 * Servlet implementation class FindGYSServlet
 */
@WebServlet(name = "findGYS", urlPatterns = { "/findGYS" })
public class FindGYSServlet extends HttpServlet {
	
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		//	1、查询供应商的数据
		GYSService service = new GYSServiceImpl();
		List<GYS> list = service.findAllGYS();
		//	2、将数据放到request中
		request.setAttribute("list", list);
		//	3、将本次请求转发到gys.jsp页面上
		request.getRequestDispatcher("/gys.jsp").forward(request, response);
		
	}

	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		doGet(request, response);
	}

}
