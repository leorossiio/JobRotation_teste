#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    char str[100];  // string com tamanho máximo de 100 caracteres
    int i, j, len;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);  // Lê a string digitada

    len = strlen(str) - 1; // retorna um inteiro que é o comprimento do string (o número de caracteres do string, não contando o caractere NULL)

    // Inverte os caracteres da string
    for (i = 0, j = len - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("A string invertida é: %s\n", str);

    return 0;
}
