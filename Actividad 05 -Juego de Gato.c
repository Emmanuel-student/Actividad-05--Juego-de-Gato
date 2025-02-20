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
