#include <stdio.h>

int main() {
    printf("Calculation of degrees from Celsius to Fahrenheit\n");
    float C, F;
    printf("Enter the degrees in Celsius: ");
	scanf_s("%f", &C);

    F = C * 1.8 + 32;
    printf("Degrees Fahrenheit = %.2f\n", F);

    printf("Name: Niktia Gaber Sergeevich\n");
    printf("Faculty number: 081225041\n");

    return 0;
}