#include<stdio.h>
#include<stdlib.h>
#include "usuarios.c"

int main(){
    int op;

    cargar_usuarios();
    verificar_usuario(3);

    printf("Agencia de Autos FCFM \n");
    printf("1. Clientes \n \t a. Alta \n \t b. Baja \n 2. Autos \n \t a. Alta \n \t b. Baja \n 3. Cotizacion \n 4. Reportes \n \t a. Listado de Clientes \n \t b. Listado de autos \n \t c. Impresion de cotizacion \n 5. Reactivar usuario \n 6. Salir \n Seleccione la opcion:___");
    scanf("%d",&op);

    while(op != 6){
       switch(op){
        /*case 1:
            //clientes.c
        case 2:
            //vehiculos.c
        case 3:
            //cotizacion.c
        case 4:
            //reportes.c
        case 5:
            //activar usuario.c
        */
       }
    }

    return 0;
}
