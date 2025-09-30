#include <stdio.h>
// Variável global
float totalArrecadado = 0;

// Procedimento: adiciona a contribuição de um participante.
void adicionaContyribuicao(float valor){
    totalArrecadado += valor;
    printf("Contribuição de R$ %.2f adicionada! Total: R$ %.2f",valor, totalArrecadado);
}

//Função: calcula quantidade de carne por pessoa(0.5kg por pessoa)

float calculaCarne(int qtdPessoas){
    return qtdPessoas * 0.5;
}


// Procedimento para mostrar o resumo
void mostraResumo(int qtdPessoas){
    float carne = calculaCarne(qtdPessoas);
    float media = totalArrecadado / qtdPessoas;
    printf("\n=====   RESUMO CHUIRRASCO =====\n");
    printf("Pareticipantes: %d\n", qtdPessoas);
    printf("Carne necessária : %2f KG\n", carne);
    printf("Total arrecadado : R$ %.2f\n",totalArrecadado);

    printf("Médida por pessoa: R$ %.2f\n",media);
    printf("=================================\n");
}



int main(){
 int pessoas;
 float valor;

printf("Digite o número de participantes: ");
scanf("%d",&pessoas);

for (int i =1 ; i<=pessoas; i++){
    printf("Digite a contribuição do participante %d: R$ ", i);
    scanf("%f", &valor);
    adicionaContyribuicao(valor);
}




mostraResumo(pessoas);
}