#include <stdio.h>
#include <locale.h>

int pertence_fibonacci(int num) {
	
    int a = 0, b = 1;
    while (b < num) {
        int temp = a;
        a = b;
        b = temp + b;
    }
    return (b == num);
}

void sequencia_fibonacci(int n) {
	
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    printf("Sequência de Fibonacci: %d %d", fib[0], fib[1]);
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        printf(" %d", fib[i]);
    }
    printf("\n");
    
    if (pertence_fibonacci(n)) {
        printf("%d pertence à sequência de Fibonacci.\n", n);
    } else {
        printf("%d não pertence à sequência de Fibonacci.\n", n);
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Informe um número inteiro: ");
    scanf("%d", &num);
    sequencia_fibonacci(num);
    return 0;
}

