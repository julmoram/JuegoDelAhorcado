# Juego del Ahorcado en C

Este es un programa en C que implementa el clásico juego del ahorcado. El jugador debe adivinar una palabra oculta antes de que se complete el dibujo del ahorcado.

---

## Características
- **Categorías de palabras**: El jugador puede elegir entre varias categorías (frutas, animales, países y objetos).
- **Interfaz de consola**: El juego se ejecuta en la terminal.
- **Dibujo del ahorcado**: Se muestra un dibujo del ahorcado que avanza con cada intento fallido.
- **Puntuación**: El jugador comienza con 1200 puntos y pierde 200 puntos por cada intento fallido.

---

## Requisitos
- **Compilador de C**: Asegúrate de tener instalado un compilador de C como `gcc`.
- **Sistema operativo**: El programa está diseñado para ejecutarse en sistemas Linux/Unix o Windows (con una terminal compatible).

---

## Instrucciones de compilación

1. **Clona el repositorio**:
   ```bash
   git clone https://github.com/tuusuario/juego-ahorcado.git
   cd juego-ahorcado
   ```

2. **Compila el programa**:
   - En Linux/Unix:
     ```bash
     gcc -o ahorcado Juego.c
     ```
   - En Windows (usando MinGW):
     ```bash
     gcc -o ahorcado.exe Juego.c
     ```

3. **Ejecuta el programa**:
   - En Linux/Unix:
     ```bash
     ./ahorcado
     ```
   - En Windows:
     ```bash
     ahorcado.exe
     ```

---

## Instrucciones de uso

1. **Iniciar el juego**:
   - Al ejecutar el programa, se mostrará un menú con las categorías disponibles.

2. **Elegir una categoría**:
   - Ingresa el número correspondiente a la categoría que deseas jugar.

3. **Adivinar la palabra**:
   - El programa mostrará una serie de guiones bajos (`_`) que representan las letras de la palabra oculta.
   - Ingresa una letra para adivinar. Si la letra está en la palabra, se revelará su posición. Si no, perderás un intento.

4. **Ganar o perder**:
   - Si adivinas la palabra antes de que se complete el dibujo del ahorcado, ¡ganas!
   - Si el dibujo del ahorcado se completa antes de adivinar la palabra, pierdes.

---

## Estructura del código

- **`main()`**: Función principal que inicia el juego.
- **`categorias()`**: Muestra el menú de categorías y permite al jugador elegir una.
- **`ingresoCategoria()`**: Carga las palabras de la categoría seleccionada y llama a la función `empezarJuego()`.
- **`empezarJuego()`**: Contiene la lógica principal del juego.
- **`dibujo()`**: Muestra el dibujo del ahorcado según el número de intentos fallidos.

---

## Este programa NO ES PROPIO es una replica de otro para poder practicar. GRACIAS
---

¡Diviértete jugando al ahorcado! 😊


