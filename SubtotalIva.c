#include <stdio.h>
int main(){
	 float sub, total_iva, total, iva=.16 ;
	     printf("Este programa determina el subtotal\n");
         printf("Ingrese el subtotal:\n");
	     scanf("%f",&sub);
         total_iva=(sub)*(iva);
	     total=total_iva+sub;
	     printf("El subtotal es:%.2f\n",sub);
	     printf("El iva es:%.2f\n",total_iva);
	     printf("El total es:%.2f",total);
	 /*
     Hector Andres Castañeda Hernandez
	 Omar Gurrola Gonzalez
	 Brayan Bautista Gaytan*/
	
	 return 0;
	
}