#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    // find the 1 position
    int x = 1, y = 1;
    int k = -1;
    int b = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j == 4){
                scanf("%d\n", &k);
            }else{
                scanf("%d ", &k);
            }

            if (k == 0){
                y ++;
            }else {
                b = 1;
                break;
            }
        }
        if (b){
            break;
        }
        x ++;
        y = 1;
    }
    int s = abs(x - 3) + abs(y - 3);
    printf("%d", s);
}
