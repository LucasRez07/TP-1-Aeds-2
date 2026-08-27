#include <stdio.h>
#include <stdlib.h>

char minuscula(char c) { //Converte todos os caracteres para minúsculo
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c;
}

int tamanho(char p[])
{
    int i = 0;
    while(p[i] != '\0') //Conto quantos caracteres a string tem
    {
        i++;
    }
    return i;
}

int verifica(char n[], char m[])
{
    int cont[256] = {0}; //Serve como tabela de frequência

    if(tamanho(n) == tamanho(m)) //Primeiramente preciso verificar se a quantidade de caracteres de cada uma é igual
    {
        for (int i = 0; n[i] != '\0'; i++)
        {
            char c1 = minuscula(n[i]); //Converto os caracteres para minúsculo para facilitar
            char c2 = minuscula(m[i]);

            cont[(unsigned char)c1]++; // Incrementa a frequência das letras
            cont[(unsigned char)c2]--; // Decrementa a frequência das letras
        }

        for (int i = 0; i < 256; i++)
        {
            if (cont[i] != 0) //Verifica se o saldo de todas as letras zerou
            {
                return 0;
            }
        }
        return 1;
    }

    else
    {
        return 0;
    }

}

int main()
{
    char palavra1[100], palavra2[100];

    while (scanf("%s", palavra1) == 1 && (tamanho(palavra1) != 3 || (palavra1[0] != 'F') || (palavra1[1] != 'I') || palavra1[2] != 'M'))
    {
        scanf("%s", palavra2);

        if(verifica(palavra1, palavra2) == 1)
        {
            printf("SIM\n");
        }
        else
        {
            printf("NAO\n");
        }
    }
    return 0;
}
