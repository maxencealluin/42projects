<div class="right_bar">
	<?PHP
	if ($login == NULL)
	{
		echo "<a class=text href='../authentification/connexion.php'> Connexion</a><br />";
		echo "<a class=text href='../authentification/create_page.php'> Créer un compte</a><br />";
	}
	else
	{
		echo "Connecté en tant que: $login <br /><a href='../authentification/logout.php'> (Se déconnecter)</a>";
		if ($login == "admin")
		{
			echo"<br /><a href='admin.php'><br />Panneau d'administration</a><br/>";
		}
	}
	?>
	<br/><br/><a class=text href='../panier.php'> Panier</a>
	<?PHP
	if ($login != NULL)
	{
		echo "<br /><a class=text href='../commandes_user.php'> Mes commandes</a><br />";
	}
	?>
</div>
