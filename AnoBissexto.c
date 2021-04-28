#include<stdio.h>
#include<stdlib.h>

int main(){

    int ano;

    printf("Insira um ano: ");
    scanf("%d", &ano);

    if(((ano%4)==0) && ((ano%100)!=0)){
        printf("Esse eh um ano bissexto");
    }
    else if ((ano%400)==0){
        printf("Esse eh um ano bissexto");
    }else{
        printf("Esse nao eh um ano bissexto");
    }


    return 0;
    system('pause');

}