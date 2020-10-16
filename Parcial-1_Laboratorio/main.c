#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "REPARACION.h"
#include "ELECTRODOMESTICOS.h"


int main()
{

    Eelectrodomestico aparato[5];
    Emarca listaMarca[5];
    Eservicios service[4];
   // Efecha fechas[5];
    Ereparacion arreglos[5];


    int respuesta;
    int flag=0;

    do
    {
        printf("\tMENU DE OPCIONES:\n");
        printf("\n1. ALTA ELECTRODOMESTICO");
        printf("\n2. MODIFICAR ELECTRODOMESTICO:");
        printf("\n3. BAJA ELECTRODOMESTICO: ");
        printf("\n4. LISTAR ELECTRODOMESTICOS:");
        printf("\n5. LISTAR MARCAS");
        printf("\n6. LISTAR SERVICIOS");
        printf("\n7. ALTA REPARACION:");
        printf("\n8. LISTAR REPARACIONES");
        printf("\n9. SALIR");
        printf("\ningrese una opcion: 1/2/3/4/5/6/7/8/9 = ");
        scanf("%d",&respuesta);
        while(respuesta < 0 || respuesta > 9) // VALIDAMOS QUE ENTRE A ESAS OPCIONES
        {
            fflush(stdin);
            printf("Error..opcion incorrecta: 1/2/3/4/5/6/7/8/9 = ");
            scanf("%d",&respuesta);

        }


        switch(respuesta)
        {
        case 1:
            if(flag==0)
            {
                electrodomesticos(aparato,5);
                mostrarElect(aparato,5);
                printf("Electrodomesticos cargados\n");
                flag=1;
                system("PAUSE");
                system("cls");
                break;
            }

        case 2:
            if(flag==1)
            {
                modificarElectro(aparato,5);
                system("PAUSE");
                system("cls");
                break;

            }

            else
            {
                printf("No hay Electrodomesticos cargados !!!\n");
                system("PAUSE");
                system("cls");
                break;
            }

        case 3:
            if(flag==1)
            {
                BajaElectrodomesticos(aparato,5);
                system("PAUSE");
                system("cls");
                break;
            }
            else
            {
                printf("No hay Electrodomesticos cargados !!!\n");
                system("PAUSE");
                system("cls");
                break;
            }


        case 4:
            if(flag==1)
            {
                ordenamiento(aparato,5);
                mostrarElect(aparato,5);
                system("PAUSE");
                system("cls");
                break;
            }
            else
            {
                printf("No hay Electrodomesticos cargados !!!\n");
                system("PAUSE");
                system("cls");
                break;
            }


        case 5:
            if(flag==1)
            {
                marca(listaMarca,5);
                mostrarMarca(listaMarca,5);
                system("PAUSE");
                system("cls");
                break;
            }
            else
            {
                printf("No hay Electrodomesticos cargados !!!\n");
                system("PAUSE");
                system("cls");
                break;
            }

        case 6:
            if(flag==1)
            {
                servicio(service,4);
                mostrarService(service,4);
                system("PAUSE");
                system("cls");
                break;
            }
            else
            {
                printf("No hay Electrodomesticos cargados !!!\n");
                system("PAUSE");
                system("cls");
                break;
            }

        case 7:
            if(flag==1)
            {
                reparaciones(arreglos,4);
                mostramosReparaciones(arreglos,4);
                system("PAUSE");
                system("cls");
                break;
            }
            else
            {
                printf("No hay Electrodomesticos cargados !!!\n");
                system("PAUSE");
                system("cls");
                break;

            }

        case 8:
            if(flag==1)
            {
                mostramosReparaciones(arreglos,4);
                system("PAUSE");
                system("cls");
                break;
            }
             else
            {
                printf("No hay Electrodomesticos cargados !!!\n");
                system("PAUSE");
                system("cls");
                break;

            }


        case 9:
            printf("PROGRAMA FINALIZADO");
            break;

        }


    }
    while(respuesta!=9);



    return 0;
}

