#include <stdio.h>
#include<sys/time.h>
#define TAM 10
int ordenamiento( int lista[TAM],int temp,int i, int j);
int main()
{
    
   int lista[TAM] = {10,9,8,7,6,5,4,3,1,0};
   int  temp;
   int i;
   int j;
  struct timeval fin, inicio;
   double tiempo_total;
   
   
  for(i=0; i<TAM; i++){
      printf("%d,",lista[i]);
  }
gettimeofday(&inicio, NULL);
 ordenamiento(lista,temp,i,j);
 
  gettimeofday(&fin, NULL);
 printf("\n");
for(i=0; i<TAM; i++){
      printf("%d,",lista[i]);
  }
  
  printf ("tiempo transcurrido = %lu",(fin.tv_sec - inicio.tv_sec) * 1000000 + fin.tv_usec - inicio.tv_usec);
  
}
 int ordenamiento( int lista[TAM],int temp,int i, int j){
for (i=1; i<TAM; i++){
    
    for(j=0 ; j<TAM - i; j++){
        if (lista[j] > lista[j+1]){ 
            int temp = lista[j];
            lista[j] = lista[j+1];
            lista[j+1] = temp;
            
        }
        
        
    }
}
}


