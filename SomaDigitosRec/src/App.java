import java.util.Scanner;

public class App {

    public static int somaDigitos(int n)
    {
        if(n<10)
        {
            return n; //Se o número for menor que 10 retorna ele próprio
        }
        else
        {
            return (n%10) + somaDigitos(n/10); //Caso contrário retorna o resto da divisão por 10,
        }                                      //que é a unidade do número, somado com a função do número dividido por 10,
                                               //que resultará na próxima unidade, e assim vai até somar todos
    }

    public static void main(String[] args) throws Exception {
       int num;
       Scanner sc = new Scanner(System.in);

       while(sc.hasNext())
       {
        num = sc.nextInt();
        
        System.out.println("" + somaDigitos(num));
 
       }

       sc.close();
    }
}
