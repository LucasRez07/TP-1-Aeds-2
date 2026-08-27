import java.util.Scanner;

public class App {

    public static boolean verifica(String n)
    {
        if(n.length() < 8) //Senha tem que ter no mínimo 8 caracteres
        {
            return false;
        }

        boolean minuscula = false; //Crio variáveis booleanas para verificar a presença dos caracteres requisitados
        boolean maiuscula = false;
        boolean numero = false;
        boolean especial = false;

        for(int i=0; i<n.length(); i++)
        {
           char caracter = n.charAt(i);
           
            if(caracter >= 'a' && caracter <= 'z')
            {
                minuscula = true; //Verifico se tem uma letra minúscula
            }

            else if(caracter >= 'A' && caracter <= 'Z')
            {
                maiuscula = true; //Verifico se tem uma letra maiúscula
            }

             else if(caracter >= '0' && caracter <= '9')
            {
                 numero = true; //Verifico se tem um número
            } 

            else
            {
                especial = true; //Se não for letra e nem número é um caractere especial
            }             
        }

            if(minuscula && maiuscula && numero && especial)
            {
                return true; //Retorna true se todas as exigências forem cumpridas
            }

        return false;                    
    }

    public static void main(String[] args) throws Exception {
       String senha;
       Scanner sc = new Scanner(System.in);

       while((senha = sc.nextLine()).length() != 3 || (senha.charAt(0) != 'F') || (senha.charAt(1) != 'I') || (senha.charAt(2) != 'M'))
       {
        
        if(verifica(senha) == true)
        {
            System.out.println("SIM");
        }
        else
        {
            System.out.println("NAO");
        }
       }

       sc.close();
    }
}
