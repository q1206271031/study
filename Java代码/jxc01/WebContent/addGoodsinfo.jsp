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
<title>操作商品</title>
</head>
<body>
	<div class="modal-dialog">
		<div class="modal-content">
			<div class="modal-header">
				<h2 class="modal-title" id="myModalLabel">操作商品信息</h2>
			</div>
			<div class="modal-body">
				<form id="goodsform">
					<div class="form-group">
						<label>商品名称：</label> <input type="hidden" name="id" /> <input
							type="text" placeholder="请输入商品名称" class="form-control"
							name="pname" />
					</div>
					<div class="form-group">
						<label>商品简称：</label> <input type="text" placeholder="请输入商品简称"
							class="form-control" name="sname" />
					</div>
					<div class="form-group">
						<label>单位：</label> <input type="text" placeholder="请输入单位"
							class="form-control" name="company" />
					</div>
					<div class="form-group">
						<label>产地：</label> <input type="text" placeholder="请输入产地"
							class="form-control" name="addr" />
					</div>
					<div class="form-group">
						<label>规格参数：</label> <input type="text" placeholder="请输入规格参数"
							class="form-control" name="size" />
					</div>
					<div class="form-group">
						<label>包装：</label> <input type="text" placeholder="请输入包装"
							class="form-control" name="pack" />
					</div>
					<div class="form-group">
						<label>批号：</label> <input type="text" placeholder="请输入批号"
							class="form-control" name="batch" />
					</div>
					<div class="form-group">
						<label>批准文号：</label> <input type="text" placeholder="请输入批准文号"
							class="form-control" name="batchno" />
					</div>
					<div class="form-group">
						<label>供应商名称：</label> <select class="form-control" name="gysname"
							id="gysname">
							<option>--请选择供应商--</option>
						</select>
					</div>
					<div class="form-group">
						<label>备注：</label> <input type="text" placeholder="请输入备注"
							class="form-control" name="mark" />
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