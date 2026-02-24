#include <stdio.h>

int main()
{
    int numero, iteraciones;
    int resultado;
    int valido = 0;

    while (!valido)
    {
        printf("\n:: Generador de Tablas de Multiplicar ::\n");

        // Validar primer número entero
        printf("Ingrese el primer numero entero PAR: ");
        if (scanf("%d", &numero) != 1)
        {
            printf("Error: Debe ingresar un numero entero.\n");
            while (getchar() != '\n'); // limpiar buffer
            continue;
        }

        // Validar segundo número entero
        printf("Ingrese la cantidad de iteraciones (numero entero PAR): ");
        if (scanf("%d", &iteraciones) != 1)
        {
            printf("Error: Debe ingresar un numero entero.\n");
            while (getchar() != '\n'); // limpiar buffer
            continue;
        }

        // Validar que ambos sean pares
        if (numero % 2 != 0 || iteraciones % 2 != 0)
        {
            printf("Error: Ambos numeros deben ser PARES.\n");
            continue;
        }

        valido = 1;
    }

    // Cabecera
    printf("\nTabla de multiplicar del %d\n", numero);
    printf("----------------------------------\n");

    // Tabla
    for (int i = 1; i <= iteraciones; i++)
    {
        resultado = numero * i;
        printf("%2d x %2d = %4d\n", numero, i, resultado);

        // Separador cada 10 elementos
        if (i % 10 == 0)
        {
            printf("---------- BLOQUE DE 10 ----------\n");
        }
    }

    printf("----------------------------------\n");

    return 0;
}