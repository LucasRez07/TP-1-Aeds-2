import java.util.Scanner;

public class App {
    public static String Cifra(String n)
{
    int quant = n.length();
    String aux = ""; //Crio uma string vazia para juntar as letras cifradas
    for(int i=0; i<quant; i++)
    {
        char c = (char) (n.charAt(i) + 3); //Somo 3 em cada letra da string e as converto para char, pois o resultado da soma é um número
        aux += c; //Concateno as letras cifradas em outra string 
    }
    return aux;
}
    public static void main(String[] args)  {
      String mensagem = "";
      Scanner sc = new Scanner(System.in);
      while((mensagem = sc.nextLine()).length() != 3 || (mensagem.charAt(0) != 'F') || (mensagem.charAt(1) != 'I') || (mensagem.charAt(2) != 'M'))
      {
         System.out.println("" + Cifra(mensagem));
      }
      sc.close();
    }
}
