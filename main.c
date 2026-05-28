#include <stdio.h>
//variaves clobais
int contador;
char atividade [50];

//funçoes
void criarbancodedados(){
    FILE *fptr;
    fptr = fopen(".\\dados\\dados.txt","w");
    fclose(fptr);
}
void inserirnobanco(char a [50]){

    FILE *fptr;
    fptr = fopen(".\\dados\\dados.txt","a");
    fprintf(fptr,"%s",a);
}
void bufer (){
    int c;
    while ((c = getchar())!= '\n'&& c != EOF);
}

int main (){

    printf("criar atividade: 1.\n");
    printf("listar atividades: 2.\n");
    printf("concluir atividade: 3.\n");
    scanf("%d",&contador);

    switch(contador){
        case 1:
            printf("O que você vai fazer?\n");
            bufer();
            fgets(atividade, sizeof(atividade), stdin);
            inserirnobanco(atividade);

            printf("%s",atividade);
            break;
        case 2:
            printf("funciona 2");
            break;
        case 3:
            printf("funciona 3");
            break;
        default:
            printf("opicao invalida");

    }
    return (0);
}