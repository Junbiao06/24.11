#include <stdio.h>
#include <string.h>
char *get_char(char *a);

int main(void)
{
    char *names[] = {"Dad", "Mom"};
    char *numbers[] = {"001", "002"};

    char *name = get_char(name);
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("Found. %s.\n", numbers[i]);
            return 0;
        }
    }
    printf("Not Found.\n");
    return 1;
}

char *get_char(char *a)
{
    printf("Name: ");
    scanf("%s", a);
    return a;
}