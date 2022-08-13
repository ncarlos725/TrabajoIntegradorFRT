#include <stdio.h>
#include <stdlib.h>//contiene el system() que tiene varias funciones piolas
//incio con main normal

void menu(int bandera);
void llenarArreglo(int vec[], int tam);
void mostrarVec(int vec[], int tam);

main() {

int bandera = 0;

//int vec[100], int tam;

printf("Desea ingresar al menu(1 = Entrar, 0 = Salir) : ");
scanf("%d",&bandera);

if(bandera > 0 && bandera <= 1){
menu(bandera);
}
system("cls");
//printf("\n----------------------------------------------------------------");
//printf("\n----------------------------------------------------------------");
printf("\nSalio del sistema...");
//printf("\n");
//system("pause");
}//Fin de main

void menu(int bandera){ // inicio funcion main menu...
	int opc = 0;
	if( bandera > 0 && bandera < 5){
	
	do{
		  system("cls");
		  printf("\n----------------------------------------------------------------");
	      printf("\nOpcion 1: Intercambio o burbuja mejorada");
	      printf("\nOpcion 2: Insercion o metodo de la baraja");
	      printf("\nOpcion 3: Seleccion o metodo sencillo");
	      printf("\nOpcion 4: Rapido o QuickSort");
	      printf("\nOpcion 5: Por Mezcla o MergeSort");
	      printf("\nOpcion 6: SALIR ");
	      printf("\n----------------------------------------------------------------");
	      printf("\n\n---> ");
	      scanf("%d",&opc);
	      
	      	if(opc > 0 && opc <= 6){
			 
			 if(opc == 1){//opcion 1 - Metodo Burbuja
				 printf(" \n Intercambio o burbuja mejorada ");
				 printf("\n");
                 printf("\nIngresar el tamaño del arreglo...");
			//	 scanf("%d",&tam);
           //      llenarArreglo(vec,tam);
				 printf("Desea ingresar al menu(1 = Entrar, 0 = Salir) : ");
                 scanf("%d",&bandera);             
				 
				 
			  }
			  else if(opc == 2){
				 printf(" \n Inserci�n o m�todo de la baraja ");
				 printf("\n");
				 printf("Desea ingresar al menu(1 = Entrar, 0 = Salir) : ");
                 scanf("%d",&bandera);
				 
			  }
			  else if(opc == 3){
				 printf(" \n Selecci�n o m�todo sencillo ");
				 printf("\n");
				 printf("Desea ingresar al menu(1 = Entrar, 0 = Salir) : ");
                 scanf("%d",&bandera);
				 
			  }
			  else if(opc == 4){
				 printf(" \n R�pido o QuickSort ");
				 printf("\n");
				 printf("Desea ingresar al menu(1 = Entrar, 0 = Salir) : ");
                 scanf("%d",&bandera);
				 
			  }
			  else if(opc == 5){
				 printf(" \n Por Mezcla o MergeSort ");
				 printf("\n");
				 printf("Desea ingresar al menu(1 = Entrar, 0 = Salir) : ");
                 scanf("%d",&bandera);
				 
			  }
			  else if(opc == 6){
				 printf(" \n Salir ");
				bandera=0;
				 
			  }
			
		}else{ // en caso que presione un numero fuera del rango de opc > 0 && opc <= 6 sale del sistema...
			
			printf("\n\n Opcion incorrecta...\n");
			
			system("pause");
		}
		  
	
	}while(bandera != 0 && bandera > 1 && bandera < 1);
	
	}//fin de if
		
}//fin funcion menu
