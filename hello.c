#include <stdio.h>
#include <stdlib.h>
#include <string.h>  // Para usar strcpy

int main() {
    char firstName[30], lastName[30];
    char typeOfPerson[30];
    int age;
    
    // Recebe o primeiro nome
    printf("Digite seu nome: ");
    scanf("%s", firstName);
    
    // Recebe o sobrenome
    printf("Digite seu sobrenome: ");
    scanf("%s", lastName);
    
    // Recebe a idade
    printf("Digite sua idade: ");
    scanf("%i", &age);

    // Determina o tipo de pessoa com base na idade
    if (age >= 18) {
        strcpy(typeOfPerson, "Maior de idade");  // Atribui "Adolescente" se idade < 18
    } else if(age >= 12 && age <= 17) {
        strcpy(typeOfPerson, "Adolescente");  // Atribui "Maior de idade" caso contrário
    } else {
        strcpy(typeOfPerson, "Crianca");   
    }
 
    // Imprime o nome completo e o tipo de pessoa
    printf("Nome do aluno: %s %s\n", firstName, lastName);
    printf("Classificacao etaria: %s\n", typeOfPerson);
    
    system("pause");  // Pausa a execução do programa
    
    return 0;  // Retorna 0 indicando que o programa terminou com sucesso
}
