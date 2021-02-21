#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,rem,sum=0;
    scanf("%d", &n);
    do 
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }while (n>0);
    printf("%d",sum);
    return 0;
}
