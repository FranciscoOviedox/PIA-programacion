#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define USR 4

struct Usuarios{
    int id;
    char nombre_usuario[30];
    char pass[30];
    int status;
}usuarios[USR] = {{100, "pancho","123456",1}
,{101,"adrian","1234567",1}
,{102,"brayan","123456",1}
,{103,"reyna","1234324",1}};

void agregar_usuarios(){
    FILE *usuariosbin;
    usuariosbin = fopen("usuarios.bin","wb");
    fwrite(usuarios,sizeof(struct Usuarios),USR,usuariosbin);
    fclose(usuariosbin);
}

void cargar_usuarios(){
    FILE *usuariosbin;
    usuariosbin = fopen("usuarios.bin","rb");
    fwrite(usuarios,sizeof(struct Usuarios),USR,usuariosbin);
    fclose(usuariosbin);
}

void verificar_usuario(int intentos){
    char usuario_ingreso[30];
    char pass_ingreso[30];
    FILE *usuariosbin;
    usuariosbin = fopen("usuarios.bin","rb");
    do{
        printf("Agencia autos fusufum \n");
        printf("Usuario: ");
        scanf("%s",usuario_ingreso);
        fflush(stdin);
        printf("Contraseña: ");
        scanf("%s",pass_ingreso);
        fflush(stdin);

        int i;
        fread(usuarios,sizeof(struct Usuarios),USR,usuariosbin);
        for(i=0;i<USR;i++)
        {
            if(strcmp(usuarios[i].nombre_usuario,usuario_ingreso)==0&&strcmp(usuarios[i].pass,pass_ingreso)==0)
            {
                printf("Usuario Correcto\n");
            }
            else if(strcmp(usuarios[i].nombre_usuario,usuario_ingreso)>0&&strcmp(usuarios[i].pass,pass_ingreso)>0)
                {
                    printf("Contraseña incorrecta");
                    intentos--;
                }
        }
       fclose(usuariosbin);
    }while(intentos>0);
}
