package com.neusoft.web;

import java.io.IOException;
import java.lang.reflect.InvocationTargetException;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import org.apache.commons.beanutils.BeanUtils;

import com.neusoft.model.GYS;
import com.neusoft.service.GYSService;
import com.neusoft.service.impl.GYSServiceImpl;

/**
 * Servlet implementation class GYSServlet
 */
@WebServlet(name = "addGYS", urlPatterns = { "/addGYS" })
public class GYSServlet extends HttpServlet {
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		request.setCharacterEncoding("utf-8");
		response.setContentType("text/html;charset=utf-8");
		try {
			GYS gys = new GYS();
			BeanUtils.populate(gys, request.getParameterMap());
			
			//	直接调用service
			GYSService service = new GYSServiceImpl();
			int x = service.addGYS(gys);
			if( x == 1) {
				//	添加成功
				// TODO: 这里需要在等待查询写完之后，跳转到查询servlet中
				request.getRequestDispatcher("/findGYS").forward(request, response);
			}else {
				response.getWriter().write("添加失败");
			}
			
		} catch (IllegalAccessException | InvocationTargetException e) {
			e.printStackTrace();
		}
	}

	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		doGet(request, response);
	}
}
