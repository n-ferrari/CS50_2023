//create mario stairs

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = 0, i, j, k, branco, hashtag;

    while (height < 1 || height > 8)
    {
        printf("Height: ");
        scanf("%i", &height);
    }
    branco = height;
    hashtag = 1;

    for (i = height - 1; i >= 0; i--)
    {
        for (j = branco - 1; j > 0; j--)
        {
            printf(" ");
        }
        for (k = 1; k <= hashtag; k++)
        {
            printf("#");
        }
        printf("  ");
        for (k = 1; k <= hashtag; k++)
        {
            printf("#");
        }

    branco = branco - 1;
    hashtag = hashtag + 1;
    printf("\n");
    }

}
