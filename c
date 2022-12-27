#include <stdio.h>
#define size 200
char nome[SIZE] [50];
char email[SIZE] [50];
int cpf[SIZE];

void cadastro();

int main(void){
  cadastro();
}
void cadastro(){
    static int linha;
    do{
     printf(''digite o nome:'');
     scanf(''%s'',&nome[linha]);
     printf(''\nDigite o email:'');
     scanf(''%s'',&email[linha]);
     printf(''\Digite cpf:'');
     scanf(''%d'',&cpf[linha]);
     printf(''\Ndigite 1 para continuar ou outro valor para sair:'');
     scanf(''%d'',&op);
     linha++;

    }while(op==1);
}
