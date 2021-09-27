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
        
        String caminho = "/home/thais/tmp_teste/series/" + link;
        
        //String caminho = "/tmp/series/" + link;

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

class Lista {
	private Celula primeiro;
	private Celula ultimo;

	public Lista() {
		primeiro = new Celula();
		ultimo = primeiro;
	}

	public void inserirInicio(Serie x) {
		Celula tmp = new Celula(x);
        tmp.prox = primeiro.prox;
		primeiro.prox = tmp;
		if (primeiro == ultimo) {                 
			ultimo = tmp;
		}
        tmp = null;
	}

	public void inserirFim(Serie x) {
		ultimo.prox = new Celula(x);
		ultimo = ultimo.prox;
	}

	public Serie removerInicio() throws Exception {
		if (primeiro == ultimo) {
			throw new Exception("Erro ao remover (vazia)!");
		}

        Celula tmp = primeiro;
		primeiro = primeiro.prox;
		Serie resp = primeiro.elemento;
        tmp.prox = null;
        tmp = null;
		return resp;
	}

	public Serie removerFim() throws Exception {
		if (primeiro == ultimo) {
			throw new Exception("Erro ao remover (vazia)!");
		} 

		// Caminhar ate a penultima celula:
        Celula i;
        for(i = primeiro; i.prox != ultimo; i = i.prox);

        Serie resp = ultimo.elemento; 
        ultimo = i; 
        i = ultimo.prox = null;
      
		return resp;
	}

    public void inserir(Serie x, int pos) throws Exception {

        int tamanho = tamanho();

        if(pos < 0 || pos > tamanho){
			throw new Exception("Erro ao inserir posicao (" + pos + " / tamanho = " + tamanho + ") invalida!");
        } else if (pos == 0){
            inserirInicio(x);
        } else if (pos == tamanho){
            inserirFim(x);
        } else {
		   // Caminhar ate a posicao anterior a insercao
            Celula i = primeiro;
            for(int j = 0; j < pos; j++, i = i.prox);
		
            Celula tmp = new Celula(x);
            tmp.prox = i.prox;
            i.prox = tmp;
            tmp = i = null;
        }
    }


	public Serie remover(int pos) throws Exception {
        Serie resp;
      int tamanho = tamanho();

		if (primeiro == ultimo){
			throw new Exception("Erro ao remover (vazia)!");
        } else if(pos < 0 || pos >= tamanho){
			throw new Exception("Erro ao remover (posicao " + pos + " / " + tamanho + " invalida!");
        } else if (pos == 0){
            resp = removerInicio();
        } else if (pos == tamanho - 1){
            resp = removerFim();
        } else {
		   // Caminhar ate a posicao anterior a insercao
            Celula i = primeiro;
            for(int j = 0; j < pos; j++, i = i.prox);
		
            Celula tmp = i.prox;
            resp = tmp.elemento;
            i.prox = tmp.prox;
            tmp.prox = null;
            i = tmp = null;
        }

		return resp;
	}

	public void mostrar() {
		for (Celula i = primeiro.prox; i != null; i = i.prox) {
			i.elemento.imprimir();
		}
	}

	public boolean pesquisar(Serie x) {
		boolean resp = false;
		for (Celula i = primeiro.prox; i != null; i = i.prox) {
         if(i.elemento == x){
            resp = true;
            i = ultimo;
         }
		}
		return resp;
	}

   public int tamanho() {
      int tamanho = 0; 
      for(Celula i = primeiro; i != ultimo; i = i.prox, tamanho++);
      return tamanho;
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
        // array[countGlobal].imprimir();
        countGlobal++;
        // achei.imprimir();
        return series[countGlobal - 1];
    }

    public static void tratamento(Lista l1, String s) throws Exception {
        String[] split = new String[3];
        split = s.split(" ");

        if (s.charAt(0) == 'I') {
            int pos = ; //editar
            l1.inserir(pesquisar(split[1]),pos);
        } else {
            Serie tmp = l1.remover(split[1]);
            System.out.println("(R) " + tmp.getNome());
        }
    }


    //main
    public static void main (String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in, "ISO-8859-1"));
        Lista l1 = new Lista();
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
