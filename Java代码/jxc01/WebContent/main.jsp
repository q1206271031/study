<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ taglib uri="http://java.sun.com/jsp/jstl/core"  prefix="c"%>    

<!DOCTYPE html>
<html>
	<head>
		<meta charset="utf-8">
		<title>进销存主页</title>
		<meta name="viewport" content="width=device-width,initial-scale=1.0,maximum-scale=1.0,user-scalable=no">
		<link rel="stylesheet" type="text/css" href="css/bootstrap.min.css" />
		<script src="js/jquery.min.js" type="text/javascript" charset="utf-8"></script>
		<script src="js/bootstrap.min.js" type="text/javascript" charset="utf-8"></script>
		<link rel="stylesheet" type="text/css" href="css/index.css"/>
		<script src="js/jquery.fullPage.js" type="text/javascript" charset="utf-8"></script>
		<link rel="stylesheet" type="text/css" href="css/jquery.fullPage.css"/>
	</head>
	<body>
		<nav class="navbar navbar-default navbar-fixed-top">
			<div class="container">
				<div class="navbar-header">
					<a class="navbar-brand nb"><img src="imgs/logo.png"/></a>
					<button type="button" class="navbar-toggle glyphicon glyphicon-align-justify" data-toggle="collapse" data-target="#navbar-collapse"></button>
				</div>
				<div class="collapse navbar-collapse" id="navbar-collapse">
					<ul id="menu" class="nav navbar-nav">
					  <li data-menuanchor="page1" class="active"><a href="#page1">基本信息管理</a></li>
					  <li data-menuanchor="page2"><a href="#page2">入库管理</a></li>
					  <li data-menuanchor="page3"><a href="#page3">销售管理</a></li>
					  <li data-menuanchor="page4"><a href="#page4">退货管理</a></li>
					  <li data-menuanchor="page5"><a href="#page5">系统管理</a></li>
					  <li data-menuanchor="page7"><a href="#page6">其他</a></li>
					</ul>
					<ul class="nav navbar-nav navbar-right">
						<c:if test="${ not empty user }">
							<li><a href="index.html"><span class="glyphicon glyphicon-user"></span>&nbsp;欢迎：${user.username }</a></li>
							<li><a href="#"><span class="glyphicon glyphicon-edit"></span>&nbsp;修改密码</a></li>
							<li><a href="#"><span class="glyphicon glyphicon-off"></span>&nbsp;退出系统</a></li>
						</c:if>
						<c:if test="${ empty user }">
							<li><a href="index.jsp"><span class="glyphicon glyphicon-user"></span>&nbsp;登录</a></li>
						</c:if>
						
					</ul>
				</div>
			</div>
		</nav>
		
		<div id="fullPage">
		<div class="con1 section">
			<div class="container">
				<div class="row">
					<div class="col-md-6 col-sm-6">
						<img src="imgs/1.jpg" class="auto img-responsive center-block" alt="">
					</div>
					<div class="text col-md-6 col-sm-6">
						<h3>基本信息管理</h3>
						<p>基本信息是系统中首要录入的信息的管理，在录入商品基本信息前，必须要先录入供应商基本信息，录入完基本信息后，还可以对这些基本信息进行修改，删除和查询等操作。</p>
						<a href="/jxc/findGYS" class="btn btn-default">供应商基本信息管理</a>
						<a href="goodsinfo.jsp" class="btn btn-default">商品基本信息管理</a>
						<a href="customer.jsp" class="btn btn-default">客户基本信息</a>
					</div>
				</div>
			</div>
		</div>
		<div class="con2 section">
			<div class="container">
				<div class="row">
					<div class="col-md-6 col-sm-6 tab2-img">
						<img src="imgs/2.png" class="auto img-responsive center-block" alt="">
					</div>
					<div class="text col-md-6 col-sm-6 tab2-text">
						<h3>入库管理</h3>
						<p>入库管理是对商品进行入库操作的管理过程， 在经过采购签单的商品可以进行入库操作， 入库的同时更新库存量， 并可以对入库商品进行查询操作， 没有经过采购签单的商品不能进行入库操作； 对于入库的商品还可以进行退货操作， 并在同时更新库存量，且能够进行退货查询。</p>
						<a href="caigouorder.html" class="btn btn-default">采购订单管理</a>
						<a href="repository.html" class="btn btn-default">入库管理</a>
					</div>
				</div>
			</div>
		</div>
		<div class="con3 section">
			<div class="container">
				<div class="row">
					<div class="col-md-6 col-sm-6 tab2-img">
						<img src="imgs/5.png" class="auto img-responsive center-block" alt="">
					</div>
					<div class="text col-md-6 col-sm-6 tab2-text">
						<h3>销售管理</h3>
						<p>销售管理主要是针对企业的销售信息进行管理， 经过销售签单操作的客户才能拿到销售订单， 然后根据销售订单进行出库操作， 同步更新库存量， 并可以对销售出库的商品进行查询操作， 没有销售订单商品不能出库； 对于销售出库的商品也可以进行退货操作，并同步更新库存量，且能够进行退货查询。</p>
						<a href="soldorder.html" class="btn btn-default">销售签单</a>
						<a href="outrepository.html" class="btn btn-default">销售出库</a>
					</div>
				</div>
			</div>
		</div>
		<div class="con4 section">
			<div class="container">
				<div class="row">
					<div class="col-md-6 col-sm-6 tab2-img">
						<img src="imgs/4.jpg" class="auto img-responsive center-block" alt="">
					</div>
					<div class="text col-md-6 col-sm-6 tab2-text">
						<h3>退货管理</h3>
						<p>退货管理包含对入库退货的信息进行添加、删除、更改操作。对销售商品的退货信息进行添加、删除、更改操作。对销售商品的退货信息查询操作。</p>
						<a href="rukutuihuo.html" class="btn btn-default">入库退货</a>
						<a href="xiaoshoutuihuo.html" class="btn btn-default">销售退货</a>
					</div>
				</div>
			</div>
		</div>
		
		<div class="con6 section">
			<div class="container">
				<div class="row">
					<div class="col-md-6 col-sm-6 tab2-img">
						<img src="imgs/6.png" class="auto img-responsive center-block" alt="">
					</div>
					<div class="text col-md-6 col-sm-6 tab2-text">
						<h3>系统管理</h3>
						<p>系统管理主要是对使用本系统中的用户进行管理和设置，针对用户可以设置用户的权限。 在用户包含：管理员、一般用户。 设置为管理员权限的用户可以修改密码和查看用户信息， 而一般用户只能修改密码而不能查看用户信息。 具有管理员权限的用户还可以进行添加用户等操作， 而一般用户不能添加用户。
</p>					<a href="employee.html" class="btn btn-default">员工信息管理</a>
						<a href="role.html" class="btn btn-default">角色管理</a>
						<a href="#" class="btn btn-default">仓库统计</a>
					</div>
				</div>
			</div>
		</div>
		<div id="footer" class="section">
			<div class="container">
				<p>
					<a href="#">东软集团</a> | 
					<a href="#">东软睿道</a> | 
					<a href="#">东软睿驰</a> | 
					<a href="#">东软熙康</a> | 
					<a href="#">技术支持</a>
				</p>
				<p>地址：陕西省西安市</p>
				<p>联系：18066841007</p>
			</div>
		</div>
		</div>
	</body>
</html>
<script type="text/javascript">
	$(function(){
		$('#fullPage').fullpage({
			anchors: ['page1', 'page2', 'page3', 'page4', 'page5', 'page6'],
			menu: '#menu'
		});
	});
</script>