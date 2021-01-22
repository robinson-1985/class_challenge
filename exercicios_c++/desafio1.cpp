// 2. Faça um programa que receba três notas, calcule e mostre a média aritmética.

#include <stdio.h>
int main() {
    float nota1, nota2, nota3, media_aritmetica; 
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    
    media_aritmetica = (nota1 + nota2 + nota3) / 3;

    printf("A média aritmetica das notas é: %2.f\n", media_aritmetica);

    getchar();
    return 0;
}