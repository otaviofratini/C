#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int p1, pc, vPc, vP1;
    char c;
    c = 2;
    vPc = 0;
    vP1 = 0;
    srand(time(NULL));
    printf("****************************\n");
    printf("**********JanKenPon*********\n");
    printf("****************************\n");
    printf("*****Escolha sua jogada*****\n| 1-Pedra | 2-Papel | 3-Tesoura |\n");
    do {
        pc = 1 + (rand() % 3);
        fflush(stdin);
        printf("Digite sua jogada: \n");
        scanf("%d",&p1);
        switch (p1){
            case 1:
                printf("Player jogou Pedra \n");
                if(pc == 3){
                    printf("Pedra ganhou de Tesoura\n");
                    vP1 = vP1 + 1;
                    printf("*****\tScore\t*****\n Player: %d x PC: %d \n",vP1,vPc);
                } else {
                    if (pc == 2){
                        printf("Papel ganhou de Pedra\n");
                        vPc = vPc + 1;
                        printf("*****\tScore\t*****\n Player: %d x PC: %d \n",vP1,vPc);
                    } else {
                        printf("Empate!\n");
                        printf("*****\tScore\t*****\n Player: %d x PC: %d \n",vP1,vPc);
                    }
                }
                break;
            case 2:
                printf("Player jogou Papel\n");
                if(pc == 1){
                    printf("Papel ganhou de Pedra\n");
                    vP1 = vP1 + 1;
                    printf("*****\tScore\t*****\n Player: %d x PC: %d \n",vP1,vPc);
                } else {
                    if(pc == 3){
                        printf("Tesoura ganhou de Papel\n");
                        vPc = vPc + 1;
                        printf("*****\tScore\t*****\n Player: %d x PC: %d \n",vP1,vPc);
                    } else {
                        printf("Empate!\n");
                        printf("*****\tScore\t*****\n Player: %d x PC: %d \n",vP1,vPc);
                    }
                }
                break;
            case 3:
                printf("Player jogou Tesoura\n");
                if(pc == 2){
                    printf("Tesoura ganhou de Papel\n");
                    vP1 = vP1 + 1;
                    printf("*****\tScore\t*****\n Player: %d x PC: %d \n",vP1,vPc);
                } else {
                    if(pc == 1){
                        printf("Pedra ganhou de Tesoura\n");
                        vPc = vPc + 1;
                        printf("*****\tScore\t*****\n Player: %d x PC: %d \n",vP1,vPc);
                    } else {
                        printf("Empate!\n");
                        printf("*****\tScore\t*****\n Player: %d x PC: %d \n",vP1,vPc);
                    }
                }
                break;
            default:
                printf("Jogada n permitida \n");
                printf("*****\tScore\t*****\n Player: %d x PC: %d \n",vP1,vPc);
                break;
        }   
    } while(vP1 < 3 && vPc < 3);
    if(vP1 > vPc){
        printf("****************************\n");
        printf("*****O Player venceu! %c*****\n",c);
        printf("****************************\n");
    } else {
        printf("****************************\n");
        printf("******O PC venceu! %c********\n",c);
        printf("****************************\n");
    }
}