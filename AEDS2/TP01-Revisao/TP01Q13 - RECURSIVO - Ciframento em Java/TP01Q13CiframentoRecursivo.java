class TP01Q13CiframentoRecursivo{

    //verifica se chegou no fim
    public static boolean isFim(String s){
       return (s.length() == 3 && s.charAt(0) == 'F' && s.charAt(1) == 'I' && s.charAt(2) == 'M');
    }

    //realiza o ciframento
    public static String cifraCesar(String s,String novaFrase, int i) {
        if(i<s.length()){
            novaFrase += (char)(s.charAt(i)+3); //troca o caracter
            return(cifraCesar(s,novaFrase,i+1)); //envia a frase do pub.in + frase sendo construida + pula pro proximo caracter
        }
        else{return novaFrase;}
    }
    //i = caracter a ser modificado
    //s = frase lida do pub.in
    //novaFrase = frase lida do pub.in modificada

         
    public static void main (String[] args){
        String[] entrada = new String[1000];
        
        String novaFrase = ""; //variável a ser printada
        int i = 0;
        entrada[i] = MyIO.readLine();

        while (isFim(entrada[i]) == false) {
            MyIO.println(cifraCesar(entrada[i],novaFrase,0)); //printa a frase cifrada
            i++;
            entrada[i] = MyIO.readLine();
            novaFrase = "";
        }
    }    
}