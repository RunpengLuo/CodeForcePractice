#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n, k, v;
    scanf("%d %d\n", &n, &k);

    int ind;
    int i;
    for (i = 0; i < n; i++)
    {
        if (i == n){
            scanf("%d", &v);
        }else{
            scanf("%d ", &v);
        }
        if (v <= 0){
            break;
        }

        if (i == k - 1){
            ind = v;
        }else {
            if (i >= k && v < ind){
                break;
            }
        }
    }
    printf("%d", i);

}