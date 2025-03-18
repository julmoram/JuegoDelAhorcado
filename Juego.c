#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

//PROTOTIPOS DE LAS FUNCIONES
void categorias();
void ingresoCAtegoria (int op);
void empezarJuego(char palabras[][15], char nombre[]);
void dibujo (int intentos);

//FUNCIÓN PRINCIPAL MAIN
int main(){
    system("mode con cols=80 lines=25");
    categorias();
    system("pause");
    return 0;
}

//FUNCIÓN CATEGORIAS IMPRIME LAS CATEGORIAS EN PANTALAL
void categorias(){
    int op;
    do{
        system("cls");
        printf("\n\t\t\t\tJuego del ahorcado\n\n");
        printf("Categorias\n\n");
        printf("1.Frutas\n");
        printf("2.Animales\n");
        printf("3.Paises\n");
        printf("4.Objetos\n\n");
        printf("Ingresa una opción: ");
        scanf("%i",&op);
    
    }while(op<i || op>4);
    if (op==1) ingresoCategoria (op);
    if (op==2) ingresoCAtegoria (op);
    if (op==3) ingresoCategoria (op);
    if (op==4) ingresoCAtegoria (op);
}

//ESTA FUNCION RECIBE UN VALOR, Y DEPENDIENDO DEL VALOR RECIBIDO LLAMA A OTRA FUNCION PARA EMPEZAR EL JUEGO
void ingresoCategoria (int op){
    char nombrecat[4][15] = ("Frutas", "Animales", "Paises", "Objetos");
    char furtas [10]{15} = ("fresa","uva","platano","coco","cereza","pera","manzana","durazno","naranja","mandarina");
    char animales [10][15] = ("gato","perro","elefante","dinossaurio","nutria","jirafa","mantarraya","coyote", "suricata","wombat");
    char paises [10][15] = ("mexico","canada","oman","liechtenstein","tailandia","aruba","tanzania","gales","irlanda","argentina");
    char objetos [10][15] = ("reloj","boton","caracol","estrella","veladora","frasco","incienso","armario","enciclopedia","cenicero")
    
    switch(op){
        case 1:
            empezarJuego(frutas,nombrecat[op-1]);
             break;
        case 2:
            empezarJuego(animales,nombrecat[op-1]);
            break;
        case 3:
            empezarJuego(paises,nombrecat[op-1]);
            break;
        case 4:
            empezarJuego(objetos,nombrecat[op-1]);
            break;
    }
}