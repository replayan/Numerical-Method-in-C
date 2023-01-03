#include <stdio.h>
#include <stdlib.h>
char str[150];
int i, j;
void delChar();
void reverse();
void sentenceCase();

int main()
{
    int ch;
    while (1)
    {
        printf("\n*** MENU ***");
        printf("\n\n1.DELETE CHAR\n2.CAPITALIZE\n3.REVERSE\n4.Exit");
        printf("\n\nEnter your choice(1-4): ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            delChar();
            break;
        case 2:
            sentenceCase();
            break;
        case 3:
            reverse();
            break;
        case 4:
            exit(0);
        default:
            printf("\nINVALID CHOICE\n");
        }
    }
}

void delChar()
{
    printf("\nEnter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; ++i)
    {
        while (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || str[i] == '\0'))
        {
            for (j = i; str[j] != '\0'; ++j)
            {
                str[j] = str[j + 1];
            }
            str[j] = '\0';
        }
    }
    printf("\nResultant String :%s\n", str);
}
void reverse()
{
    char rev[150];
    int i, j, count = 0;
    scanf("%s", str);
    printf("\nString Before Reverse: %s\n", str);

    while (str[count] != '\0')
    {
        count++;
    }
    j = count - 1;

    for (i = 0; i < count; i++)
    {
        rev[i] = str[j];
        j--;
    }

    printf("\nString After Reverse: %s\n", rev);
}
void sentenceCase()
{
    printf("\nEnter a string: ");
    scanf("%s", str);
    if (str[0] >= 'a' && str[0] <= 'z')
    {
        str[i] = str[i] - 32;
    }
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '.' || str[i] == '\n')
        {
            if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
                str[i + 1] = str[i + 1] - 32;
        }
    }
    printf("Sentence case: %s", str);
}
