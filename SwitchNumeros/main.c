#include <stdio.h>


int main()
{
    int opc;//utilizamos una variable para indicar que es lo que elegimos en el switch

    printf("Seleccione un numero:\n");
    scanf("%d",&opc);//ingresamos el numero

    switch(opc)//el switch captura el numero ingresado y en base a ello devuelve lo que el case escogido contenga
    {
        case 1:printf("Usted escogio el numero 1");
        break;//siempre despues de terminar cada case hay que añadir un break;

        case 2:printf("Usted escogio el numero 2");
        break;

        case 3:printf("Usted escogio el numero 3");
        break;

        case 4:printf("Usted escogio el numero 4");
        break;

        case 5:printf("Usted escogio el numero 5");
        break;

        default: printf("Usted no escogio ningun numero o ingreso un numero menor que 1 o mayor que 5");//en caso de que ninguna opcion sea "correcta" se activa el default
    }

    return 0;
}
