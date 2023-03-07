#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    float saopaulo_faturamento = 67836.43;
    float riodejaneiro_faturamento = 36678.66;
    float minasgerais_faturamento = 29229.88;
    float espiritosanto_faturamento = 27165.48;
    float outrosestados_faturamento = 19849.53;

    // Faz o calculo total do faturamento da distribuidora
    float faturamento_total = saopaulo_faturamento + riodejaneiro_faturamento + minasgerais_faturamento + espiritosanto_faturamento + outrosestados_faturamento;
    

    // Calcula o percentual de cada estado
    float saopaulo_percentual = saopaulo_faturamento / faturamento_total * 100.0;
    float riodejaneiro_percentual = riodejaneiro_faturamento / faturamento_total * 100.0;
    float minasgerais_percentual = minasgerais_faturamento / faturamento_total * 100.0;
    float espiritosanto_percentual = espiritosanto_faturamento / faturamento_total * 100.0;
    float outrosestados_percentual = outrosestados_faturamento / faturamento_total * 100.0;

	printf("Faturamento total em reais: R$ %.2f\n\n", faturamento_total);
	
    printf("Percentual de representação de cada estado:\n");
    printf("SP: %.2f%%\n", saopaulo_percentual);
    printf("RJ: %.2f%%\n", riodejaneiro_percentual);
    printf("MG: %.2f%%\n", minasgerais_percentual);
    printf("ES: %.2f%%\n", espiritosanto_percentual);
    printf("Outros: %.2f%%\n", outrosestados_percentual);

    return 0;
}
