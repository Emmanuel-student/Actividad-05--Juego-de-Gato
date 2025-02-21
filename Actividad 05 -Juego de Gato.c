#include <stdio.h>
#include <stdlib.h>

void verificar(char TAB[3][3])
{
   int i, j;   //Verificacion para saber si gano el Jugador 1.
   if(TAB[0][0]=='X' && TAB[0][1]=='X' && TAB[0][2]=='X' ||
      TAB[1][0]=='X' && TAB[1][1]=='X' && TAB[1][2]=='X' ||
      TAB[2][0]=='X' && TAB[2][1]=='X' && TAB[2][2]=='X' ||
      TAB[0][0]=='X' && TAB[1][0]=='X' && TAB[2][0]=='X' ||
      TAB[0][1]=='X' && TAB[1][1]=='X' && TAB[2][1]=='X' ||
      TAB[0][2]=='X' && TAB[1][2]=='X' && TAB[2][2]=='X' ||
      TAB[0][0]=='X' && TAB[1][1]=='X' && TAB[2][2]=='X' ||
      TAB[0][2]=='X' && TAB[1][1]=='X' && TAB[2][0]=='X')
      {
          printf("\n\n\tFelicidades Jugador 1, Haz Ganado.\n\n\n\n");
          menu();
      }        //Verificacion para saber si gano el Jugador 2.
      else if(TAB[0][0]=='O' && TAB[0][1]=='O' && TAB[0][2]=='O' ||
              TAB[1][0]=='O' && TAB[1][1]=='O' && TAB[1][2]=='O' ||
              TAB[2][0]=='O' && TAB[2][1]=='O' && TAB[2][2]=='O' ||
              TAB[0][0]=='O' && TAB[1][0]=='O' && TAB[2][0]=='O' ||
              TAB[0][1]=='O' && TAB[1][1]=='O' && TAB[2][1]=='O' ||
              TAB[0][2]=='O' && TAB[1][2]=='O' && TAB[2][2]=='O' ||
              TAB[0][0]=='O' && TAB[1][1]=='O' && TAB[2][2]=='O' ||
              TAB[0][2]=='O' && TAB[1][1]=='O' && TAB[2][0]=='O')
      {
          printf("\n\n\tFelicidades Jugador 2, Haz Ganado\n\n\n\n");
          menu();

      }        //Verificacion en caso de empate.
      else if(TAB[0][0]!=' ' && TAB[0][1]!=' ' && TAB[0][2]!=' ' &&
              TAB[1][0]!=' ' && TAB[1][1]!=' ' && TAB[1][2]!=' ' &&
              TAB[2][0]!=' ' && TAB[2][1]!=' ' && TAB[2][2]!=' ' &&
              TAB[0][0]!=' ' && TAB[1][0]!=' ' && TAB[2][0]!=' ' &&
              TAB[0][1]!=' ' && TAB[1][1]!=' ' && TAB[2][1]!=' ' &&
              TAB[0][2]!=' ' && TAB[1][2]!=' ' && TAB[2][2]!=' ' &&
              TAB[0][0]!=' ' && TAB[1][1]!=' ' && TAB[2][2]!=' ' &&
              TAB[0][2]!=' ' && TAB[1][1]!=' ' && TAB[2][0]!=' ')
      {
          printf("\n\n\tEs un empate\n\n\n\n");
          menu();

      }

}

char tablero()
{
    char TAB[3][3];
    int i, j, lim;
    TAB[0][0]=' '; //Darle valor de "vacio" al arreglo entero.
    TAB[0][1]=' ';
    TAB[0][2]=' ';
    TAB[1][0]=' ';
    TAB[1][1]=' ';
    TAB[1][2]=' ';
    TAB[2][0]=' ';
    TAB[2][1]=' ';
    TAB[2][2]=' ';

    for(lim=1; lim<=9; lim++) //Repite las jugadas solo 9 veces (El maximo de jugadas).
    {
        do
        {
            printf("\n\tTurno de jugador 1, Por favor elija una posicion\n\n");
            printf("\tColumna: ");
            scanf("%d", &i);
            printf("\tFila: ");
            scanf("%d", &j);
            if(TAB[i][j]!=' ')
            {
                printf("\n\tPor favor selecciona otra opcion\n");
            }
        }
        while(TAB[i][j]!=' '); //Verifica que la opcion elegida no sea repetida
        TAB[i][j]='X';  //Muestra el tablero Actualizado con tu opcion.
        printf("\t%c\t|\t%c\t|\t%c\n",TAB[0][0], TAB[0][1], TAB[0][2]);
        printf("\t------------------------------------\n");
        printf("\t%c\t|\t%c\t|\t%c\n",TAB[1][0], TAB[1][1], TAB[1][2]);
        printf("\t------------------------------------\n");
        printf("\t%c\t|\t%c\t|\t%c\n",TAB[2][0], TAB[2][1], TAB[2][2]);

        verificar(TAB);



        do
        {
            printf("\n\tTurno de jugador 2, Por favor elija una posicion\n\n");
            printf("\tColumna: ");
            scanf("%d", &i);
            printf("\tFila: ");
            scanf("%d", &j);
            if(TAB[i][j]!=' ')
            {
                printf("\n\tPor favor selecciona otra opcion\n");
            }
        }
        while(TAB[i][j]!=' ');
        TAB[i][j]='O';
        printf("\t\t%c\t|\t%c\t|\t%c\n",TAB[0][0], TAB[0][1], TAB[0][2]);
        printf("\t\t------------------------------------\n");
        printf("\t\t%c\t|\t%c\t|\t%c\n",TAB[1][0], TAB[1][1], TAB[1][2]);
        printf("\t\t------------------------------------\n");
        printf("\t\t%c\t|\t%c\t|\t%c\n",TAB[2][0], TAB[2][1], TAB[2][2]);

        verificar(TAB);

    }
}

void inicializar() //muestra la tabla con sus cordenadas.
{
    printf("\t\t0,0\t|\t0,1\t|\t0,2\n");
    printf("\t\t------------------------------------\n");
    printf("\t\t1,0\t|\t1,1\t|\t1,2\n");
    printf("\t\t------------------------------------\n");
    printf("\t\t2,0\t|\t2,1\t|\t2,2\n");
    tablero();
}

void menu() //Te deja repetir el juego o salir del mismo.
{
    int res;
    printf("\tPor favor selecciona una opcion\n\n");
    printf("\t1) Jugar\n\t2) Salir\n");
    scanf("%d", &res);
    if(res==1)
    {
        inicializar();
    }
    else
    {
        printf("Adios\n");
        exit(0);
    }

}

int main()
{
    printf("\n\t EL JUEGO DE TIC TAC TOE \n\n");
    menu();
    return 0;
}
