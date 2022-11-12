//Bautista Gaytan Brayan, Reyes Guzman David

#include<stdio.h>

int main()
{
	int numero, par_impar, i;
	printf("Ingresa un valor entre 100 y 300\n");
	scanf("%d", &numero);
	par_impar=numero%2;
	if (numero<100 || numero>300)
	{
		printf("Error, el valor tiene que estar entre 100 y 300");
	}
	else if (par_impar==0)
	{
		printf("Los numeros pares despues de: %d\n",numero);
		for (i=numero; i<=300; i+=2 )
		printf ("%d,", i);
	}
	else
	{
		printf("Los numeros pares despues de: %d\n",numero);
		for (i=numero+1; i<=300; i+=2 )
		printf ("%d,", i);
	}
	return 0;
}
