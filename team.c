#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, a, b, c;
    scanf("%d", &n);
    int o = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        if (a + b + c >= 2){
            o ++;
        }
    }
    printf("%d", o);
}