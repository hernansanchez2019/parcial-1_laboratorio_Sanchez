
typedef struct
{
    int id;
    int serie;
    int idMarca;
    int modelo;
    int estadoElectro;

} Eelectrodomestico;
typedef struct
{
    int idMarca;
    char descripcion[20];
    int estadoMarca;

} Emarca;

void electrodomesticos(Eelectrodomestico aparato[], int tam);
void mostrarElect(Eelectrodomestico aparato[], int tam);
void marca(Emarca ListaMarca[], int tam);
void mostrarMarca(Emarca marca[], int tam);
void BajaElectrodomesticos(Eelectrodomestico aparato[],int tam);
void ordenamiento(Eelectrodomestico aparato[], int tam);

