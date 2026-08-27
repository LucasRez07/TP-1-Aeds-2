#include <stdio.h>
#include <stdlib.h>

int tamanho(char p[])
{
    int i = 0;
    while(p[i] != '\0') //Conta quantos caracteres a string tem
    {
        i++;
    }
    return i;
}

int longa(char n[])
{
    int maxLen = 0; //Armazena o recorde da maior substring

    for (int inicio = 0; inicio < tamanho(n); inicio++) //Escolhe aonde a busca começa
    {
        char str[100]; //Funciona como inventário
        int quant = 0; //Quantidade de letras na atual tentativa
        int sem_repeticao = 1; //Serve pra avisar se podemos continuar andando ou se achou uma repetição


        for (int i = inicio; i < tamanho(n) && sem_repeticao == 1; i++)
        {
            int j = 0;


            while (j < quant && str[j] != n[i]) //Antes de colocar as letras no inventário este while
            {                                   //checa as que já foram salvas
                j++;
            }

            if (j == quant) //Significa que a letra é nova
            {
                str[quant] = n[i];
                quant++;
            }
            else //Letra já existia
            {
                sem_repeticao = 0;
            }
        }


        if (quant > maxLen) //Serve para atualizar o recorde de maior substring
        {
            maxLen = quant;
        }
    }

    return maxLen;
}
int main()
{
    char sequencia[100];

    while (scanf("%s", sequencia) == 1 && (tamanho(sequencia) != 3 || (sequencia[0] != 'F') || (sequencia[1] != 'I') || sequencia[2] != 'M'))
    {
        printf("%d\n", longa(sequencia));
    }
    return 0;
}
