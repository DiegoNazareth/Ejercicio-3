//Ejercicio 3 Final funciones 
//3. Realice un programa en C que capture del usuario una serie de numeros N (definir el maximo), 
//mediante una funcion almacene e imprimia los numeros mayores a W donde W es un numero proporcionado por el usuario.

#include<stdio.h>
void ordenar(int vector[200]);

int main(){
	int vector[200];
	printf("Dame 200 numeros\n");
	ordenar(vector);
	return 0; 
}
 void ordenar(int vector[200]){
 	int i,w, vector1[200];
 	for(i=0;i<200;i++){
		scanf("%d", &vector[i]);
	}
	 printf("\nDame un valor de los que me diste\n");
	 scanf("%d", &w);
	 printf("Numeros mayores\n");
	 for (i=0;i<200;i++){
	 	if(vector[i]>w){
	 		vector1[i]=vector[i];
	 		printf ("%d ", vector1[i]);
		 }
	 }
 }
 
