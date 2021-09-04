import java.io.*;
import java.util.*;
import java.net.*;

class TP01Q08PaginaHTML {
    static int MAX_TAM = 25; //no maximo precisaremos pegar 25 caracteres

    //verifica se chegou no fim
    public static boolean isFim(String s){
       return (s.length() == 3 && s.charAt(0) == 'F' && s.charAt(1) == 'I' && s.charAt(2) == 'M');
    }

    //pega os dados do site ateves do java.net (fiz na monitoria)
    public static String getHtml(String link) {
        URL url; //variavel url
        InputStream is = null; 
        BufferedReader br;
        String resposta = "", linha;

        try {
            url = new URL(link); //criar um url com o link lido
            is = url.openStream(); // throws an IOException
            br = new BufferedReader(new InputStreamReader(is)); //le o site

            //enquanto a linha for diferente de null
            while ((linha = br.readLine()) != null) {
                resposta += linha + "\n"; //pega o que foi lido (readLine) e  adiciona na resposta com um espaço
            }
        } catch (MalformedURLException mue) {
            mue.printStackTrace(); //testagem de erro
        } catch (IOException ioe) {
            ioe.printStackTrace(); //testagem de erro
        }

        try {
            is.close(); //fecha o is (mesma ideia da utilização de arquivos)
        } catch (IOException ioe) {
            // nothing to see here
        }
        return resposta; //retorna uma string gigante
    }

    //separa os caracteres de acordo com o codigo universal
    public static int[] vetorResposta(String s) {

        int[] array = new int[MAX_TAM]; //cria um array com tamanho 25 (fixo)
        for (int i = 0; i < MAX_TAM; i++) {array[i] = 0;} //preenche todo o vetor com zero
        for (int i = 0; i < s.length(); i++) {
            
            if (s.charAt(i) == '\u003C') { //verifica se o caracter é (<)
                i++; //incrementa para testar o resto
                if (s.charAt(i) == 'b' && s.charAt(i + 1) == 'r' && s.charAt(i + 2) == '\u003E') {//verifica se temos (br>)
                    array[23]++;
                    i += 2;
                } else if (s.charAt(i) == 't' && s.charAt(i + 1) == 'a' && s.charAt(i + 2) == 'b' && s.charAt(i + 3) == 'l' && s.charAt(i + 4) == 'e' && s.charAt(i + 5) == '\u003E') {//verifica se temos (table>)
                    array[24]++;
                    i += 5;
                }
                i--; //decrementa se nenhuma das condiçoes forem válidas
            } 
            else if (s.charAt(i) == 'a'){array[0]++;} //verifica se o caracter é (a)
            else if (s.charAt(i) == 'e'){array[1]++;} //verifica se o caracter é (e)
            else if (s.charAt(i) == 'i'){array[2]++;} //verifica se o caracter é (i)
            else if (s.charAt(i) == 'o'){array[3]++;} //verifica se o caracter é (o)
            else if (s.charAt(i) == 'u'){array[4]++;} //verifica se o caracter é (u)
            else if (s.charAt(i) == '\u00E1'){array[5]++;} //verifica se o caracter é (á)
            else if (s.charAt(i) == '\u00E9'){array[6]++;} //verifica se o caracter é (é)
            else if (s.charAt(i) == '\u00ED'){array[7]++;} //verifica se o caracter é (í)
            else if (s.charAt(i) == '\u00F3'){array[8]++;} //verifica se o caracter é (ó)
            else if (s.charAt(i) == '\u00FA'){array[9]++;} //verifica se o caracter é (ú)
            else if (s.charAt(i) == '\u00E0'){array[10]++;} //verifica se o caracter é (à)
            else if (s.charAt(i) == '\u00E8'){array[11]++;} //verifica se o caracter é (è)
            else if (s.charAt(i) == '\u00EC'){array[12]++;} //verifica se o caracter é (ì)
            else if (s.charAt(i) == '\u00F2'){array[13]++;} //verifica se o caracter é (ò)
            else if (s.charAt(i) == '\u00F9'){array[14]++;} //verifica se o caracter é (ù)
            else if (s.charAt(i) == '\u00E3'){array[15]++;} //verifica se o caracter é (ã)
            else if (s.charAt(i) == '\u00F5'){array[16]++;} //verifica se o caracter é (õ)
            else if (s.charAt(i) == '\u00E2'){array[17]++;} //verifica se o caracter é (â)
            else if (s.charAt(i) == '\u00EA'){array[18]++;} //verifica se o caracter é (ê)
            else if (s.charAt(i) == '\u00EE'){array[19]++;} //verifica se o caracter é (î)
            else if (s.charAt(i) == '\u00F4'){array[20]++;} //verifica se o caracter é (ô)
            else if (s.charAt(i) == '\u00FB'){array[21]++;} //verifica se o caracter é (û)
            else if (s.charAt(i) > 'a' && s.charAt(i) <= 'z'){array[22]++;} //verifica se o caracter é (constante = resto das letras)
        }
        return array; //retorna o array com as respostas
    }

    //vetor que printa
    public static void mostraTela(int[] array, String site) {

        MyIO.println("a(" + array[0] + ") e(" + array[1] + ") i(" + array[2] + ") o(" + array[3] + ") u(" + array[4] + ")"
                + " \u00E1(" + array[5] + ") \u00E9(" + array[6] + ") \u00ED(" + array[7] + ") \u00F3(" + array[8] + ") \u00FA("
                + array[9] + ")" + " \u00E0(" + array[10] + ") \u00E8(" + array[11] + ") \u00EC(" + array[12] + ") \u00F2("
                + array[13] + ") \u00F9(" + array[14] + ")" + " \u00E3(" + array[15] + ") \u00F5(" + array[16] + ") \u00E2("
                + array[17] + ") \u00EA(" + array[18] + ") \u00EE(" + array[19] + ")" + " \u00F4(" + array[20] + ") \u00FB("
                + array[21] + ") consoante(" + array[22] + ") <br>(" + array[23] + ") <table>(" + array[24] + ") " + site);
    }

    /*
    Vai de x1 a x26 (array [0:24] + nome da pagina)
    a(x1) e(x2) i(x3) o(x4) u(x5)  ́a(x6)  ́e(x7) ́ı(x8)   ́o(x9)   ́u(x10)  `a(x11) `e(x12) `ı(x13)  `o(x14)  `u(x15)   ̃a(x16)
       ̃o(x17)  ˆa(x19) ˆe(x19) ˆı(x20)  ˆo(x21)ˆu(x22) consoante(x23)< br >(x24)< table >(x25) nomep ́agina(x26)
    */
         
    public static void main (String[] args){

        MyIO.setCharset("utf-8");

        String pagina = ""; //armazena a pagina
        String link = ""; //armazena o link da pagina

        int[] array = new int[MAX_TAM]; //cria o vetor que recebera as respostas

        pagina = MyIO.readLine();//pega a pagina

        while (isFim(pagina) == false) {
            link = MyIO.readLine(); //pega o link
            link = getHtml(link); //manda o link para a funçao que devolve a string do site 
            array = vetorResposta(link); //preenche o vetor que consei os numeros de cada caracter do site
            mostraTela(array, pagina); //printa a saida de cada site
            pagina = MyIO.readLine(); //pega o nome da proxima página
        }
    }
}