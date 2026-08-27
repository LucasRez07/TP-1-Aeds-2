#include <stdio.h>
#include <stdlib.h>

int tamanho(char p[])
{
    int i = 0;
    while(p[i] != '\0') //Conto quantos caracteres a string tem
    {
        i++;
    }
    return i;
}

char* cifra(char n[], int i)
{
   if(n[i] == '\0') //Caso base ocorre quando a string chega no caractere \0
   {
       return n;
   }

   n[i] += 3; //Avanço três letras em cada posição da string

   cifra(n, i+1); //Chamo a função com o próximo índice para executar a cifra no próximo caractere
}

int main()
{
    char mensagem[10000];

    while (scanf(" %[^\n]", mensagem) == 1 && (tamanho(mensagem) != 3 || (mensagem[0] != 'F') || (mensagem[1] != 'I') || mensagem[2] != 'M'))
    {
        printf("%s\n", cifra(mensagem, 0));
    }
    return 0;
}
