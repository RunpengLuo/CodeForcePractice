#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    int r = floor((m * n * 0.5));
    printf("%d", r);
}