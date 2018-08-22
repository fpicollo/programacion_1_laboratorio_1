#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroUno;
    int numeroDos;
    int numeroTres;
    int numeroDelMedio;
    int maximo;
    int minimo;

    printf("Ingrese el primer numero:");
    scanf("%d",&numeroUno);
    printf("Ingrese el primer numero:");
    scanf("%d",&numeroDos);
    printf("Ingrese el primer numero:");
    scanf("%d",&numeroTres);

    maximo = numeroUno;
    minimo = numeroUno;

    if  (maximo < numeroDos)
    {
        maximo = numeroDos;
    }
    else
    {
        minimo = numeroDos;
    }
    if (maximo < numeroTres )
    {
        maximo = numeroTres;
    }
    else if (numeroTres < minimo)
    {
         numeroTres = numeroTres;
    }

    if (( numeroUno != maximo && numeroUno != minimo))
    {
        numeroDelMedio = numeroUno;
    }

    else if (( numeroDos != maximo && numeroDos != minimo))
    {
        numeroDelMedio = numeroDos;
    }

    else if (( numeroTres != maximo && numeroTres != minimo))
    {
        numeroDelMedio = numeroTres;
    }
    else
    {
        numeroDelMedio = minimo;
    }


    printf("El numero del medio es: %d",numeroDelMedio);

    return 0;
}

