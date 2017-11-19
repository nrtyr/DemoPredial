	<header class="cd-main-header">
		<a href="#" class="cd-logo"><img src="../../img/cd-logo.svg" alt="Logo"></a>
		
		<div class="cd-search is-hidden">
			<form action="#">
				<input type="search" placeholder="Buscar...">
			</form>
		</div> <!-- cd-search -->

		<a href="#" class="cd-nav-trigger">Menú<span></span></a>

		<nav class="cd-nav">
			<ul class="cd-top-nav">
				<li><a href="#">Administrador</a></li>
				<li><a href="#">Base</a></li>
				<li class="has-children account">
					<a href="#">
						<img src="../../img/cd-avatar.png" alt="avatar">
						<?php echo $usr; ?> <!-- //aquí nombre Usuario -->
					</a>

					<ul>

						<li><a href="#">Mi Cuenta</a></li>
						<li><a href="#">Editar Cuenta</a></li>
						<li><a href="#">Salir</a></li>
					</ul>
				</li>
			</ul>
		</nav>
	</header>