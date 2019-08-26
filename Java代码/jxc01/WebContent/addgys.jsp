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
<title>操作供应商</title>
</head>
<body>
	<div class="modal-dialog">
		<div class="modal-content">
			<div class="modal-header">
				<h2 class="modal-title" id="myModalLabel">操作供应商信息</h2>
			</div>
			<div class="modal-body">
				<form action="/jxc/addGYS" method="post">
					<div class="form-group">
						<label>供应商名称：</label>
						<input type="text" name="gysname" placeholder="请输入供应商名称"  value="${gys.gysname }" class="form-control"/>
					</div>
					<div class="form-group">
						<label>简称：</label>
						<input type="text" name="jiancheng" value="${gys.jiancheng }" placeholder="请输入简称" class="form-control"/>
					</div>
					<div class="form-group">
						<label>地址：</label>
						<input type="text" name="addr"  value="${gys.addr }" placeholder="请输入地址" class="form-control"/>
					</div>
					<div class="form-group">
						<label>电话：</label>
						<input type="text" name="telephone" value="${gys.telephone }"  placeholder="请输入电话" class="form-control"/>
					</div>
					<div class="form-group">
						<label>传真：</label>
						<input type="text" name="fax" value="${gys.fax }"  placeholder="请输入传真" class="form-control"/>
					</div>
					<div class="form-group">
						<label>联系人：</label>
						<input type="text" name="linkman" value="${gys.linkman }"  placeholder="请输入联系人" class="form-control"/>
					</div>
					<div class="form-group">
						<label>开户行：</label>
						<input type="text" name="bank" value="${gys.bank }"  placeholder="请输入开户行" class="form-control"/>
					</div>
					<div class="form-group">
						<label>银行账号：</label>
						<input type="text" name="banknumber"  value="${gys.banknumber }" placeholder="请输入银行账号" class="form-control"/>
					</div>
					<div class="form-group">
						<label>邮箱：</label>
						<input type="text" name="email" value="${gys.email }"  placeholder="请输入邮箱" class="form-control"/>
					</div>
					<div class="form-group">
						<!-- 在修改的页面上，一般都会隐藏input，用来传递当前需要修改的数据的id -->
						<input type="hidden" name="id" value="${gys.id }" />
						<input type="submit" value="提交数据" class="form-control btn btn-primary"/>
					</div>
				</form>
			</div>
		</div>
	</div>
</body>
</html>