#include <stdio.h>

int square(int x){
    return x*x;
}

int main(){
	int i=0;
    for(i=1;i<=10;i++) 
        printf("%d ",square(i));
    putchar('\n');
    return 0;
}
