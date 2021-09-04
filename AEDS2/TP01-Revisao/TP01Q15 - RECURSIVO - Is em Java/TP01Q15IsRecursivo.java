class TP01Q15IsRecursivo {
 
    public static boolean isFim(String s){
       return (s.length() == 3 && s.charAt(0) == 'F' && s.charAt(1) == 'I' && s.charAt(2) == 'M');
    }

    //utilizei como base a tabela ascii para verificar o tipo dos carecteres
    //letra > 64 && letra < 91 -> são todas as letras maiusculas
    //letra > 47 && letra < 58 -> são todos os numeros de 0 a 9

    //verifica se é composta apenas por vogais
    public static boolean isVogal(String x, int i, int count){
        String frase = x.toUpperCase(); //pega um unico caracter e o coloca como letra maiuscula
        boolean simNao = false;
        if (i < x.length()) {
            if (frase.charAt(i) == 'A' || frase.charAt(i) == 'O' || frase.charAt(i) == 'I' || frase.charAt(i) == 'E' || frase.charAt(i) == 'U') {
                return isVogal(x, i+1, count+1);
            } else {
                return isVogal(x, i + 1, count);
            }
        } else {
            if (count == frase.length()) {
                simNao = true;// se for uma vogal retorna true
            } else {
                simNao = false;// se não for uma vogal retorna false
            }
            return simNao;
        }
    }

    //verifica se é composta apenas por consoantes
    public static boolean isConsoante(String x, int i, int count){
        String frase = x.toUpperCase(); //pega um unico caracter e o coloca como letra maiuscula
        boolean simNao = false;
        if (i < x.length()) {
            if ((int) frase.charAt(i) > 64 && (int) frase.charAt(i) < 91) {
                if (frase.charAt(i) == 'A' || frase.charAt(i) == 'O' || frase.charAt(i) == 'I' || frase.charAt(i) == 'E' || frase.charAt(i) == 'U') {
                    return isConsoante(x, i + 1, count);
                } else {
                    return isConsoante(x, i + 1, count + 1);
                }
            }
        } else {
            if (count == frase.length()) {
                simNao = true;// se for uma vogal retorna true
            } else {
                simNao = false;// se não for uma vogal retorna false
            }
            return simNao;
        }
        return simNao;
    }

    //verifica se é um numero inteiro
    public static boolean isInt(String x, int i, int count){
        String frase = x.toUpperCase(); //pega um unico caracter e o coloca como letra maiuscula
        boolean simNao = false;
        if (i < x.length()) {
            if ((int) frase.charAt(i) > 47 && (int) frase.charAt(i) < 58) {
                return isInt(x, i + 1, count + 1);
            } else {
                return isInt(x, i + 1, count);
            }
        }else {
            if (count == frase.length()) {
                simNao = true;// se for uma vogal retorna true
            } else {
                simNao = false;// se não for uma vogal retorna false
            }
            return simNao;
        }
    }

    //verifica se é um numero real
    public static boolean isFloat(String x, int i, int count, int count2 ){
        String frase = x.toUpperCase(); //pega um unico caracter e o coloca como letra maiuscula
        boolean simNao = false;
        if (i < x.length()) {
            if ((int) frase.charAt(i) > 47 && (int) frase.charAt(i) < 58 || frase.charAt(i) == 44 || frase.charAt(i) == 46) {
                if(frase.charAt(i) == 44 || frase.charAt(i) == 46){count2++;}
                if(count2>1){
                    return simNao;
                }else{
                    return isFloat(x, i + 1, count+1, count2);
                }
            } else {
                return isFloat(x, i + 1, count, count2);
            }
        }else {
            if (count == frase.length()) {
                simNao = true;// se for uma vogal retorna true
            } else {
                simNao = false;// se não for uma vogal retorna false
            }
            return simNao;
        }
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
           if(isVogal(entrada[i], 0, 0)==true){MyIO.print("SIM ");}
           else{MyIO.print("NAO ");}
           if(isConsoante(entrada[i], 0, 0)==true){MyIO.print("SIM ");}
           else{MyIO.print("NAO ");}
           if(isInt(entrada[i], 0, 0)==true){MyIO.print("SIM ");}
           else{MyIO.print("NAO ");}
           if(isFloat(entrada[i], 0, 0, 0)==true){MyIO.println("SIM");}
           else{MyIO.println("NAO");}
       }
    }
}