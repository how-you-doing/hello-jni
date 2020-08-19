#include <stdio.h>

void printMsg(char *msg)
{
    printf("%s\n", msg);
}

int main()
{
    char str[] = "Hello World";
    printMsg(str);
    return 0;
}
