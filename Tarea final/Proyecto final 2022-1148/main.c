#include <stdio.h>

int main()
{
float km_recorridos;
float precio_combustible;
float seguro;
float precio_gomas;
const float consumo_max = 16.0;
const float consumo_min = 8.0;
const float precio_gasolina = 290.0;
const float litros_por_galon = 2.11;

printf("Ingrese los kilometros recorridos: ");
scanf("%f", &km_recorridos);
printf("Ingrese el precio del combustible: ");
scanf("%f", &precio_combustible);
printf("Ingrese el costo del seguro anual: ");
scanf("%f", &seguro);
printf("Ingrese el costo de las gomas: ");
scanf("%f", &precio_gomas);

// Calculo de los gastos anuales
const float gastos_mantenimiento = 6500;
const float gastos_anuales_km = gastos_mantenimiento + seguro + (precio_gomas * km_recorridos);
const float gastos_totales = gastos_anuales_km * km_recorridos;

// Calculo del costo total
FILE *ar = fopen("Jacob_Luciano.txt", "w");
if (ar == NULL)
{
printf("No se pudo abrir el archivo.\n");
return 1;
}

printf("\nL/100\tConsumo promedio\tKM/Galon\tCombustible costo x km\tGastos anuales x km\tPrecio x galon\tCosto Total\tKM\n");

fprintf(ar, "\nL/100\tConsumo promedio\tKM/Galon\tCombustible costo x km\tGastos anuales x km\tPrecio x galon\tCosto Total\tKM\n");

for (float consumo_promedio = consumo_min; consumo_promedio <= consumo_max; consumo_promedio += 1.0) {
const float consumo = 100.0 / (litros_por_galon / consumo_promedio);
const float km_por_galon = litros_por_galon * consumo_promedio;
const float costo_total = (precio_combustible * km_recorridos / km_por_galon) + gastos_totales;

printf("%.1f\t%.2f\t\t%.2f\t\t\t%.2f\t\t\t\t%.2f\t\t\t%.2f\t\t\t%.2f\t\t%.2f\n",
consumo_promedio, km_por_galon, precio_combustible * km_recorridos / km_por_galon,
gastos_anuales_km, precio_combustible, costo_total, km_recorridos);

fprintf(ar, "%.1f\t%.2f\t\t%.2f\t\t\t%.2f\t\t\t\t%.2f\t\t\t%.2f\t\t\t%.2f\t\t%.2f\n",
consumo_promedio, km_por_galon, precio_combustible * km_recorridos / km_por_galon,
gastos_anuales_km, precio_combustible, costo_total, km_recorridos);

printf("\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
}

fclose(ar);
printf("\nLos resultados se han guardado correctamente en el archivo Jacob_Luciano.txt.\n");
return 0;
}
