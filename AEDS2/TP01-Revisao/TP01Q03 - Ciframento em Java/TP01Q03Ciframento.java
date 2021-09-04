class TP01Q03Ciframento {

    //verifica se chegou no fim
    public static boolean isFim(String s){
       return (s.length() == 3 && s.charAt(0) == 'F' && s.charAt(1) == 'I' && s.charAt(2) == 'M');
    }

    //realiza o ciframento
    public static String cifraCesar(String frase) {
        String novaFrase = ""; //variável a ser printada
            for (int i = 0; i < frase.length(); i++) {
                novaFrase += (char)(frase.charAt(i)+3); //troca o caracter
            }
        return novaFrase;
    }

         
    public static void main (String[] args){
        String[] entrada = new String[1000];
    
        int i = 0;
        entrada[i] = MyIO.readLine();

        while (isFim(entrada[i]) == false) {
            MyIO.println(cifraCesar(entrada[i])); //printa a frase cifrada
            i++;
            entrada[i] = MyIO.readLine();
        }
    }    
}