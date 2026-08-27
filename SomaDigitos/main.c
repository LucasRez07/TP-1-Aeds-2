#include <stdio.h>
#include <stdlib.h>

long long int soma( long long int a)
{
    int s = 0; //Crio uma variável para armazenar a soma de cada número

    if(a == 0)
    {
        return 0;
    }

    while(a > 0) //Faço o loop enquanto o número for maior que 0
    {
        s += a%10; //Somo o resto da divisão por 10 que resulta na unidade

        a /= 10; //Após a soma divido o número por 10 a fim de pegar a próxima unidade
    }

    return s;
}

int main()
{
    long long int num;

    while( scanf("%lld", &num) != EOF)
    {
        printf("%lld\n", soma(num));
    }
    return 0;
}
