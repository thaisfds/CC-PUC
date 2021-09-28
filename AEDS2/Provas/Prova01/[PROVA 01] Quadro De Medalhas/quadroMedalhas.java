import java.io.*;
import java.util.*;

public class quadroMedalhas {
    
    public static void comparacao(String s[], int n) {
        String[] split1 = new String[3];
        String[] split2 = new String[3];
        String aux = "";
        int inutil = 0;
            
        for(int i = 0; i < n; i++){
            for(int j=i+1; j < n;j++){
                split1 = s[i].split(" ");
                split2 = s[j].split(" ");
                //Compara medalhas de ouro
                if (Integer.parseInt(split1[1]) < Integer.parseInt(split2[1])){
                    aux = s[i];
                    s[i] = s[j];
                    s[j] = aux;
                } 
                else if (Integer.parseInt(split1[1]) > Integer.parseInt(split2[1])){inutil++;}
                else{//Compara medalhas de prata
                    if (Integer.parseInt(split1[2]) < Integer.parseInt(split2[2])){
                        aux = s[i];
                        s[i] = s[j];
                        s[j] = aux;
                    }
                    else if (Integer.parseInt(split1[2]) > Integer.parseInt(split2[2])){inutil++;}
                    else{//Compara medalhas de bronze
                        if (Integer.parseInt(split1[3]) < Integer.parseInt(split2[3])){
                            System.out.println(split1[3] + " " + split2[3]);
                            aux = s[i];
                            s[i] = s[j];
                            s[j] = aux;
                        }
                        else if (Integer.parseInt(split1[3]) > Integer.parseInt(split2[3])){inutil++;} 
                        else{//Compara nomes
                            int result = split1[0].compareTo(split2[0]);
                            if(result > 0){
                                aux = s[i];
                                s[i] = s[j];
                                s[j] = aux;
                            }
                            
                        }
                    }
                } 
            }
        }
        for (int i = 0; i < n; i++) {
            System.out.println(s[i]);
        }
}
    public static void main (String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in, "ISO-8859-1"));
        String quantidade = br.readLine();
        int numero = Integer.parseInt(quantidade);
        String s[] = new String[numero];
        for (int i = 0; i < numero; i++) {
            s[i] = br.readLine();
            //System.out.println(s[i]);
        }
        //comparacao(s,2);
        comparacao(s,numero);

    }
}
