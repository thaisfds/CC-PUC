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

class Serie {

    public static Serie[] series= new Serie[1000];
    public static int countGlobal = 0;

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

    //clone
    /*
    protected Serie clone(){
        Serie clone = new Serie(this.nome, this.formato, this.duracao, this.pais, this.idioma, this.emissora, this.transmissao, this.temporadas, this.episodios);
        return clone;
    }*/

    //imprimir
    public void imprimir(){
        System.out.println(this.nome + " " + this.formato + " "+ this.duracao + " " + this.pais + " " + this.idioma + " " + this.emissora + " " + this.transmissao + " " + this.temporadas + " " + this.episodios);
        /*String‘‘nome formato duracao paisDeOrigem idiomaOriginal 
      emissoraDeTelevisaotransmissaoOriginal numeroTemporadas numeroEpisodio’’  
      */
    }
    
    public String removeTags(String line){
        String newline = "";
        int i=0;
        while(i<line.length()){
            if(line.charAt(i) == '<'){
                i++;
                while(line.charAt(i) != '>'){i++;}
            }else if(line.charAt(i) == '&'){
                i+=6;
                if(line.charAt(i) == '<'){
                    i++;
                    while(line.charAt(i) != '>'){i++;}
                }
            }else if(line.charAt(i) == '+'){
                i++;
            }else{
                newline += line.charAt(i);
            }
            i++;
        }
        /*while(i<line.length()){
            if(line.charAt(i) == '<'){
                i++;
                while(line.charAt(i) != '>'){i++;}
            }else{
                if(line.charAt(i) == '&'){
                    i+=6;
                    if(line.charAt(i) == '<'){
                        i++;
                        while(line.charAt(i) != '>'){i++;}
                        i++;
                    }
                }
                newline += line.charAt(i);
            }
            i++;
        }*/
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
        this.temporadas = Integer.parseInt(removeTags(file.readLine()));

        while(!file.readLine().contains("N.º de episódios"));
        this.episodios = Integer.parseInt(removeTags(file.readLine()));

        file.close();
    }
}

public class ClasseSerie extends Serie  {
    //verifica se chegou no fim
    public static boolean isFim(String s){
        return (s.length() == 3 && s.charAt(0) == 'F' && s.charAt(1) == 'I' && s.charAt(2) == 'M');
    }

    //main
    public static void main (String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in, "ISO-8859-1"));
        
        /* 
        System.out.print("\nCodigo: ");
		codigo = Integer.parseInt(br.readLine()); pega int
		login = br.readLine(); pega string
		senha = br.readLine(); pega string
		sexo = br.readLine().charAt(0); pega char
        */
        String link = br.readLine();
        
        while (isFim(link) == false) {
            series[countGlobal] = new Serie();
            series[countGlobal].ler(link);
            series[countGlobal].imprimir();
            countGlobal++;
            link = br.readLine();
        }
    }

}