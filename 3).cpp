#include <stdio.h>
#include <locale.h>
int main() {
		setlocale(LC_ALL, "Portuguese");
    float faturamento[30] = {22174.1664, 24537.6698, 26139.6134, 0.0, 0.0, 26742.6612, 0.0, 42889.2258, 46251.174, 11191.4722, 0.0, 0.0, 3847.4823, 373.7838, 2659.7563, 48924.2448, 18419.2614, 0.0, 0.0, 35240.1826, 43829.1667, 18235.6852, 4355.0662, 13327.1025, 0.0, 0.0, 25681.8318, 1718.1221, 13220.495, 8414.61};
    int i, num_dias = 0;
    float media = 0, soma = 0, max = 0, min = faturamento[0];


    for (i = 0; i < 30; i++) {
        soma += faturamento[i];
        if (faturamento[i] > max) {
            max = faturamento[i];
        }
        if (faturamento[i] < min) {
            min = faturamento[i];
        }
    }
    
    media = soma / 30;

    for (i = 0; i < 30; i++) {
        if (faturamento[i] > media) {
            num_dias++;
        }
    }

    printf("Menor valor de faturamento: %.2f\n", min);
    printf("Maior valor de faturamento: %.2f\n", max);
    printf("Número de dias com faturamento superior à média: %d\n", num_dias);

    return 0;
}
