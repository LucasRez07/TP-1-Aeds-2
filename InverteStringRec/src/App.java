import java.util.Scanner;

public class App {

    public static String inverte(String n, int fim)
    {
        if(fim < 0)
        {
            return ""; //Se o fim da string chegar a um índice negativo retorno um vazio, indicando que a inversão acabou
        }
        else
        {
            return n.charAt(fim) + inverte(n, fim - 1); //Caso contrário retorno um caractere invertido de cada vez, diminuindo o índice de fim para percorrer a string
        }
  
    }

    public static void main(String[] args) throws Exception {
        String frase;
        Scanner sc = new Scanner(System.in);

        while((frase = sc.nextLine()).length() != 3 || frase.charAt(0) != 'F' || frase.charAt(1) != 'I' || frase.charAt(2) != 'M')
        {
            int tam = frase.length();
            System.out.println("" + inverte(frase, tam - 1));
        }

        sc.close();
    }
}
