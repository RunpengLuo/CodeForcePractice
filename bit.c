#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n;
    int x = 0;
    char s[4];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", s);
        if (s[1] == '+'){
            x ++;
        }else if(s[1] == '-'){
            x --;
        }
    }
    
    printf("%d", x);
}