import java.util.*;
class TP01Q04Aleatoria {

    //verifica se chegou no fim
    public static boolean isFim(String s){
       return (s.length() == 3 && s.charAt(0) == 'F' && s.charAt(1) == 'I' && s.charAt(2) == 'M');
    }

    //verifica e faz a troca
    public static String trocaAleatoria(String frase, char c1, char c2) {
        String novaFrase = ""; //variável a ser printada
            for (int i = 0; i < frase.length(); i++) {
                if (frase.charAt(i) == c1) {
                    novaFrase += c2; //se o caracter for o sorteado, troca
                } else {
                    novaFrase += frase.charAt(i); //se o caracter nao for o sorteado, permanece igual
                }
            }
        return novaFrase;
    }

         
    public static void main (String[] args){

        //random part
        String[] entrada = new String[1000];
        Random gerador = new Random();
        gerador.setSeed(4);
        char caracter1 = (char)('a' + (Math.abs(gerador.nextInt()) % 26)); //caracter a ser trocado (exemplo: "a")
        char caracter2 = (char)('a' + (Math.abs(gerador.nextInt()) % 26)); //caracter de troca (exemplo: "q")
        //entrada = o rato roeu a roupa do rei de roma
        //saida   = o rqto roeu q roupq do rei de romq
       
        int i = 0;
        entrada[i] = MyIO.readLine();

        while (isFim(entrada[i]) == false) {
            
            MyIO.println(trocaAleatoria(entrada[i],caracter1,caracter2)); //printa a frase apos a troca aleatoria
            i++;
            caracter1 = (char)('a' + (Math.abs(gerador.nextInt()) % 26)); //caracter a ser trocado (exemplo: "a")
            caracter2 = (char)('a' + (Math.abs(gerador.nextInt()) % 26)); //caracter de troca (exemplo: "q")
            //entrada = o rato roeu a roupa do rei de roma
            //saida   = o rqto roeu q roupq do rei de romq
            entrada[i] = MyIO.readLine(); //le a proxima linha
        }
    }
}