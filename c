#include <stdio.h>
#define size 200
char nome[SIZE] [50];
char email[SIZE] [50];
int cpf[SIZE];

void cadastro();
void pesquisa();
int main(void){
  cadastro();
  pesquisa();
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
}//fim da função cadastro
void pesquisa (){
    int cpfPesquisa;
    char emailPesquisa [50];
    int i;
    do{
       printf(''\nDigite 1 para pesquisar por cpf ou 2 para pesquisar por email'');
       scanf(''%d'',&op);
       shiwtch(op){
        case1:
        printf(''\nDigite o cpf:'');
        scanf(''%d'',&cpfpesquisa);
        for(i=0;i<SIZE;i++){
            if(cpf[i]==cpfPesquisa){
                printf(''\nNome: %s\ncpf: %d'', nome [i], email[i],cpf[i] );
            }
        }
           break;
           case 2 :
           printf(''\Ndigite o email'');
           scanf(''%s'', emailPesquisa);
           for(i=0;i<SIZE;i++);
           if(strcomp(email[i], emailPesquisa)){
            printf(''\nNome:%s\nEmail: %s\ncpf:%d'', nome[i] , email[i], cpf[i]]){

            }

           }
         break;
           default:
           printf(''\n opcao invalida'');
           break;
       }
    printf(''\ndigite 1 para continuar pesquisando'');
    scabf(''%d'',&op);
    }while(op==1);
}
