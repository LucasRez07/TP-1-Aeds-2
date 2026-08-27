import java.util.Scanner;

public class App {

    public static boolean verifica1(String n)
    {
        int cont = 0; //Inicio um contador para contar quantas vogais a string possui
        for(int i=0; i<n.length(); i++)
        {
            char letra = n.charAt(i);
            if(letra == 'a' || letra == 'e' || letra =='i' || letra == 'o' || letra == 'u')
            {
                cont++; 
            }
        }
        if(cont == n.length()) return true; //Se o contador for igual ao tamanho da string, ou seja, se só haver vogais, retorna true
        else return false;
        
    } 

    public static boolean verifica2(String m)
    {
        int cont = 0; //Inicio um contador para contar quantas consoantes a string possui
        for(int i=0; i<m.length(); i++)
        {
            char letra = m.charAt(i);
            if(letra >='a' && letra <= 'z')
            {
            if(letra != 'a' && letra != 'e' && letra !='i' && letra != 'o' && letra != 'u')
            {
                cont++;
            }
        }
        }
        if(cont == m.length()) return true; //Se o contador for igual ao tamanho da string, ou seja, se só haver consoantes, retorna true
        else return false;
        
    }

    public static boolean verifica3(String o)
    {
        int cont = 0; //Inicio um contador para contar quantos números a string possui
    
        for(int i=0; i<o.length(); i++)
        {
           if(o.charAt(i) >= '0' && o.charAt(i) <='9')
            {
                cont++;
            }  
        }
        if(cont == o.length()) return true; //Se o contador for igual ao tamanho da string, ou seja, se só haver números, retorna true
        else return false;
    }

    public static boolean verifica4(String o)
    {
        int cont = 0; //Inicio um contador para contar quantos números a string possui
        int pontos = 0; //Inicio um contador para ver se há um separador de casas decimais, como o ., na string
    
        for(int i=0; i<o.length(); i++)
        {
           if(o.charAt(i) >= '0' && o.charAt(i) <='9')
            {
                cont++;
            }
            else if(o.charAt(i) == '.' || o.charAt(i) == ',')
                {
                  pontos++;
                  cont++;  //Adiciono mais um no contador para a minha lógica ficar correta
                }
                if(pontos > 1) return false; //Não pode haver mais de um separador de casas decimais
        }
        if(cont == o.length()) return true; //Se o contador for igual ao tamanho da string, ou seja, se só haver números e um separador, retorna true
        else return false;
    }

    public static void main(String[] args) throws Exception {
        String sequencia = "";
        boolean X1 = false, 
        X2 = false, 
        X3 = false, 
        X4 = false;
        Scanner sc = new Scanner(System.in);
        while((sequencia = sc.nextLine()).length() != 3 || (sequencia.charAt(0) != 'F') || (sequencia.charAt(1) != 'I') || (sequencia.charAt(2) != 'M'))
        {
        

        if(verifica1(sequencia) == true)
        {
            System.out.print("SIM ");
        }
        else{
            System.out.print("NAO ");
        }

           if(verifica2(sequencia) == true)
        {
            System.out.print("SIM ");
        }
        else{
            System.out.print("NAO ");
        }

         if(verifica3(sequencia) == true)
        {
            System.out.print("SIM ");
        }
        else{
            System.out.print("NAO ");
        }

          if(verifica4(sequencia) == true)
        {
            System.out.println("SIM");
        }
        else{
            System.out.println("NAO ");
        }
        }
        
        
        sc.close();
    }
}
