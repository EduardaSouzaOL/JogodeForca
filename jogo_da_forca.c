#include <stdio.h>
#include <string.h>
int main()
{
    char palavrasecreta[20];
    sprintf(palavrasecreta, "MELANCIA");
 

    int acertou = 0;
    int enforcou = 0;
    do
    {
        // chute do usúario
        char chute;
        scanf("%c", &chute);
        //varre o array e verifica quais posições da letra
        for (int i = 0; i < strlen(palavrasecreta); i++)
        {
            if (palavrasecreta[i] == chute)
            {
                printf("A posição %d tem essa letra\n", i);
            }
        }
        // enquanto não acertou e não enforcou
    } while (!acertou && !enforcou);
 
}