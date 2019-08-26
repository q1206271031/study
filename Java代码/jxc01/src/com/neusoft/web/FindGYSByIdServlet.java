package com.neusoft.web;

import java.io.IOException;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.neusoft.model.GYS;
import com.neusoft.service.GYSService;
import com.neusoft.service.impl.GYSServiceImpl;

/**
 * Servlet implementation class FindGYSByIdServlet
 */
@WebServlet(name = "findGYSById", urlPatterns = { "/findGYSById" })
public class FindGYSByIdServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
    
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		String id = request.getParameter("id");
		
		//	查询后台获取到供应商的单个数据对象
		GYSService service = new GYSServiceImpl();
		GYS gys = service.findGYSById(id);
		
		//	将数据放到request中
		request.setAttribute("gys", gys);
		//	转发到修改的页面上
		request.getRequestDispatcher("/addgys.jsp").forward(request, response);
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
