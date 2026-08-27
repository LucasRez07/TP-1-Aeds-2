import java.util.Scanner;
import java.util.Random;

public class App {

    private static Random gerador = new Random();

    static{
        gerador.setSeed(4);
    }

    public static String Altera(String n)
    {
        char letra1 = ((char)('a' + (Math.abs(gerador.nextInt()) % 26))); //Sorteio a letra que será trocada
        char letra2 = ((char)('a' + (Math.abs(gerador.nextInt()) % 26))); // Sorteio a letra que substituirá a que saiu
        String nova = ""; //Crio uma string auxiliar para formar a string alterada
        
            for(int i=0; i<n.length(); i++)
            {
                if(n.charAt(i) == letra1)
                {
                    nova += letra2; //Se a letra da string for a que será substituída, a substituo pela segunda que foi sorteada
                }
                else{
                    nova += n.charAt(i); //Caso contrário mantenho a letra que já estava antes 
                }
            }
        return nova;
    }

    public static void main(String[] args) throws Exception {
      String frase1;
      Scanner sc = new Scanner(System.in);
        while((frase1 = sc.nextLine()).length() != 3 || (frase1.charAt(0) != 'F') || (frase1.charAt(1) != 'I') || (frase1.charAt(2) != 'M'))
        {
            System.out.println("" + Altera(frase1));
        }

      sc.close();
    }
}
