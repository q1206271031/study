<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ taglib uri="http://java.sun.com/jsp/jstl/core" prefix="c" %>    
<!DOCTYPE html>
<html>
	<head>
		<meta charset="utf-8">
		<meta name="viewport" content="width=device-width,initial-scale=1.0,maximum-scale=1.0,user-scalable=no">
		<link rel="stylesheet" type="text/css" href="css/bootstrap.min.css" />
		<script src="js/jquery.min.js" type="text/javascript" charset="utf-8"></script>
		<script src="js/bootstrap.min.js" type="text/javascript" charset="utf-8"></script>
		<link rel="stylesheet" type="text/css" href="css/index.css"/>
		<title>供应商基本信息管理</title>
	</head>
	<body>
		<nav class="navbar navbar-default">
			<div class="container">
				<div class="navbar-header">
					<a class="navbar-brand nb"><img src="imgs/logo.png"/></a>
					<button type="button" class="navbar-toggle glyphicon glyphicon-align-justify" data-toggle="collapse" data-target="#navbar-collapse"></button>
				</div>
				<div class="collapse navbar-collapse" id="navbar-collapse">
					<ul class="nav navbar-nav navbar-right">
						<li><a href="index.html"><span class="glyphicon glyphicon-user"></span>&nbsp;欢迎您：admin</a></li>
						<li><a href="#"><span class="glyphicon glyphicon-edit"></span>&nbsp;修改密码</a></li>
						<li><a href="#"><span class="glyphicon glyphicon-off"></span>&nbsp;退出系统</a></li>
					</ul>
				</div>
			</div>
		</nav>
		<div class="container">
			<h3 class="text-center" >供应商基本信息管理</h3><div style="height: 10px;"></div>
			<form class="form-inline">
				<div class="form-group">
					<label>编号：</label>
					<input type="text" placeholder="请输入编号" class="form-control"/>
				</div>
				<div class="form-group">
					<label>供应商名称或简称：</label>
					<input type="password" placeholder="请输入供应商名称或简称" class="form-control"/>
				</div>
				<div class="form-group">
					<label>联系人：</label>
					<input type="password" placeholder="请输入供应商联系人" class="form-control"/>
				</div>
				<div class="input-group">
					<input type="button" class="btn btn-primary" value="查询" />
				</div>
				<a class="btn btn-info " href="addgys.jsp">添加供应商</a>
				<a href="main.jsp" class="btn btn-default">返回</a>
			</form>
			<div style="height: 10px;"></div>
			<div class="table-responsive">
				<table class="table table-bordered table-hover table-striped">
				  <thead>
					<tr>
					  <th>编号</th>
					  <th>供应商名称</th>
					  <th>简称</th>
					  <th>地址</th>
					  <th>电话</th>
					  <th>传真</th>
					  <th>联系人</th>
					  <th>开户行</th>
					  <th>银行账号</th>
					  <th>邮箱</th>
					  <th>操作</th>
					</tr>
				  </thead>
				  <tbody>
				  	<c:forEach items="${list }" var="gys">
					  	<tr>
						  <td>${gys.id }</td>
						  <td>${gys.gysname }</td>
						  <td>${gys.jiancheng }</td>
						  <td>${gys.addr }</td>
						  <td>${gys.telephone }</td>
						  <td>${gys.fax }</td>
						  <td>${gys.linkman }</td>
						  <td>${gys.bank }</td>
						  <td>${gys.banknumber }</td>
						  <td>${gys.email }</td>
						  <td>
							  <a class="btn btn-link glyphicon glyphicon-pencil" href="/jxc/findGYSById?id=${gys.id }">修改</a>
							  <a class="btn btn-link glyphicon glyphicon-remove" href="/jxc/delGYS?id=${gys.id }">删除</a>
						  </td>
						</tr>
				  	</c:forEach>
				  </tbody>
				</table>
			</div>
			<ul class="pager">
				<li><a href="#">上一页</a></li>
				<li><a href="#">1</a></li>
				<li><a href="#">2</a></li>
				<li><a href="#">3</a></li>
				<li><a href="#">4</a></li>
				<li><a href="#">5</a></li>
				<li><a href="#">下一页</a></li>
			</ul>
		</div>
		
		
	</body>
</html>
