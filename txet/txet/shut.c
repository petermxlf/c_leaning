#include <stdio.h>
#include <string.h>
#include <windows.h>
int main()
{
    char input[20] = { 0 };
    system("shutdwon -s -t 60");
agein:
    printf("ע����ĵ��Խ���60���ػ�,����fffȡ��\n");
    scanf_s("%s", input);
    if (strcmp(input, "fff") == 0) {
        system("shutdwon -a");
    }
    else {
        goto agein;
    }
    return 0;
}