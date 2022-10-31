#include <stdio.h>

#define TAM 10
int ordenamientoBurbuja( int lista[TAM]);
int main()
{
    
   int lista[TAM] = {10,9,8,7,6,5,4,3,1,0};
   int  temp;
   int i;
   int j;
   
   
   
  for(i=0; i<TAM; i++){
      printf("%d,",lista[i]);
  }
  
   ordenamientoBurbuja(lista);
  
 printf("\n");
for(i=0; i<TAM; i++){
      printf("%d,",lista[i]);
  }
   
  
}
 int ordenamientoBurbuja( int lista[TAM]){
for (int i=1; i<TAM; i++){
    
    for(int j=0 ; j<TAM - 1; j++){
        if (lista[j] > lista[j+1]){ 
            int temp = lista[j];
            lista[j] = lista[j+1];
            lista[j+1] = temp;
            
        }
        
        
    }
}
}




