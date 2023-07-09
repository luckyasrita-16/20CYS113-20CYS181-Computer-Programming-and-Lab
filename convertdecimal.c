#include <stdio.h>

void decimalToBinary(int decimal) {
    int binary[32];
    int i = 0;

    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }

    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

void decimalToOctal(int decimal) {
    int octal[32];
    int i = 0;

    while (decimal > 0) {
        octal[i] = decimal % 8;
        decimal /= 8;
        i++;
    }

    printf("Octal equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
}

void decimalToHexadecimal(int decimal) {
    char hexadecimal[32];
    int i = 0;
    char hex_chars[] = "0123456789ABCDEF";

    while (decimal > 0) {
        hexadecimal[i] = hex_chars[decimal % 16];
        decimal /= 16;
        i++;
    }

    printf("Hexadecimal equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexadecimal[j]);
    }
    printf("\n");
}

int main() {
    int decimal;
     scanf("%d",&decimal);
     if(decimal<=0){
    printf("Error: Value should be greater than 0");
     }
     else{

    decimalToBinary(decimal);
    decimalToOctal(decimal);
    decimalToHexadecimal(decimal);
     }
    return 0;
}
