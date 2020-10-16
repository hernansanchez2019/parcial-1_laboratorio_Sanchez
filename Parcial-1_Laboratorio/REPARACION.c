
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "REPARACION.h"
#include "ELECTRODOMESTICOS.h"


void mostrarService(Eservicios mantenimiento[],int tam)
{

    int i;

    printf("\n\t'SERVICIO'\n\n");
    printf("    Descripcion      Precio $ \n\n");

    for(i=0; i < tam ; i++)
    {
        printf("%14s  %10d\n",
               mantenimiento[i].descripcion,
               mantenimiento[i].precio);
    }

}


void fecha(Efecha fecha[], int tam)
{
    int dia[4]= {1,26,15,8};
    int mes[4]= {10,12,3,4};
    int anio[4]= {2019,2020,2017,2019};

    int i;

    for(i=0; i < tam ; i++)
    {
        fecha[i].anio=anio[i];
        fecha[i].dia=dia[i];
        fecha[i].mes=mes[i];
    }
}
void mostramosFechas(Efecha fechas[], int tam)
{
    int i;

    for(i=0; i < tam ; i++)
    {
        printf("%d/%d/%d/\n", fechas[i].dia,fechas[i].mes,fechas[i].anio);
    }
}

void servicio(Eservicios mantenimiento[], int tam)
{
    int idServicio[4]= {111,222,333,444};
    char descripcion[4][25]= {"Garantia","Mantenimiento","Repuestos","Refaccion"};
    int precio[4]= {250,500,400,600};
    int estadoServicio[4]= {0,0,0,0};

    int i;

    for(i=0; i < tam ; i++)
    {
        mantenimiento[i].estadoServicio=estadoServicio[i];
        mantenimiento[i].idServicio=idServicio[i];
        mantenimiento[i].precio=precio[i];
        strcpy(mantenimiento[i].descripcion,descripcion[i]);
    }

}

void reparaciones(Ereparacion arreglo[], int tam)
{
    int i;

    int idReparacion[4]= {1001,1002,1003,1004};
    int serie[4]= {956425,1115436,999526,666648};
    int idServicio[4]= {111,222,333,444};

    for(i=0; i < tam ; i++)
    {
        arreglo[i].idReparacion=idReparacion[i];
        arreglo[i].serie=serie[i];
        arreglo[i].idServicio=idServicio[i];
    }

}


void mostramosReparaciones(Ereparacion arreglo[], int tam)
{
    int i;


    printf("\n\tREPARACIONES\n");
    printf("\nId Reparacion      Num.Serie     Id Servicio\n\n");

    for(i=0; i < tam ; i++)
    {

             printf("%15d%14d%15d \n",
               arreglo[i].idReparacion,
               arreglo[i].serie,
               arreglo[i].idServicio/*,
               arreglo[i].fecha.dia,
               arreglo[i].fecha.mes,
               arreglo[i].fecha.anio*/);



    }


}
