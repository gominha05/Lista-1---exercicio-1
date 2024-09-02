#include <stdio.h>
#include <stdlib.h>

int main(){
int n;

printf("Digite um numero inteiro positivo:");
scanf("%d",&n);

if(n<=0){
    printf("Entrada invalida.");
    return 0;
}
printf("n=%d\n",n);

while(n>1){
    if(n%2==1){
        n = n*3+1;
    printf("Seu numero e impar.\n");

    }
    else{
        n = n/2;
        printf("Seu numero e par.");
    }
    printf("n=%d\n",n);
}
return 0;
}
