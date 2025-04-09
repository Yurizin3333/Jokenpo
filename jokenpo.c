#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int jogador, pc;
    srand(time(0));

    printf("--- Jogo de Jokenpô ---\n");
    printf("Escolha uma opção:\n 1 = Pedra.\n 2 - Papel.\n 3 - Tesoura.\n");
    printf("Escolha: \n");
    scanf("%d", jogador);

    pc = rand() % 3 + 1;

    switch (jogador){
    case 1:
        printf("O Jogador Escolheu Pedra!\n");
        break;
    case 2:
        printf("O Jogador Escolheu Papel!\n");
        break;
    case 3:
        printf("O Jogador Escolheu Tesoura!\n");
        break;
    default:
        printf("Escolha Invalida!\n");
        break;}

    switch (pc){
    case 1:
        printf("O Computador Escolheu Pedra!\n");
        break;
    case 2:
        printf("O Computador Escolheu Papel!\n");
        break;
    case 3:
        printf("O Computador Escolheu Tesoura!\n");
        break;}

    

    /* if (jogador == 1){
        if (pc == 1){
            printf("--- EMPATE ---\n");}
        else if (pc == 2){
            printf("--- O COMPUTADOR VENCEU ---\n");}
        else{
            printf("--- O JOGADOR VENCEU ---\n");}}

    else if (jogador == 2){
        if (pc == 1){
            printf("--- O JOGADOR VENCEU ---\n");}
        else if (pc == 2){
            printf("--- EMPATE ---\n");}
        else{
            printf("--- O COMPUTADOR VENCEU ---\n");}}
        
    else{
        if (pc == 1){
            printf("--- O COMPUTADOR VENCEU ---\n");}
        else if (pc == 2){
            printf("--- O JOGADOR VENCEU ---\n");}
        else{
            printf("--- EMPATE ---\n");}} */
        



}