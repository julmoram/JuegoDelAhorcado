#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// PROTOTIPOS DE LAS FUNCIONES
void categorias();
void ingresoCategoria(int op);
void empezarJuego(char palabras[][15], char nombre[]);
void dibujo(int intentos);

// FUNCIÓN PRINCIPAL MAIN
int main() {
    system("mode con cols=80 lines=25");
    categorias();
    system("pause");
    return 0;
}

// FUNCIÓN CATEGORIAS IMPRIME LAS CATEGORIAS EN PANTALLA
void categorias() {
    int op;
    do {
        system("cls");
        printf("\n\t\t\t\tJuego del ahorcado\n\n");
        printf("Categorias\n\n");
        printf("1.Frutas\n");
        printf("2.Animales\n");
        printf("3.Paises\n");
        printf("4.Objetos\n\n");
        printf("Ingresa una opción: ");
        scanf("%i", &op);
    } while (op < 1 || op > 4);
    ingresoCategoria(op);
}

// ESTA FUNCION RECIBE UN VALOR, Y DEPENDIENDO DEL VALOR RECIBIDO LLAMA A OTRA FUNCION PARA EMPEZAR EL JUEGO
void ingresoCategoria(int op) {
    char nombrecat[4][15] = {"Frutas", "Animales", "Paises", "Objetos"};
    char frutas[10][15] = {"fresa", "uva", "platano", "coco", "cereza", "pera", "manzana", "durazno", "naranja", "mandarina"};
    char animales[10][15] = {"gato", "perro", "elefante", "dinosaurio", "nutria", "jirafa", "mantarraya", "coyote", "suricata", "wombat"};
    char paises[10][15] = {"mexico", "canada", "oman", "liechtenstein", "tailandia", "aruba", "tanzania", "gales", "irlanda", "argentina"};
    char objetos[10][15] = {"reloj", "boton", "caracol", "estrella", "veladora", "frasco", "incienso", "armario", "enciclopedia", "cenicero"};

    switch (op) {
        case 1:
            empezarJuego(frutas, nombrecat[op - 1]);
            break;
        case 2:
            empezarJuego(animales, nombrecat[op - 1]);
            break;
        case 3:
            empezarJuego(paises, nombrecat[op - 1]);
            break;
        case 4:
            empezarJuego(objetos, nombrecat[op - 1]);
            break;
    }
}

// FUNCION QUE CONTIENE EL ALGORITMO DEL JUEGO
void empezarJuego(char palabras[][15], char nombre[]) {
    int opcion, i, j, longitud, espacios, puntos = 1200;
    char letra;
    int aciertos = 0;
    int intentos = 0;
    srand(time(NULL));

    opcion = rand() % 10; // SE GENERA UN NUMERO ALEATORIO COMPRENDIDO ENTRE 0 Y 9
    longitud = strlen(palabras[opcion]); // SE ALMACENA LA LONGITUD DE LA PALABRA 
    char frase[longitud];

    // SE COLOCAN GUIONES BAJOS EN EL ARRAY DE CARACTERES FRASE
    for (i = 0; i < longitud; i++) {
        frase[i] = '_';
    }

    do {
        aciertos = 0;
        system("cls");
        printf("\n\t\t\t\tJuego del ahorcado\n\n");
        printf("Categoria: %s\n\n", nombre);
        printf("Intentos Disponibles: %i\t\t\t\tPuntuacion: %i\n\n", 6 - intentos, puntos);

        // IMPRIME EL ARRAY DE CARACTERES FRASE
        printf("\n\n\n");
        for (i = 0; i < longitud; i++) {
            printf("%c ", frase[i]);
        }
        printf("\n");

        dibujo(intentos);

        if (intentos == 6) {
            printf("\n\n PERDISTE!!\n");
            printf("La solucion era: %s\n\n", palabras[opcion]);
            printf("Presiona una tecla para volver a jugar..");
            getchar(); getchar();
            categorias();
            return;
        }

        // PROCESO QUE COMPRUEBA SI SE HA ADIVINADO LA PALABRA
        espacios = 0;
        for (i = 0; i < longitud; i++) {
            if (frase[i] == '_')
                espacios++;
        }
        if (espacios == 0) {
            printf("FELICIDADES HAS GANADO!!\n\n");
            printf("Presiona cualquier tecla para volver a jugar..");
            getchar(); getchar();
            categorias();
            return;
        }

        printf("\n\n Digite una letra: ");
        scanf(" %c", &letra);

        // PROCESO QUE VERIFICA SI LA LETRA INGRESADA EXISTE EN LA PALABRA, SI ESTO ES VERDADERO, SE REEMPLAZA EL CARACTER GUION BAJO POR LA LETRA INGRESADA 
        for (j = 0; j < longitud; j++) {
            if (letra == palabras[opcion][j]) {
                frase[j] = letra;
                aciertos++;
            }
        }
        if (aciertos == 0) {
            intentos++;
            puntos -= 200;
        }
    } while (intentos != 6);

    printf("\n\n");
}

// FUNCION QUE REALIZA EL DIBUJO DE EL AHORCADO, RECIBE EL NUMERO DE INTENTOS Y CON ESE DATO REALIZA EL DIBUJO
void dibujo(int intentos) {
    switch (intentos) {
        case 0:
            printf("\n     _______\n    |       |\n    |\n    |\n    |\n    |\n    |\n ----------");
            break;
        case 1:
            printf("\n     _______\n    |       |\n    |       0\n    |\n    |\n    |\n    |\n ----------");
            break;
        case 2:
            printf("\n     _______\n    |       |\n    |       0\n    |       |\n    |\n    |\n    |\n ----------");
            break;
        case 3:
            printf("\n     _______\n    |       |\n    |       0\n    |      /|\n    |\n    |\n    |\n ----------");
            break;
        case 4:
            printf("\n     _______\n    |       |\n    |       0\n    |      /|\\\n    |\n    |\n    |\n ----------");
            break;
        case 5:
            printf("\n     _______\n    |       |\n    |       0\n    |      /|\\\n    |      /\n    |\n    |\n ----------");
            break;
        case 6:
            printf("\n     _______\n    |       |\n    |       0\n    |      /|\\\n    |      / \\\n    |\n    |\n ----------");
            break;
    }
}