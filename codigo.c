#include <stdio.h>
#include <stdlib.h>

struct estructura1
{
	char nombre[20];
	int cantidad;
	float precio;
} pieza;

int escribirArchivo();
int leerArchivo();
int adquirirPiezas();

int main()
{
	int decision;
	
	do
	{
		printf("Bienvenido, selecciona alguna de las siguientes opciones\n1. Escribir datos\n2. Leer datos\n3. Salir\nOpcion: ");
		scanf("%d", &decision);
		system("cls");
		switch (decision)
		{
			case 1:
				escribirArchivo();
				break;
			case 2:
				leerArchivo();
				break;
			default:
				printf("Hasta luego\n");
				break;
		}
	} while (decision==1 || decision==2);
	system("pause");
	return 0;
}

int escribirArchivo()
{
	printf("Ingresa el nombre de la pieza: ");
	fflush(stdin);
	gets(pieza.nombre);
	printf("Ingresa la cantidad de piezas: ");
	fflush(stdin);
	scanf("%d", &pieza.cantidad);
	printf("Ingrea el precio de la pieza por unidad: ");
	fflush(stdin);
	scanf("%f", &pieza.precio);
	system("cls");
}

int leerArchivo()
{
	printf("Nombre\t\tCantidad\tPrecio\n");
	printf("%s\t%d\t\t%.2f\n", pieza.nombre, pieza.cantidad, pieza.precio);
	system("pause");
	system("cls");
}

int adquirirPiezas()
{
	
}
