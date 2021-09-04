class palindromo {

    //verifica se chegou no fim
   public static boolean isFim(String s){
       return (s.length() == 3 && s.charAt(0) == 'F' && s.charAt(1) == 'I' && s.charAt(2) == 'M');
   }

   //verifica se é um palindromo
   public static boolean palindromoIterativo(String s) {
       boolean simNao = false; //variavel bool de resposta
       //leitura dos valores enquanto i for menor que o tamanho
       for (int i = 0; i < (s.length()); i++) {
           if (s.charAt(i) == s.charAt(s.length() - i - 1)) {
               simNao = true; //se o argumento for igual ao oposto dele, retorna true
           } 
           else {
               simNao = false; //se não forem iguais retorna false
               i = s.length(); //encerra o for
           }
       }

       return simNao; // retorna true ou false
   }
   /*exemplo: arara (tamanho 5) formula = string[tamanho-i-1]
       string[0] = a //// string[5-0-1] = a
       string[1] = r //// string[5-1-1] = r
       string[2] = a //// string[5-2-1] = a

   */

         
   public static void main (String[] args){
       String[] entrada = new String[1000];
    
       int i = 0;
       entrada[i] = MyIO.readLine();

       while (isFim(entrada[i]) == false) {
           if (palindromoIterativo(entrada[i]) == true) {
               MyIO.println("SIM");
           } else {
               MyIO.println("NAO");
           }
           i++;
           entrada[i] = MyIO.readLine();
       }
   }
}