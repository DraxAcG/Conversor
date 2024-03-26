#include <stdio.h>

int main(){
    float cantidad;
    int opcion_origen, opcion_destino;
    float tasa[3][3] = {
        {1.0, 0.13, 0.12}, // Tasa de cambio de Quetzal = Quetzal, Dolar Estadounidense, Euro
        {7.81, 1.0, 0.91}, // Tasa de cambio de Dolar = Quetzal, Dolar Estadounidense, Euro 
        {8.54, 1.09, 1.0} // Tasa de cambio de Euro = Quietzal, Dolar Estadounidense, Euro
    };

    // Ingresar la cantidad a convertir.
    printf("Bienvenidos al convertidor de monedas\n");
    printf("Ingrese la cantidad a convertir: ");
    scanf("%f", &cantidad);
    
    // Opciones moneda de origen
    printf("Seleccione la moneda de origen:\n");
    printf("1 - Quetzal\n");
    printf("2 - Dolar Estadounidense\n");
    printf("3 - Euros\n");
    scanf("%d", &opcion_origen);

    // Opciones moneda a convertir 
    printf("Seleccione la maneda de destino:\n");
    printf("1 - Quetzal\n");
    printf("2 - Dolar Estadounidense\n");
    printf("3 - Euros\n");
    scanf("%d", &opcion_destino);

    float resultado = cantidad * tasa[opcion_origen - 1][opcion_destino - 1];

    printf("%.2f en la moneda de origen equivale a %.2f en la moneda de destino\n", cantidad, resultado);
    return 0;
}   