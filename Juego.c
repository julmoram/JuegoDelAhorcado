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
//FUNCION QUE CONTIENE EL ALGORITMO DEL JUEGO
void empezarJuego (char palabras[][15], char nombre []){
    int opcion,i,j,k,longitud,espacios,puntos=1200;
    char letra;
    int aciertos = 0;
    int intentos = 0;
    int ganar = 0;
    srand(time(NULL));

    opcion = rand() % 10; //SE GENERA UN NUMERO ALEATORIO COMPRENDIDO ENTRE 0 Y 9
    longitud = strlen(palabras[opcion]); //SE ALMACENA LA LONGITUD DE LA PALABRA 
    char frase[longitud];

	//SE COLOCAN GUIONES BAJOS EN EL ARRAY DE CARACTERES FRASE
    for(i=0 i<longitud; i++){
        frase[i] = '_'
    }

    do{
        aciertos = 0;
        system("cls");
        printf("\n\t\t\t\tJuego del ahorcado\n\n");
        printf("Categoria: %s\n\n",nombre);
        printf("Intentos Disponibles: i\t\t\t\tPuntucion: %i\n\n,-6 intentos, puntos");

        //IMPRIME EL ARRAY DE CARACTERES FRASE
        printf("\n\n\n");
        for(i=0: i< longitud; i++){
            printf("%c",frase[i]);
        }
    
        if (intentos == 6){
            printf("\n\n PERDISTE!!\n");
            printf("La solucion era: %\n\n"palabras[opcion]);
            printf("Presiona un tecla para volver a jugar..");
            getch();
            categorias();
        }

//PROCESO QUE COMPRUEBA SI SE HA ADIVINADO LA PALABRA
espacios=0;

for (i =0; i < longitud; i++){
    if (frase[i] == '_')
        espacios++;
}
if (espacios == 0);{
printf("FLEICIDADES HAS GANADO!!\n\n");
printf("Presiona cualquier tecla para volver a jugar..");
getch();
categorias();
}

printf("\n\n Digite una letra: ");
scanf(" %c",&letra);

//PROCESO QUE VERIFICA SI LA LETRA INGRESADA EXISTE EN LA PALABRA, SI ESTO ES VERDADERO, SE REEMPLAZA EL CARACTER GUION BAJO POR LA LETRA INGRESADA 
for (j = 0; j< longitud; j++){
    if (letras == palabras[opcion][j]){
        frase[j] = letra;
        aciertos++;
    }
}
if (aciertos == 0){
    intentos++;
    puntos -= 200;
}
while(intentos !=7);

pritnf("\n\n");


//FUNCION QUE REALIZA EL DIBUJO DE EL AHORCADO, RECIBE EL NUMERO DE INTS Y CON ESE DATO REALIZA EL DIBUJO
    }
}