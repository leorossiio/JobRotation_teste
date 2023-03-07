#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    char str[100];  // string com tamanho m�ximo de 100 caracteres
    int i, j, len;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);  // L� a string digitada

    len = strlen(str) - 1; // retorna um inteiro que � o comprimento do string (o n�mero de caracteres do string, n�o contando o caractere NULL)

    // Inverte os caracteres da string
    for (i = 0, j = len - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("A string invertida �: %s\n", str);

    return 0;
}
