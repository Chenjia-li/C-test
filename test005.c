// 单字符输入输出

#include <stdio.h>

int main(int argc,char const *argv[])
{
    int ch;

    while ((ch = getchar()) != EOF)
    {
        putchar(ch);
    }

    // window中EOF为ctrl+z；linux中EOF为ctrl+c
    printf("EOF\n");
    
    return 0;
}
