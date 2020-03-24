# incluye  " lists.h "
/ * *
 * _strlen: muestra la longitud de la cadena
 * @s: personaje
 * Descripción: Mostrar longitud de cuerda
 * Retorno: valor de la longitud
 * /
int  _strlen ( char * s)
{
	int i;
	int len;

	for (i = 0 ; s [len]! = ' \ 0 ' ; ++ i)
	{
		len = i;
	}
	volver (len);
}
/ * *
 * add_node - agrega nodo
 * @head: puntero de una lista vinculada individualmente
 * @str: cadena para agregar
 * Descripción: agregue un nodo al comienzo de la lista
 * Retorno: número de nodos
 * /
list_t * add_node ( list_t ** head, const  char * str)
{
	int len;
	char * s;
	list_t * add;

	if (str == NULL )
		return ( NULL );
	add = malloc ( sizeof ( list_t ));
	if (agregar == NULL )
		return ( NULL );
	s = strdup (str);
	if (s == NULL )
	{
		gratis (agregar);
		return ( NULL );
	}
	len = _strlen (s);
	agregar-> str = s;
	add-> len = len;
	agregar-> siguiente = * cabeza;
	* cabeza = agregar;
	volver (agregar);
}
