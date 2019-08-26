<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="utf-8">
<meta name="viewport"
	content="width=device-width,initial-scale=1.0,maximum-scale=1.0,user-scalable=no">
<link rel="stylesheet" type="text/css" href="css/bootstrap.min.css" />
<script src="js/jquery.min.js" type="text/javascript" charset="utf-8"></script>
<script src="js/bootstrap.min.js" type="text/javascript" charset="utf-8"></script>
<link rel="stylesheet" type="text/css" href="css/index.css" />
<title>操作客户</title>
</head>
<body>
	<div class="modal-dialog">
		<div class="modal-content">
			<div class="modal-header">
				<h2 class="modal-title" id="myModalLabel">添加客户信息</h2>
			</div>
			<div class="modal-body">
				<form>
					<div class="form-group">
						<label>客户名称：</label>
						<input type="text" placeholder="请输入客户名称" class="form-control"/>
					</div>
					<div class="form-group">
						<label>客户简称：</label>
						<input type="text" placeholder="请输入客户简称" class="form-control"/>
					</div>
					<div class="form-group">
						<label>客户地址：</label>
						<input type="text" placeholder="请输入客户地址" class="form-control"/>
					</div>
					<div class="form-group">
						<label>客户电话：</label>
						<input type="text" placeholder="请输入客户电话" class="form-control"/>
					</div>
					<div class="form-group">
						<label>联系人姓名：</label>
						<input type="text" placeholder="请输入联系人姓名" class="form-control"/>
					</div>
					<div class="form-group">
						<label>联系人电话：</label>
						<input type="text" placeholder="请输入联系人电话" class="form-control"/>
					</div>
					<div class="form-group">
						<label>开户银行：</label>
						<input type="text" placeholder="请输入开户银行" class="form-control"/>
					</div>
					<div class="form-group">
						<input type="submit" value="提交数据" class="form-control btn btn-primary"/>
					</div>
				</form>
			</div>
		</div>
	</div>
</body>
</html>