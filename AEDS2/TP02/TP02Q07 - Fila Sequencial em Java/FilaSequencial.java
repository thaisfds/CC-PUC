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
        //System.out.println(line);
        int i=0;
        while(i<line.length()){
            if ((int) line.charAt(i) > 47 && (int) line.charAt(i) < 58) {
                newline += line.charAt(i);
            }else if(line.charAt(i) == ' '){
                i = line.length();
            }else{
                i++;
            }
            i++;
        }
        return newline;
    }

    public String filtroTemporadas(String line){
        String newline = "";
        int i=0;
        while(i<line.length()){
            newline += line.charAt(i);
            i++;
            if(i==2){i = line.length();}
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
        this.temporadas = Integer.parseInt(filtroTemporadas(naoNumero(removeTags(file.readLine()))));

        while(!file.readLine().contains("N.º de episódios"));
        this.episodios = Integer.parseInt(naoNumero(removeTags(file.readLine())));

        file.close();
    }
}

class Celula {
	public Serie elemento; // Elemento inserido na celula.
	public Celula prox; // Aponta a celula prox.

	public Celula() {
		
	}

	public Celula(Serie elemento) {
      this.elemento = elemento;
      this.prox = null;
	}
}

class Fila {
    private Serie[] array;
    private int primeiro; // Remove do indice "primeiro".
    private int ultimo; // Insere no indice "ultimo".
    private int tam;

    public Fila () {
        this(5);
    }

    public Fila (int tamanho){
        array = new Serie[tamanho+1];
        primeiro = ultimo = 0;
        tam = 0;
    }

    public void inserir(Serie x) throws Exception {
        //x.imprimir();
       //validar insercao
        if (((ultimo + 1) % array.length) == primeiro) {
            //throw new Exception("Erro ao inserir!");
            remover();
        }
        tam++;
        array[ultimo] = x;
        ultimo = (ultimo + 1) % array.length;
    }

    public Serie remover() throws Exception {
 
       //validar remocao
        if (primeiro == ultimo) {
            throw new Exception("Erro ao remover!");
        }
        tam--;
        Serie resp = array[primeiro];
        primeiro = (primeiro + 1) % array.length;

       return resp;
    }

    public void mostrarMedia(){
        System.out.println(calcMedia());
    }
 
    public void mostrar(){
        for(int i = primeiro; i != ultimo; i = ((i + 1) % array.length)) {
            System.out.print(array[i] + " ");
        }
    }
 
    public void mostrarRec(){
       mostrarRec(primeiro);
    }
 
    public void mostrarRec(int i){
        if(i != ultimo){
            System.out.print(array[i] + " ");
            mostrarRec((i + 1) % array.length);
        }
    }
 
    public boolean isVazia() {
       return (primeiro == ultimo); 
    }

    private int calcMedia(){
        double soma = 0;
        double media = 0;
        for(int i = primeiro; i != ultimo; i = (i+1)%array.length){
            soma+=array[i].getTemporadas();
        }
        media = Math.round(soma/tam);
        return (int) media;
    }
    
    public void getsTemp(Serie x){
        x.imprimir();
        System.out.println(x.getNome()+" "+x.getTemporadas());
    }

}

public class FilaSequencial extends Serie{
    //verifica se chegou no fim
    public static boolean isFim(String s){
        return (s.length() == 3 && s.charAt(0) == 'F' && s.charAt(1) == 'I' && s.charAt(2) == 'M');
    }

    public static Serie pesquisar(String key) throws Exception {
        series[countGlobal] = new Serie();
        series[countGlobal].ler(key);
        //series[countGlobal].imprimir();
        countGlobal++;
        // achei.imprimir();
        return series[countGlobal - 1];
    }

    public static void tratamento(Fila f1, String s) throws Exception {
        String[] split = new String[3];
        split = s.split(" ");

        if (s.charAt(0) == 'I') {
            f1.inserir(pesquisar(split[1]));
            f1.mostrarMedia();
            //f1.getsTemp(pesquisar(split[1]));
        } else {
            //f1.remover();
            Serie tmp = f1.remover();
            //System.out.println("(R) " + tmp.getNome());
        }
    }


    //main
    public static void main (String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in, "ISO-8859-1"));
        Fila f1 = new Fila(5);
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
            f1.inserir(series[i]);
            f1.mostrarMedia();
            //f1.getsTemp(series[i]);
        }
        
        String s[] = new String[numero];
        for (int i = 0; i < numero; i++) {
            s[i] = br.readLine();
            //System.out.println(s[i]);
        }
        for (int i = 0; i < numero; i++) {
            tratamento(f1, s[i]);
            //f1.getsTemp(s[i]);
        }

    }
}
