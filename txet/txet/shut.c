#include <stdio.h>
#include <string.h>
#include <windows.h>
int main()
{
    char input[20] = { 0 };
    system("shutdwon -s -t 60");
agein:
    printf("注意你的电脑将在60秒后关机,输入fff取消\n");
    scanf_s("%s", input);
    if (strcmp(input, "fff") == 0) {
        system("shutdwon -a");
    }
    else {
        goto agein;
    }
    return 0;
}