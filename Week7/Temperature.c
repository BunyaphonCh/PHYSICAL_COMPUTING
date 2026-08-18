#include <stdio.h>

double celsiusToFahrenheit(double celcius) {
    return 32 + celcius * (180.0/100.0);
}

double fahrenheitToCelcius(double fahrenheit) {
    return (fahrenheit - 32) * (100.0/180.0);
}

void printFarenheit(double fahrenheit) {
    printf("%.2f f", fahrenheit);
}

void printCelcius(double celcius) {
    printf("%.2f c", celcius);
}

int main() {
    double temp;
    char unit;
    
    scanf("%lf %c", &temp, &unit);
    
    // แปลงตัวอักขระเป็นพิมพ์เล็ก เผื่อ input เป็นตัวใหญ่
    if (unit >= 'A' && unit <= 'Z') {
        unit = unit + 32;
    }
    
    if (unit == 'c') {
        double f = celsiusToFahrenheit(temp);
        printFarenheit(f);
    }
    else if (unit == 'f') {
        double c = fahrenheitToCelcius(temp);
        printCelcius(c);
    }
    
    return 0;
}