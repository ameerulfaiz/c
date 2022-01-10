#include <stdio.h>
#include <stdlib.h>

void mostrarUnArreglo(int arreglo[100], int contador);
void cargarArreglo(int arreglo[100]);
int cargarArreglo2(int arreglo[100]);
int sumarArreglo(int arreglo[100],int contador);

int main()
{
    int arreglo[100] = {0};
    int contador = cargarArreglo2(arreglo);
    mostrarUnArreglo(arreglo,contador);
    int suma = sumarArreglo(arreglo,contador);
    printf("la suma es %d",suma);
    return 0;
}

void cargarArreglo(int arreglo[10])
{
    for (int i=0;i<10;i++)
    {
        printf("ingrese el numero %d\n",i+1);
        fflush(stdin);
        scanf("%d",&arreglo[i]);
    }
}

int cargarArreglo2(int arreglo[100])
{
    int i = 0 ;
    char seguir = 's';
    while ( (seguir == 's') && (i<100) )
    {
        printf("ingrese el numero %d\n",i+1);
        fflush(stdin);
        scanf("%d",&arreglo[i]);

        printf("desea seguir cargando? s para si\n");
        fflush(stdin);
        scanf("%c",&seguir);

        i = i + 1;
    }
    return i;
}#include <stdio.h>
#include <stdlib.h>

void mostrarUnArreglo(int arreglo[100], int contador);
void cargarArreglo(int arreglo[100]);
int cargarArreglo2(int arreglo[100]);
int sumarArreglo(int arreglo[100],int contador);

int main()
{
    int arreglo[100] = {0};
    int contador = cargarArreglo2(arreglo);
    mostrarUnArreglo(arreglo,contador);
    int suma = sumarArreglo(arreglo,contador);
    printf("la suma es %d",suma);
    return 0;
}

void cargarArreglo(int arreglo[10])
{
    for (int i=0;i<10;i++)
    {
        printf("ingrese el numero %d\n",i+1);
        fflush(stdin);
        scanf("%d",&arreglo[i]);
    }
}

int cargarArreglo2(int arreglo[100])
{
    int i = 0 ;
    char seguir = 's';
    while ( (seguir == 's') && (i<100) )
    {
        printf("ingrese el numero %d\n",i+1);
        fflush(stdin);
        scanf("%d",&arreglo[i]);

        printf("desea seguir cargando? s para si\n");
        fflush(stdin);
        scanf("%c",&seguir);

        i = i + 1;
    }
    return i;
}

void mostrarUnArreglo(int arreglo[100], int contador)
{
     for (int i=0;i<contador;i++)
     {
         printf("numero: %d\n",arreglo[i]);
     }
}

int sumarArreglo(int arreglo[100],int contador)
{
    int suma = 0;
     for (int i=0;i<contador;i++)
     {
         suma = suma + arreglo[i];
     }
     return suma;
}


void mostrarUnArreglo(int arreglo[100], int contador)
{
     for (int i=0;i<contador;i++)
     {
         printf("numero: %d\n",arreglo[i]);
     }
}

int sumarArreglo(int arreglo[100],int contador)
{
    int suma = 0;
     for (int i=0;i<contador;i++)
     {
         suma = suma + arreglo[i];
     }
     return suma;
}
