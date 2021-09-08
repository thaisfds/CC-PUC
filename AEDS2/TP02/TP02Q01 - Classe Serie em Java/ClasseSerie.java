import java.io.*;
import java.util.*;
import java.net.*;

/*
Classe  S ́eries  em  Java:   Crie  uma  classeS ́eriesseguindo  todas  as  regras  
apresentadasno  slide  unidade01gconceitosBasicosintroducaoOO.pdf.   Sua  classe  
ter ́a  os  atributos  priva-dos  Nome  (String),  Formato  (String),  
Dura ̧c ̃ao  (String),  Pa ́ıs  de  origem  (String),  Idioma  ori-ginal  (String),  
Emissora  de  televis ̃ao  original(String),  Transmiss ̃ao  original  (String),  
N.ºdetemporadas  (Inteiro),  N.ºde  epis ́odios  (Inteiro).    Ela  ter ́a  tamb ́em  
pelo  menos  dois  cons-trutores,   e  os  m ́etodos  gets,   sets,   clone  e  
imprimir  e  ler.O  m ́etodo  imprimir  mostraa   String‘‘nome formato duracao 
paisDeOrigem idiomaOriginal emissoraDeTelevisaotransmissaoOriginal numeroTemporadas 
numeroEpisodio’’, contendo todos os atributos daclasse.  O m ́etodo ler deve efetuar 
a leitura dos atributos de um registro.  
Veja que os dados est ̃aodivididos em v ́arios arquivos.A entrada padr ̃ao  ́e 
composta por v ́arias linhas e cada uma cont ́em o nome de um arquivo.html.
A   ́ultima linha da entrada cont ́emF IM.  A sa ́ıda padr ̃ao tamb ́em cont ́em v ́arias 
linhas, umapara cada registro contido em uma linha da entrada padr ̃ao.

Quando reiniciamos o Linux, ele normalmente apaga os arquivos existentes na pasta /tmp/.
*/

class ClasseSerie {
    
    //verifica se chegou no fim
    public static boolean isFim(String s){
        return (s.length() == 3 && s.charAt(0) == 'F' && s.charAt(1) == 'I' && s.charAt(2) == 'M');
    }

    public static void main (String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in, "ISO-8859-1"));
        /* 
        System.out.print("\nCodigo: ");
		codigo = Integer.parseInt(br.readLine()); pega int
		login = br.readLine(); pega string
		senha = br.readLine(); pega string
		sexo = br.readLine().charAt(0); pega char
        */
        int link = br.readLine();
        while (isFim(link) == false) {

            link = br.readLine();
        }
    }
}

class Serie {
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

    public String getNome(){
        return nome;
    }
    public String getFormato(){
        return formato;
    }
    public String getDuracao(){
        return duracao;
    }
    public String getPais(){
        return pais;
    }
    public String getIdioma(){
        return idioma;
    }
    public String getEmissora(){
        return emissora;
    }
    public String getTransmissao(){
        return transmissao;
    }
    public int getTemporadas(){
        return temporadas;
    }
    public int getEpisodios(){
        return episodios;
    }

    public Serie clone(){
        Serie clone = new Serie(this.nome, this.formato, this.duracao, this.pais, this.idioma, this.emissora, this.transmissao, this.temporadas, this.episodios);
        return clone;
    }

    public void imprimir(String a){
        System.out.print(nome + " " + formato + " "+ duracao + " " + pais + " " + idioma + " " + emissora + " " + transmissao + " " + temporadas + " " + episodios);
        /*String‘‘nome formato duracao paisDeOrigem idiomaOriginal 
      emissoraDeTelevisaotransmissaoOriginal numeroTemporadas numeroEpisodio’’  
      */
    }
    public void ler(String a){
       //O metodo ler deve efetuar a leitura dos atributos de um registro.  
    }

}