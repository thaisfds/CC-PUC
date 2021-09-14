import java.io.*;
import java.util.*;

class Lista{
    public static Lista l1 = new Lista();
    private String[] array;
    private int n;

    Lista(){
        array = new String[40];
        n = 0;
        for(int i=0; i<40; i++){
            array[i] = "";
        }
    }
    Lista(int tamanho){
        array = new String[tamanho];
        n = 0;
        for(int i=0; i<tamanho; i++){
            array[i] = "";
        }
    }
    public void inserirFinal(String x){
        if(n>= array.length){System.out.println("ERRO");}
        else{
            array[n] = x;
        n++;
        }
        
    }
    public void imprimir(){
        System.out.println("======INICIO DA LISTA======");
        for(int i=0; i<n; i++){
            System.out.println(array[i]);
        }
        System.out.println("======FINAL DA LISTA======");
    }
    int getTamanho(){
        return array.length;
    }
    String getArray(int i){
        return array[i];
    }


}

public class PesquisaSequencial extends Lista {
    public static int comparacoes = 0;
    public static String replace (String s){
        String resp = "";
        int i=0;
        while(i<s.length()){
            if(s.charAt(i) == ' '){
                resp += '_';
            }else{resp += s.charAt(i);}
            i++;
        }
        return resp;
    }

    public static String pesquisar(String s){
        String resp = "NÃO";
        int tam = l1.getTamanho();
        String VL;
        String s2 = replace(s);
                
        for(int i=0;i<tam;i++){
            VL = l1.getArray(i);
            comparacoes +=2;
            if(VL.contains(s) || VL.contains(s2)){
                resp = "SIM";
                return resp;
            }
        }
        return resp;
    }
    /*
    public static void PesquisaSeq(String[] pesquisa, int count) {
        for (int i = 0; i < count; i++) {
            Boolean achou = false;
            for (int j = 0; j < countGlobal; j++) {
                String nome = array[j].getNome();
                comparacoes++;
                if (pesquisa[i].equals(nome) == true) {
                    achou = true;
                    j = countGlobal;
                } else {
                    comparacoes++;
                    if (nome.charAt(nome.length() - 1) == '*') {
                        comparacoes++;
                        if (pesquisa[i].equals(asterisco(nome)) == true) {
                            achou = true;
                            j = countGlobal;
                        }
                    }
                }
            }
            comparacoes++;
            if (achou == true) {
                System.out.println("SIM");
            } else if (achou == false) {
                System.out.println("NAO");
            }
            comparacoes++;
        }

    }
    */

    public static void logCreator(long tempo1, long tempo2) throws Exception {
        long tempoExecucao = tempo2 - tempo1;
        File log = new File("741648_sequencial.txt");
        FileWriter logWriter = new FileWriter("741648_sequencial.txt");
        logWriter.write("741648\t" + tempoExecucao + "\t" + comparacoes);
    }

    //verifica se chegou no fim
    public static boolean isFim(String s){
        return (s.length() == 3 && s.charAt(0) == 'F' && s.charAt(1) == 'I' && s.charAt(2) == 'M');
    }

    //main
    public static void main (String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in, "ISO-8859-1"));
        String html = br.readLine(); //armazena os .html
        String entrada; //armazena as pesquisas
        
        while (isFim(html) == false) {
            l1.inserirFinal(html);
            html = br.readLine();
        }
        //l1.imprimir();
        entrada = br.readLine();

        while (isFim(entrada) == false) {
            System.out.println(pesquisar(entrada));
            entrada = br.readLine();
        }
    }

}