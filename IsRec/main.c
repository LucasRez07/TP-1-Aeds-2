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

int vogal(char n[], int i)
{
    if(n[i] == '\0')
    {
        return 1; //Caso chegue no \0 significa que a string tem apenas vogais
    }
    else
    {
        if(n[i] == 'a' || n[i] == 'e' || n[i] == 'i' || n[i] == 'o' || n[i] == 'u') //Verifico se o caractere é vogal
        {
            return vogal(n, i+1); //Se for verifico o próximo com a chamada recursiva
        }
        else
        {
            return 0; //Se não for vogal retorno 0 (false) de uma vez
        }
    }
}

int consoante(char n[], int i)
{
    if(n[i] == '\0')
    {
        return 1; //Caso chegue no \0 significa que a string tem apenas consoantes
    }
    else
    {
        if(n[i] >= 'a' && n[i] <= 'z') //Verifico se o caractere está no alfabeto e abaixo vejo se ele é diferente das vogais
        {
            if(n[i] != 'a' && n[i] != 'e' && n[i] != 'i' && n[i] != 'o' && n[i] != 'u')
            {
                return consoante(n, i+1); //Se for verifico o próximo com a chamada recursiva
            }
            else
            {
                return 0; //Se não for consoante retorno 0 (false) de uma vez
            }
        }

    }
}

int inteiro(char n[], int i)
{
    if(n[i] == '\0')
    {
        return 1; //Caso chegue no \0 significa que a string é um número inteiro
    }
    else
    {
        if(n[i] >= '0' && n[i] <= '9') //Verifico se o caractere é um número
        {
            return inteiro(n, i+1); //Se for verifico o próximo com a chamada recursiva
        }
        else
        {
            return 0; //Se não for um número retorno 0 (false) de uma vez
        }
    }
}

int real(char n[], int i, int separador)
{
    if(n[i] == '\0')
    {
        return 1; //Caso chegue no \0 significa que a string é um número real
    }

    else
    {
        if((n[i] >= '0' && n[i] <= '9')) //Verifico se o caractere é um número
        {
            return real(n, i+1, separador); //Se for verifico o próximo com a chamada recursiva
        }

        else if(n[i] == '.' || n[i] == ',') //Verifico se há um separador de casas decimais
        {
            separador ++;

            if(separador > 1)
            {
                return 0; //Só pode haver um separador por número real
            }

            return real(n, i+1, separador);
        }

        else
        {
            return 0; //Se não for um número retorno 0 (false) de uma vez
        }
    }
}

int main()
{
    char vetor[10000];

    while(scanf(" %[^\n]", vetor) == 1 && tamanho(vetor) != 3 || vetor[0] != 'F' || vetor[1] != 'I' || vetor[2] != 'M')
    {
        if(vogal(vetor, 0) == 1)
        {
            printf("SIM ");
        }
        else
        {
            printf("NAO ");
        }

        if(consoante(vetor, 0) == 1)
        {
            printf("SIM ");
        }
        else
        {
            printf("NAO ");
        }

        if(inteiro(vetor, 0) == 1)
        {
            printf("SIM ");
        }
        else
        {
            printf("NAO ");
        }

        if(real(vetor, 0, 0) == 1)
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
