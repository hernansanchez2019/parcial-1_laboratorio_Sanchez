#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "REPARACION.h"
#include "ELECTRODOMESTICOS.h"

void electrodomesticos(Eelectrodomestico aparato[], int tam)
{
    int i;

    int id[5]= {100,200,300,400,500};
    int serie[5]= {11111,22222,33333,44444,5555};
    int idMarca[5]= {111,222,333,444,555};
    int modelo[5]= {2010,2012,2015,2020,2018};
    int estadoElectro[5]= {0,0,0,0,0};


    for(i=0; i < tam ; i++)
    {
        aparato[i].id=id[i];
        aparato[i].serie=serie[i];
        aparato[i].idMarca=idMarca[i];
        aparato[i].modelo=modelo[i];
        aparato[i].estadoElectro=estadoElectro[i];
    }


}

void mostrarElect(Eelectrodomestico aparato[], int tam)
{
    int i;

    printf("\t'ELECTRODOMESTICOS'\n\n");
    printf("Id    Marca      Modelo   Serie  \n");

    for(i=0; i < tam ; i++)
    {

        if(aparato[i].estadoElectro==0) // FILTRAMOS POR ESTADO
        {
            printf("%3d  %3d %13d %9d\n",
                   aparato[i].id,
                   aparato[i].idMarca,
                   aparato[i].modelo,
                   aparato[i].serie);

        }


    }

}

void mostrarMarca(Emarca marca[], int tam)
{

    int i;


    printf("\n\t'MARCA'\n\n");
    printf("Descripcion\n\n");

    for(i=0; i < tam ; i++)
    {
        printf("%s\n",marca[i].descripcion);
    }

}


void marca(Emarca ListaMarca[], int tam)
{

    int idMarca[5]= {111,222,333,444,555};
    char descripcion[5][20]= {"Wirpool"," Sony"," Liliana","Gafa","Philips"};
    int estadoMarca[5]= {0,0,0,0,0};

    int i;

    for(i=0; i < tam ; i++)
    {
        ListaMarca[i].estadoMarca=estadoMarca[i];
        ListaMarca[i].idMarca=idMarca[i];
        strcpy(ListaMarca[i].descripcion, descripcion[i]);
    }

}


void BajaElectrodomesticos(Eelectrodomestico aparato[],int tam)
{
    int i;
    int IndiceBaja;

    mostrarElect(aparato,tam);

    printf("Escriba el ID del electrodomestico para la baja = ");
    scanf("%d", &IndiceBaja);

    for(i=0 ; i < tam ; i++)
    {
        if(IndiceBaja==aparato[i].id)
        {
            aparato[i].estadoElectro=1;
        }
    }

    printf("Baja Realizada con exito!!!!\n");


}

void modificarElectro(Eelectrodomestico aparato[], int tam)
{

    int auxSerie;
    int auxModelo;
    int auxID;
    int opcion;
    int i;

    mostrarElect(aparato,tam);

    printf("Ingrese el ID del Electrodomestico que quiere modificar = ");
    scanf("%d",&auxID);

    for(i=0; i < tam ; i++)
    {

        if(auxID==aparato[i].id && aparato[i].estadoElectro==0)
        {
            do
            {
                printf("\n\tMODIFICACIONES");

                printf("\n1- Modificar Serie");
                printf("\n2- Modificar Modelo");
                printf("\n3- Volver al menu principal");
                printf("\nIngrese una opcion: 1/2/3");
                scanf("%d", &opcion);

                switch(opcion)
                {
                case 1:
                    printf("Ingrese el nuevo numero de Serie: ");
                    scanf("%d", &auxSerie);
                    aparato[i].serie=auxSerie;
                    printf("Cambio realizado con exito !!!\n");
                    system("PAUSE");
                    system("cls");
                    break;

                case 2:
                    printf("Ingrese el nuevo Modelo: ");
                    scanf("%d", &auxModelo);
                    aparato[i].modelo=auxModelo;
                    printf("Cambio realizado con exito !!!\n");
                    system("PAUSE");
                    system("cls");
                    break;
                }

            }
            while(opcion!=3);

        }

    }

}

void ordenamiento(Eelectrodomestico aparato[], int tam) // electrodomésticos ordenados por modelo y por serie.

{

    int i;
    int j;
    int auxModelo;
    int auxSerie;


    for(i=0; i < tam-1 ; i++)
    {
        for(j= i+1 ; j < tam ; j++)
        {
            if(aparato[i].modelo > aparato[j].modelo)
            {
                auxModelo= aparato[i].modelo;
                aparato[i].modelo= aparato[j].modelo;
                aparato[j].modelo= auxModelo;
            }

            if(aparato[i].serie > aparato[j].serie)
            {
                auxSerie= aparato[i].serie;
                aparato[i].serie= aparato[j].serie;
                aparato[j].serie= auxSerie;
            }
        }
    }



}
