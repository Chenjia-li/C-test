#include <stdio.h>

// 指针运算
int main(void){
    char ac[] = {0,1,2,3,4,5,6,7,8,9,-1};
    char *p = &ac[0];

    int i;
    for(i = 0;i<sizeof(ac)/sizeof(ac[0]);i++){
        printf("%d ",ac[i]);
    }
    printf("\n");
    for(p = ac;*p != -1;p++){
        printf("%d ",*p);
    }
    printf("\n");

    p = &ac[0];
    while(*p != -1){
        printf("%d ",*p++);
    }
    // printf("p = %p\n",p);
    // printf("p+1 = %p\n",p+1); //增加一个单元sizeof()
    // printf("*p = %d\n",*p);
    // printf("*(p+1) = %d\n",*(p+1));

    // // *p --> ac[0]
    // // *(p+1) -->ac[1]
    // // *(p+n) <--> ac[n]

    // int ai[] = {0,1,2,3,4,5,6,7,8,9};
    // int *q = ai;
    // int *q1 = &ai[5];
    // printf("*q1 = %d\n",*q1);
    // printf("q = %p\n",q);
    // printf("q+1 = %p\n",q+1);
    // printf("*(q+1) = %d\n",*(q+1));
    // printf("q1-q = %d\n",q1-q);

    return 0 ;
}