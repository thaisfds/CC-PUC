class TP01Q11PalindromoRecursivo {

    //verifica se chegou no fim
   public static boolean isFim(String s){
       return (s.length() == 3 && s.charAt(0) == 'F' && s.charAt(1) == 'I' && s.charAt(2) == 'M');
   }

   //verifica se é um palindromo
   public static boolean palindromoRecursivo(String s, int count, int comp) {
       boolean simNao = true; //variavel bool de resposta
       //se o comparador for menor do que o tamanho/2...
       if (comp < (s.length() / 2)) {
           //se a letra inicial a ser comparada for = a letra final (tamanho-comp-1)
            if (s.charAt(comp) == s.charAt(s.length() - comp - 1)){
                return palindromoRecursivo(s, count+1, comp+1); //avança a letra inicial e recua a letra final
            } else {
                return palindromoRecursivo(s, count, comp+1); //conserva a letra inicial e avança a final
            }
        } else {
            if (count == s.length() / 2) {simNao = true;} //se a posição atual foi = ao tamanho é palindromo
            else {simNao = false;} // se a posição atual não for = ao tamanho, não é um palindromo
        }
        //count = contador de posição
        //comp =  variavel que altera as letras a serem comparadas

       return simNao; // retorna true ou false
   }
    /*
    Exemplo de funcionamento:
    palindromoRecursivo(arara,0,0)
    string=arara count=0 comp=0
        compara (s.charAt(0) == s.charAt(5 - 0 - 1) => (a == a)
        compara (s.charAt(1) == s.charAt(5 - 1 - 1) => (r == r)
        compara (count == s.length() / 2) => (2 == 5/2) => só existe uma letra para comparar, a letra do meio
        arara é um palindromo
        */
         
   public static void main (String[] args){
       String[] entrada = new String[1000];
    
       int i = 0;
       entrada[i] = MyIO.readLine();

       while (isFim(entrada[i]) == false) {
           if (palindromoRecursivo(entrada[i],0,0) == true) {
               MyIO.println("SIM");
           } else {
               MyIO.println("NAO");
           }
           i++;
           entrada[i] = MyIO.readLine();
       }
   }
}