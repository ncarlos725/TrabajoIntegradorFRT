#include <stdio.h>

int tam = 11;

void mostrarVector(int vector[], int);

int main (){
	int n=0;
	int vec[n];
	
	printf("ingresar el tamaño del vector: ");
	scanf("%d",&n);
	
	for (int i=0; i<n;i++){
		printf("\n VEC(%d)=",i);
		scanf("%d",&vec[i]);
		
		
	}
	
	mostrarVector(vec,n);
	
	return 0;
}

void mostrarVector(int vector[], int tam){
	for(int i = 0; i < tam; i++){
		printf("\n Vec(%d) = ",i);
	}
}

