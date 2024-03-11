/*
Escreva um programa que lê um inteiro de até 4 dígitos (positivo ou negativo) e o imprime por
extenso. OBS: para extrair os dígitos do número, utilize resto por 10 (para obter a unidade) e
divisão por 10 (para remover a unidade).

Write a program that reads an integer of 4 digits and prints it digited.
*/

#include <stdio.h>

void print_digit_word(int digit) {
    switch (digit) {
        case 0: printf("zero "); break;
        case 1: printf("um "); break;
        case 2: printf("dois "); break;
        case 3: printf("tres "); break;
        case 4: printf("quatro "); break;
        case 5: printf("cinco "); break;
        case 6: printf("seis "); break;
        case 7: printf("sete "); break;
        case 8: printf("oito "); break;
        case 9: printf("nove "); break;
    }
}

void print_number_words(int num) {
    if (num < 0) {
        printf("menos ");
        num = -num;
    }

    int temp = num;
    int count = 0;

    while (temp > 0) {
        temp /= 10;
        count++;
    }

    if (count > 4) {
        printf("Numero fora do intervalo permitido.\n");
        return;
    }

    while (count > 0) {
        int digit = num % 10;
        print_digit_word(digit);
        num /= 10;
        count--;
    }

    printf("\n");
}

int main() {
    int numero;

    printf("Digite um numero de ate 4 digitos: ");
    scanf("%d", &numero);

    printf("Numero por extenso: ");
    print_number_words(numero);

    return 0;
}
