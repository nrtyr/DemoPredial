<?php 

error_reporting(E_ALL ^ E_DEPRECATED);
header("Content-Type: text/html; Charset=UTF-8");
session_start();

$usr = "Oliver Raúl Velázquez Torres";

 ?>

<!doctype html>
<html lang="es" class="no-js">

<?php include("assets/inc/head.inc"); ?>

<body class="animated fadeIn">

	<?php include("assets/inc/header.inc"); ?>
	<?php include("assets/inc/nav.inc"); ?>
	<?php include("assets/inc/content.inc"); ?>
	<?php include("assets/inc/jquery.inc"); ?>

</body>
</html>