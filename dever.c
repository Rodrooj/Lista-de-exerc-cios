#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*
//Soma dos Números
int main() {
    int numero, soma = 0;

    for (;;) {
        printf("Digite um numero inteiro (ou 0 para encerrar): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;  // Saia do loop quando o usuário inserir 0
        }

        soma += numero;
    }

    printf("A soma dos numeros inseridos e: %d\n", soma);

    return 0;
}


//Contagem Regressiva
int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("O número fornecido deve ser maior que 0.\n");
        return 1; // Encerra o programa com um código de erro.
    }

    printf("Contagem regressiva de %d ate 1:\n", numero);

    for (; numero >= 1; numero--) {
        printf("%d ", numero);
    }

    printf("\n");

    return 0;
}


//Adivinha número
int main() {
    int numeroAleatorio, palpite, maxTentativas, tentativas;
    srand(time(0)); // Inicializa a semente do gerador de números aleatórios com o tempo atual.

    numeroAleatorio = (rand() % 100) + 1; // Gera um número aleatório entre 1 e 100.
    maxTentativas = 10;

    printf("Tente adivinhar um numero entre 1 e 100.\n");

    for (int tentativas = 0; tentativas < maxTentativas; tentativas++) {
        printf("Tentativa %d: Digite seu palpite: ", tentativas + 1);
        scanf("%d", &palpite);

        if (palpite < 1 || palpite > 100) {
            printf("Por favor, digite um numero entre 1 e 100.\n");
        } else if (palpite == numeroAleatorio) {
            printf("Parabens! Voce adivinhou o numero corretamente\n");
            break;
        } else {
            if (palpite < numeroAleatorio) {
                printf("Tente um numero maior.\n");
            } else {
                printf("Tente um numero menor.\n");
            }
        }
    }

    if (tentativas == maxTentativas) {
        printf("Suas tentativas acabaram. O numero correto era: %d\n", numeroAleatorio);
    }

    return 0;
}


//Fatorial
int main() {
    int numero, fatorial = 1;

    do {
        printf("Digite um numero inteiro nao negativo: ");
        scanf("%d", &numero);

        if (numero < 0) {
            printf("Por favor, insira um numero nao negativo.\n");
        }
    } while (numero < 0);

    int i = 1;
    while (i <= numero) {
        fatorial *= i;
        i++;
    }

    printf("O fatorial de %d e %d\n", numero, fatorial);

    return 0;
}


//Ano bissexto
int main() {
    int ano;

    printf("Digite um ano para verificar se e bissexto: ");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("%d e um ano bissexto.\n", ano);
    } else {
        printf("%d nao e um ano bissexto.\n", ano);
    }

    return 0;
}


//Estacao do ano
int main() {
    int mes;

    printf("Digite o numero do mes (1 a 12): ");
    scanf("%d", &mes);

    if (mes >= 1 && mes <= 12) {
        char *estacao;

        switch (mes) {
            case 12:
            case 1:
            case 2:
                estacao = "Inverno";
                break;
            case 3:
            case 4:
            case 5:
                estacao = "Primavera";
                break;
            case 6:
            case 7:
            case 8:
                estacao = "Verao";
                break;
            case 9:
            case 10:
            case 11:
                estacao = "Outono";
                break;
        }

        printf("A estacao do ano para o mes %d e: %s\n", mes, estacao);
    } else {
        printf("Mes invalido. Digite um numero de mes entre 1 e 12.\n");
    }

    return 0;
}


//palíndromo
int isPalindromo(const char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0; // Não é um palíndromo
        }
    }
    return 1; // É um palíndromo
}

int main() {
    int numero;
    printf("Digite um numero inteiro para verificar se e um palindromo: ");
    scanf("%d", &numero);

    char numeroStr[20]; // Supomos que o número não tenha mais de 20 dígitos.
    sprintf(numeroStr, "%d", numero); // Converte o número em uma string.

    if (isPalindromo(numeroStr)) {
        printf("%d e um palindromo.\n", numero);
    } else {
        printf("%d nao e um palindromo.\n", numero);
    }

    return 0;
}


//Fizz, Buzz
int main(){

int i, j = 1;
printf("Digite um numero ");
scanf("%d", &i);

for(j; j<=i; j++){

    if (j%3 == 0 && j%5 == 0)
    {
        printf("FizzBuzz\n");
    }
    else if (j%5 == 0)
    {
        printf("Buzz\n");
    }
    else if (j%3 == 0)
    {
        printf("Fizz\n");
    }
    else
    {
        printf("%d\n", j);
    }
}

}
*/