#include <stdio.h>
#include <string.h>

char *get_char(char *a);

typedef struct function
{
    char *name;
    char *number;
} person;

int main(void)
{
    person people[3];

    people[0].name = "Dad";
    people[0].number = "001";

    people[1].name = "Mom";
    people[1].number = "002";

    people[2].name = "Bro";
    people[2].number = "003";

    char *name = get_char(name);
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Number: %s.\n", people[i].number[i]);
            return 0;
        }
    }
    printf("Not Found.");
    return 1;
}

char *get_char(char *a)
{
    printf("Name: ");
    scanf("%s", a);
    return a;
}