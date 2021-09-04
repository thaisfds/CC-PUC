class TP01Q06Is {
 
    public static boolean isFim(String s){
       return (s.length() == 3 && s.charAt(0) == 'F' && s.charAt(1) == 'I' && s.charAt(2) == 'M');
    }

    //utilizei como base a tabela ascii para verificar o tipo dos carecteres
    //letra > 64 && letra < 91 -> são todas as letras maiusculas
    //letra > 47 && letra < 58 -> são todos os numeros de 0 a 9

    //verifica se é composta apenas por vogais
    public static boolean isVogal(String x){
        String frase = x.toUpperCase(); //pega um unico caracter e o coloca como letra maiuscula
        boolean simNao = false;
        for (int i=0; i<frase.length(); i++) {
            if (frase.charAt(i) == 'A' || frase.charAt(i) == 'O' || frase.charAt(i) == 'I' || frase.charAt(i) == 'E' || frase.charAt(i) == 'U') {
                simNao = true; // se for uma vogal retorna true
            } else {
                simNao = false; // se não for uma vogal retorna false
                i = frase.length(); //fecha a condição fazendo i valer o tamanho da frase
            }
        }
        return simNao;
    }

    //verifica se é composta apenas por consoantes
    public static boolean isConsoante(String x){
        String frase = x.toUpperCase(); //pega um unico caracter e o coloca como letra maiuscula
        boolean simNao = false;
        for (int i=0; i<frase.length(); i++) {
            if ((int) frase.charAt(i) > 64 && (int) frase.charAt(i) < 91) {
                if (frase.charAt(i) == 'A' || frase.charAt(i) == 'O' || frase.charAt(i) == 'I' || frase.charAt(i) == 'E' || frase.charAt(i) == 'U') {
                    simNao = false; // se for uma consoante retorna false
                    i = frase.length(); //fecha a condição fazendo i valer o tamanho da frase
                } else {
                    simNao = true; // se não for uma consoante retorna true
                }
            }
        }
        return simNao;
    }

    //verifica se é um numero inteiro
    public static boolean isInt(String x){
        String frase = x.toUpperCase(); //pega um unico caracter e o coloca como letra maiuscula
        boolean simNao = false;
        for (int i=0; i<frase.length(); i++) {
            if ((int) frase.charAt(i) > 47 && (int) frase.charAt(i) < 58) {
                simNao = true; // se for um numero retorna true
            } else {
                simNao = false; // se não for um numero retorna false
                i = frase.length(); //fecha a condição fazendo i valer o tamanho da frase
            }
        }
        return simNao;
    }

    //verifica se é um numero real
    public static boolean isFloat(String x){
        String frase = x.toUpperCase(); //pega um unico caracter e o coloca como letra maiuscula
        boolean simNao = false;
        int count = 0;
        for (int i=0; i<frase.length(); i++) {
            if ((int) frase.charAt(i) > 47 && (int) frase.charAt(i) < 58 || frase.charAt(i) == 44 || frase.charAt(i) == 46) {
                simNao = true; // se for um numero ou (,) ou (.) retorna true
                if(frase.charAt(i) == 44 || frase.charAt(i) == 46){count++;}
                if(count>1){
                    simNao = false; // se possuir mias de uma (,) ou (.) retorna false
                    i = frase.length(); //fecha a condição fazendo i valer o tamanho da frase
                }
            } else {
                simNao = false; // se possuir mias de uma (,) ou (.) retorna false
                i = frase.length(); //fecha a condição fazendo i valer o tamanho da frase
            }
        }
        return simNao;
    }
 
    public static void main (String[] args){
       String[] entrada = new String[1000];
       int numEntrada = 0;
 
       //Leitura da entrada padrao
       do {
          entrada[numEntrada] = MyIO.readLine();
       } while (isFim(entrada[numEntrada++]) == false);
       numEntrada--;   //Desconsiderar ultima linha contendo a palavra FIM
 
       //Para cada linha de entrada, gerando uma de saida contendo o numero de letras maiusculas da entrada
       for(int i = 0; i < numEntrada; i++){
           if(isVogal(entrada[i])==true){MyIO.print("SIM ");}
           else{MyIO.print("NAO ");}
           if(isConsoante(entrada[i])==true){MyIO.print("SIM ");}
           else{MyIO.print("NAO ");}
           if(isInt(entrada[i])==true){MyIO.print("SIM ");}
           else{MyIO.print("NAO ");}
           if(isFloat(entrada[i])==true){MyIO.println("SIM");}
           else{MyIO.println("NAO");}
       }
    }
}