import java.io.*;
import java.util.*;

class Serie {

    public static Serie[] series= new Serie[1000]; //local onde serão armazenadas as séries
    public static int countGlobal = 0; //contador Global

    private String nome;
    private String formato;
    private String duracao;
    private String pais;
    private String idioma;
    private String emissora;
    private String transmissao;
    private int temporadas;
    private int episodios;

    public Serie(){
        this.nome = "";
        this.formato = "";
        this.duracao = "";
        this.pais = "";
        this.idioma = "";
        this.emissora = "";
        this.transmissao = "";
        this.temporadas = 0;
        this.episodios = 0;
    }
    public Serie(String nome, String formato, String duracao, String pais, String idioma, String emissora, String transmissao, int temporada, int episodios){
        this.nome = nome;
        this.formato = formato;
        this.duracao = duracao;
        this.pais = pais;
        this.idioma = idioma;
        this.emissora = emissora;
        this.transmissao = transmissao;
        this.temporadas = temporada;
        this.episodios = episodios;
    }

    //sets
    public void setNome(String nome){
        this.nome = nome;
    }
    public void setFormato(String formato){
        this.formato = formato;
    }
    public void setDuracao(String duracao){
        this.duracao = duracao;
    }
    public void setPais(String pais){
        this.pais = pais;
    }
    public void setIdioma(String idioma){
        this.idioma = idioma;
    }
    public void setEmissora(String emissora){
        this.emissora = emissora;
    }
    public void setTransmissao(String transmissao){
        this.transmissao = transmissao;
    }
    public void setTemporadas(int temporadas){
        this.temporadas = temporadas;
    }
    public void setEpisodios(int episodios){
        this.episodios = episodios;
    }

    //gets
    public String getNome(){
        return this.nome;
    }
    public String getFormato(){
        return this.formato;
    }
    public String getDuracao(){
        return this.duracao;
    }
    public String getPais(){
        return this.pais;
    }
    public String getIdioma(){
        return this.idioma;
    }
    public String getEmissora(){
        return this.emissora;
    }
    public String getTransmissao(){
        return this.transmissao;
    }
    public int getTemporadas(){
        return this.temporadas;
    }
    public int getEpisodios(){
        return this.episodios;
    }
    
    protected Serie clone(){
        Serie clone = new Serie(this.nome, this.formato, this.duracao, this.pais, this.idioma, this.emissora, this.transmissao, this.temporadas, this.episodios);
        return clone;
    }

    public void imprimir(){
        System.out.println(this.nome + " " + this.formato + " "+ this.duracao + " " + this.pais + " " + this.idioma + " " + this.emissora + " " + this.transmissao + " " + this.temporadas + " " + this.episodios);
    }
    
    public String removeTags(String line){
        String newline = "";
        int i=0;
        while(i<line.length()){
            if(line.charAt(i) == '<'){
                i++;
                while(line.charAt(i) != '>'){i++;} //remove o que estiver entre <...>
                
            }else{
                if(line.charAt(i) == '&'){ //corrige o erro de encontrar &#160;
                    i+=6;
                    if(line.charAt(i) == '<'){
                        i++;
                        while(line.charAt(i) != '>'){i++;}
                        i++;
                    }
                }
                if(line.charAt(i) == '<' && line.charAt(i+1) == 'a'){ //corrige o erro de pegar a tag <a...>
                    i++;
                    while(line.charAt(i) != '>'){i++;} 
                } else{newline += line.charAt(i);}
                
            }
            i++;
        }
        return newline;
    }

    public String naoNumero(String line){
        String newline = "";
        int i=0;
        while(i<line.length()){
            if ((int) line.charAt(i) > 47 && (int) line.charAt(i) < 58) {
                newline += line.charAt(i);
            }else{
                i++;
            }
            i++;
        }
        return newline;
    }

    public void ler(String link) throws IOException {
        //O metodo ler deve efetuar a leitura dos atributos de um registro.  
        
        //String caminho = "/home/thais/tmp_teste/series/" + link;
        
        String caminho = "/tmp/series/" + link;

        BufferedReader file = new BufferedReader(new InputStreamReader(new FileInputStream(caminho), "UTF8"));
        
        while(!file.readLine().contains("infobox_v2"));
        file.readLine();
        this.nome = removeTags(file.readLine());

        while(!file.readLine().contains("Formato"));
        this.formato = removeTags(file.readLine());

        while(!file.readLine().contains("Duração"));
        this.duracao = removeTags(file.readLine());

        while(!file.readLine().contains("País de origem"));
        this.pais = removeTags(file.readLine());

        while(!file.readLine().contains("Idioma original"));
        this.idioma = removeTags(file.readLine());

        while(!file.readLine().contains("Emissora de televisão original"));
        this.emissora = removeTags(file.readLine());

        while(!file.readLine().contains("Transmissão original"));
        this.transmissao = removeTags(file.readLine());

        while(!file.readLine().contains("N.º de temporadas"));
        this.temporadas = Integer.parseInt(naoNumero(removeTags(file.readLine())));

        while(!file.readLine().contains("N.º de episódios"));
        this.episodios = Integer.parseInt(naoNumero(removeTags(file.readLine())));

        file.close();
    }
}

class ListaSeq extends Serie {
    
    private Serie[] array;
    private int n;

    public ListaSeq(){
        this(100);
    }

    public ListaSeq (int tamanho){
        array = new Serie[tamanho];
        n = 0;
    }

    //Editar
    public void inserirInicio(Serie x) throws Exception {

        //validar insercao
        if(n >= array.length){
           throw new Exception("Erro ao inserir!");
        } 
  
        //levar elementos para o fim do array
        for(int i = n; i > 0; i--){
           array[i] = array[i-1];
        }
  
        array[0] = x;
        n++;
    }

    //Editar
    public void inserirFim(Serie x) throws Exception {

        //validar insercao
        if(n >= array.length){
           throw new Exception("Erro ao inserir!");
        }
  
        array[n] = x;
        n++;
    }

    //Editar
    public void inserir(Serie x, int pos) throws Exception {

        //validar insercao
        if(n >= array.length || pos < 0 || pos > n){
           throw new Exception("Erro ao inserir!");
        }
  
        //levar elementos para o fim do array
        for(int i = n; i > pos; i--){
           array[i] = array[i-1];
        }
  
        array[pos] = x;
        n++;
    }

    //Editar
    public Serie removerInicio() throws Exception {

        //validar remocao
        if (n == 0) {
           throw new Exception("Erro ao remover!");
        }
  
        Serie resp = array[0];
        n--;
  
        for(int i = 0; i < n; i++){
           array[i] = array[i+1];
        }
  
        return resp;
    }

    //Editar
    public Serie removerFim() throws Exception {

        //validar remocao
        if (n == 0) {
           throw new Exception("Erro ao remover!");
        }
  
        return array[--n];
    }

    //Editar
    public Serie remover(int pos) throws Exception {

        //validar remocao
        if (n == 0 || pos < 0 || pos >= n) {
           throw new Exception("Erro ao remover!");
        }
  
        Serie resp = array[pos];
        n--;
  
        for(int i = pos; i < n; i++){
           array[i] = array[i+1];
        }
  
        return resp;
    }

    //Editar
    public void mostrar (){
        System.out.print("[ ");
        for(int i = 0; i < n; i++){
            array[i].imprimir();
        }
    }

    //Editar
    public boolean pesquisar(Serie x) {
        boolean retorno = false;
        for (int i = 0; i < n && retorno == false; i++) {
           retorno = (array[i] == x);
        }
        return retorno;
    }

}

public class ListaSequencial extends Serie{
    //verifica se chegou no fim
    public static boolean isFim(String s){
        return (s.length() == 3 && s.charAt(0) == 'F' && s.charAt(1) == 'I' && s.charAt(2) == 'M');
    }

    public static Serie pesquisar(String key) throws Exception {
        series[countGlobal] = new Serie();
        series[countGlobal].ler(key);
        // array[countGlobal].imprimir();
        countGlobal++;
        // achei.imprimir();
        return series[countGlobal - 1];
    }

    public static void tratamento(ListaSeq listaSeq, String s) throws Exception {
        String[] split = new String[3];
        split = s.split(" ");
        if (split[0].charAt(1) == '*') {
            // System.out.println("1");
            if (split[0].charAt(0) == 'I') {
                int pos = Integer.parseInt(split[1]);
                listaSeq.inserir(pesquisar(split[2]), pos);
            } else {
                int key = Integer.parseInt(split[1]);
                Serie temp = listaSeq.remover(key);
                System.out.println("(R) " + temp.getNome());
            }

        } else {
            if (split[0].charAt(0) == 'I') {
                switch (split[0]) {
                    case "II":
                        listaSeq.inserirInicio(pesquisar(split[1]));
                        break;
                    case "IF":
                        listaSeq.inserirFim(pesquisar(split[1]));
                        break;
                    default:
                        break;
                }
            } else {
                switch (split[0]) {
                    case "RI":
                        Serie temp = listaSeq.removerInicio();
                        System.out.println("(R) " + temp.getNome());
                        break;
                    case "RF":
                        Serie temp2 = listaSeq.removerFim();
                        System.out.println("(R) " + temp2.getNome());
                    default:
                        break;
                }
            }
        }
    }


    //main
    public static void main (String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in, "ISO-8859-1"));
        ListaSeq l1 = new ListaSeq(1000);
        String link = br.readLine(); //le a primeira linha
        
        while (isFim(link) == false) {
            series[countGlobal] = new Serie(); //cria uma nova Serie
            series[countGlobal].ler(link); //manda ler o html
            //series[countGlobal].imprimir(); //imprime a resposta
            countGlobal++; //passa pro proximo espaço vazio de series
            link = br.readLine();
        }

        String quantidade = br.readLine();
        int numero = Integer.parseInt(quantidade);
        // System.out.println(numero);
        // System.out.println(quantidade);
        for (int i = 0; i < countGlobal; i++) {
            l1.inserirFim(series[i]);
        }
        String s[] = new String[numero];
        for (int i = 0; i < numero; i++) {
            s[i] = br.readLine();
            //System.out.println(s[i]);
        }
        for (int i = 0; i < numero; i++) {
            //System.out.println(s[i]);
            tratamento(l1, s[i]);
        }
        l1.mostrar();


    }

}
