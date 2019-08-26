<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
	<head>
		<meta charset="utf-8">
		<meta name="viewport" content="width=device-width,initial-scale=1.0,maximum-scale=1.0,user-scalable=no">
		<title>进销存平台</title>
		<link rel="stylesheet" type="text/css" href="css/bootstrap.min.css" />
		<script src="js/jquery.min.js" type="text/javascript" charset="utf-8"></script>
		<script src="js/bootstrap.min.js" type="text/javascript" charset="utf-8"></script>
		<link rel="stylesheet" type="text/css" href="css/index.css"/>
		<style>
            .container{
				
                display:table;
                height:100%;
            }

            .row{
                display: table-cell;
                vertical-align: middle;
            }
            .row-centered {
                text-align:center;
            }
            .col-centered {
                display:inline-block;
                float:none;
                text-align:left;
                margin-right:-4px;
            }
        </style>
	</head>
	<body class="login">
		<nav class="navbar navbar-default navbar-fixed-top">
			<div class="container">
				<div class="navbar-header">
					<a class="navbar-brand nb"><img src="imgs/logo.png"/></a>
					<button type="button" class="navbar-toggle glyphicon glyphicon-align-justify" data-toggle="collapse" data-target="#navbar-collapse"></button>
				</div>
				<ul class="nav navbar-nav navbar-right">
					<li><a href="#">欢迎使用进销存平台</a></li>
				</ul>
			</div>
		</nav>
		<div class="container login">
            <div class="row row-centered">
                <div class="well col-md-6 col-centered">
                    <h2 style="color:#000000" class="text-center">欢迎登录</h2>
                    <form action="/jxc/login" method="post">
                        <div class="input-group input-group-md">
                            <span class="input-group-addon">账号：</span>
                            <input type="text" class="form-control" id="userid" name="username" placeholder="请输入账号"/>
                        </div>
						<br />
                        <div class="input-group input-group-md">
                            <span class="input-group-addon">密码：</span>
                            <input type="password" class="form-control" id="password" name="password" placeholder="请输入密码"/>
                        </div>
                        <br/>
                         <div class="input-group input-group-md" style="color:red">
                         	${msg }
                        </div>
                        <button type="submit" class="btn btn-primary btn-block">登录</button>
                    <form>
                </div>
            </div>
        </div>
	</body>
</html>