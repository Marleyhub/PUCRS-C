
/*

A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:
    a) média do salário da população;
    b) média do número de filhos;
    c) maior salário;
    d) percentual de pessoas com salário até R$100,00 

*/

#include <stdio.h>

int main () {
    float salario [15];
    float salario_length = sizeof salario / sizeof salario[0];
    float maiorSalario = 0;
    int ate100 = 0;
    float ate100_percent = 0;
    float salario_total = 0;
    float salario_med = 0;

    int filhos [15];
    int filhos_length = sizeof filhos / sizeof filhos[0];
    int filhos_med = 0;
    int filhos_total = 0;
    

    printf("write down 15 salaries: ");
    for (int i = 0; i < salario_length; i++) {
        printf("Salarie %d: ", i + 1);
        scanf("%f", &salario[i]);

        if (salario[i] > maiorSalario){
            maiorSalario = salario[i];
        }
        if(salario[i] <= 100) {
            ate100++;
        }
        salario_total += salario[i];
    }

    printf("Write down how many sons per family: \n");
    for (int j = 0; j < filhos_length; j++) {
        printf("Family-%d: ", j + 1);
        scanf("%d", &filhos[j]);

        filhos_total += filhos[j];
    }
   
    ate100_percent = (ate100 * 100) / salario_length;
    salario_med = salario_total / salario_length;
    filhos_med = filhos_total / filhos_length;

    printf("The percentual of salaries that are under or equal R$100,00 is %.2f percent\n", ate100_percent);
    printf("The media of all salaries are: R$%.2f \n", salario_med);
    printf("The highest salarie is R$%.2f \n", maiorSalario);
    printf("The media of suns per family is %d\n", filhos_med);

    return 0; 
}