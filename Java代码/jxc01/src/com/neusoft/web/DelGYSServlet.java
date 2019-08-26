package com.neusoft.web;

import java.io.IOException;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.neusoft.service.GYSService;
import com.neusoft.service.impl.GYSServiceImpl;

/**
 * Servlet implementation class DelGYSServlet
 */
@WebServlet(name = "delGYS", urlPatterns = { "/delGYS" })
public class DelGYSServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		response.setContentType("text/html;charset=utf-8");
		//	1、获取需要删除的gys的id
		String id = request.getParameter("id");
		
		GYSService service = new GYSServiceImpl();
		int x = service.deleteGYSById(id);
		if( x > 0 ) {
			// 	删除成功
			request.getRequestDispatcher("/findGYS").forward(request, response);
		}else {
			response.getWriter().write("删除失败");
		}
	}

	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
