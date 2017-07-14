#include <stdio.h>
#define FILA 3
#define COL 4

void llenar_matriz(int matriz[][COL]);
void traspuesta(int matriz[][COL]);
void suma_matriz(int  matriz1[][COL],int matriz2[][COL]);

void main(){
    
     int i,j;
     int  trapuesta [FILA][COL];
     int  a[FILA][COL], b[FILA][COL];

printf("Llenando matriz A: ");
llenar_matriz(a);


printf("Llenando matriz B: ");
llenar_matriz(b);



printf("\nTraspuesta de Matriz A: ");
traspuesta(a);

printf("\nTraspuesta de Matriz B: ");
traspuesta(b);


printf("\n SUMA DE MATRICES");
suma_matriz(a,b);



}



void llenar_matriz(int  matriz[][COL]){

   int i,j;
   for(i = 0;i<FILA;i++)
       {
         for(j=0;j<COL;j++)
            {
             printf("Introduzca los valores: ");
             scanf("%d",&matriz[i][j]);
            }
      }
  return;
}



void traspuesta(int  matriz[][COL]){

int  i,j;
printf("\n");
for(i=0;i<COL;i++)
    {
     for(j=0;j<FILA;j++)
        {
         printf("\t %d", matriz[j][i]);
        }
     printf("\n");
    }
return;

}


void suma_matriz(int matriz1[][COL],int matriz2[][COL]){
 int suma[FILA][COL];
 int  i , j;
 printf("\n");
 for(i=0;i<FILA;i++)
     for(j=0;j<COL;j++)
         suma[i][j] = matriz1[i][j] + matriz2[i][j];
 

 for(i=0;i<FILA;i++)
     {
       for(j=0;j<COL;j++)
          {
           printf("\t %d ",suma[i][j]);
          }
      printf("\n");
     }
return;
}








