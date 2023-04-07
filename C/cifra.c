#include <stdio.h>
#include <ctype.h> // para usar as funções isalpha e isupper

void caesarCipher(char *s, int k);

int main()
{
    int qnt, passo;
    scanf("%d",&qnt);
    char palavras[qnt + 1];
    scanf("%s", palavras);
    scanf("%d",&passo);
    caesarCipher(palavras, passo);
    return 0;
}

void caesarCipher(char *s, int k)
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (isalpha(s[i]))
        {
            if (isupper(s[i]))
            {
                // Se for letra maiúscula, converte para minúscula
                s[i] = tolower(s[i]);
                // Aplica o deslocamento na letra minúscula
                s[i] = ((s[i] - 'a' + k) % 26) + 'a';
                // Converte de volta para letra maiúscula
                s[i] = toupper(s[i]);
            }
            else
            {
                // Se for letra minúscula, aplica o deslocamento
                s[i] = ((s[i] - 'a' + k) % 26) + 'a';
            }
        }
    }
    printf("%s\n", s);
}
