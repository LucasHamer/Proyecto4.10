#include<stdio.h>
#include<stdlib.h>

int main()
{
    float codigo,grados,radianes;

    printf("Seleccionar 1 para ingresar grados o 2 para ingresar radianes a convertir: ");
    scanf("%f",&codigo);

    if(codigo==1)
    {
        printf("Ingresar los grados a convertir: ");
        scanf("%f",&grados);
        radianes=180/3.14159265359*grados;
        printf("La conversion es de %0.3f radianes",radianes);
    }
    else if(codigo==2)
    {
        printf("Ingresar los radianes a convertir: ");
        scanf("%f",&radianes);
        grados=3.14159265359/180*radianes;
        printf("La conversion es de %0.1f grados",grados);
    }
    else
    {
        printf("No ingreso un numero correcto");
    }

    return 0;
}
