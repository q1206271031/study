package com.neusoft.web;

import java.io.IOException;
import java.lang.reflect.InvocationTargetException;
import java.sql.SQLException;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import org.apache.commons.beanutils.BeanUtils;
import org.apache.commons.lang3.StringUtils;

import com.neusoft.model.User;
import com.neusoft.service.IUserService;
import com.neusoft.service.impl.UserServiceImpl;

/**
 */
@WebServlet(name = "login", urlPatterns = { "/login" })
public class LoginServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		request.setCharacterEncoding("utf-8");
		
		String username = request.getParameter("username");
		String password = request.getParameter("password");
		
		//	简单的判断
		if( StringUtils.isEmpty(username) || StringUtils.isEmpty(password) ) {
			request.setAttribute("msg", "用户名或密码不能为空");
			request.getRequestDispatcher("/index.jsp").forward(request, response);
			return ;
		}
		
		//	程序到这里说明用户名和密码已经填写
		User user = new User();
		//user.setUsername(username);
		//user.setPassword(password);
		try {
			//	将map集合中的数据快速的封装到Java对象上
			BeanUtils.populate(user, request.getParameterMap());
			//	调用service
			IUserService service = new UserServiceImpl();
			User loginUser = service.login(user);
			//	判断是否登录成功
			if( loginUser == null ) {
				request.setAttribute("msg", "用户名或密码错误");
				request.getRequestDispatcher("/index.jsp").forward(request, response);
				return ;
			}
			//	将用户信息放到session中
			request.getSession().setAttribute("user", loginUser);
			
			//	转到首页
			request.getRequestDispatcher("/main.jsp").forward(request, response);
			return ;
			
			
			
		} catch (IllegalAccessException | InvocationTargetException e) {
			e.printStackTrace();
		}
		
	}

	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		doGet(request, response);
	}

}
