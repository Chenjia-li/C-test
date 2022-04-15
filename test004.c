#include <stdio.h>
#include <stdlib.h>

int main(void){
    void *p;
    int cnt = 0;
    while((p = malloc(1))){
        cnt++;
    }
    printf("分配了%d00MB的空间\n",cnt);
    return 0;
}