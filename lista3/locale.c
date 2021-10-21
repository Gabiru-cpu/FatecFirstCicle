#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    printf("á ã ç    a b c\n\n");

    system("pause");
    return 0;
}