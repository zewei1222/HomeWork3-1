#include<stdio.h>
#include<stdlib.h>

int main(){
    unsigned seed ;
    printf("Enter seed :");
    scanf("%u",&seed);
    srand(seed);
int i;
    for(i=1;i<=20;i++){
        printf("%10d",1+rand()%6);
        if(i%5==0) putchar('\n');
    }
}
