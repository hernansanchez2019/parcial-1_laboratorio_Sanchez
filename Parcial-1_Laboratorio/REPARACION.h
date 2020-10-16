
typedef struct
{
    int dia;
    int mes;
    int anio;

} Efecha;
typedef struct
{
    int idServicio;
    char descripcion[25];
    int precio;
    int estadoServicio;
} Eservicios;


typedef struct
{
    int idReparacion;
    int serie;
    int idServicio;
    Efecha fecha;


} Ereparacion;


void fecha(Efecha fecha[], int tam);
void mostramosFechas(Efecha fechas[], int tam);
void servicio(Eservicios mantenimiento[], int tam);
void mostrarService(Eservicios mantenimiento[],int tam);
void reparaciones(Ereparacion arreglo[], int tam);
void mostramosReparaciones(Ereparacion arreglo[], int tam);
