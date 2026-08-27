#include <stdio.h>
#include <stdlib.h>

int tamanho(char m[])
{
    int i = 0;
    while(m[i] != '\0') //Conto quantos caracteres a string tem
    {
        i++;
    }
    return i;
}

char* inverte(char n[])
{
    int i=0;
    int j = tamanho(n) - 1; //Crio uma função tamanho para contar quantos caracteres a string tem

    while(i < j)
    {
        char aux = n[j]; //Faço um swap com os elementos para inverter a string
        n[j] = n[i];
        n[i] = aux;
        i++;
        j--;
    }
    return n;
}

int main()
{
   char palavra[100];
   while (scanf(" %[^\n]", palavra) == 1 && (tamanho(palavra) != 3 || (palavra[0] != 'F') || (palavra[1] != 'I') || palavra[2] != 'M'))
   {
      printf("%s\n", inverte(palavra));
   }
    return 0;
}
