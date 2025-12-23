#include <stdio.h>

/* Function declarations */
float celsiusToFahrenheit(float c);
float fahrenheitToCelsius(float f);

int main() {
    float temp;
    int choice;

    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        printf("Fahrenheit = %.2f\n", celsiusToFahrenheit(temp));
    }
    else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        printf("Celsius = %.2f\n", fahrenheitToCelsius(temp));
    }
    else {
        printf("Invalid choice\n");
    }

    return 0;
}

/* Function definitions */
float celsiusToFahrenheit(float c) {
    return (c * 9 / 5) + 32;
}

float fahrenheitToCelsius(float f) {
    return (f - 32) * 5 / 9;
}
