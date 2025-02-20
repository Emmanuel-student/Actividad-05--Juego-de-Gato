#include <stdio.h>
#include <stdlib.h>
//Actividad 05 -Juego de Gato
void menu();
void inicializar();
int tablero();
void verificar();
int main()
{
  menu();
  return 0;
}
void menu()
{
    int res;
    printf("Bienvenido Por favor selecciona una opcion\n");
    printf("1) Jugar\n2) Salir\n");
    scanf("%d", &res);
    if(res==1)
    {
        inicializar();
    }
    else 
    {
        printf("Adios\n");
    }
}

void inicializar()
{
    printf("\t1\t|\t2\t|\t3\n");
    printf("\t------------------------------------\n");
    printf("\t4\t|\t5\t|\t6\n");
    printf("\t------------------------------------\n");
    printf("\t7\t|\t8\t|\t9\n");
    tablero();
}
