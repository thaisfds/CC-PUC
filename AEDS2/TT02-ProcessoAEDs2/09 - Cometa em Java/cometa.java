public class cometa {
    public static void main (String[] args){
        String linha;
        int anoAtual, anoCometa, n;
    
        linha = MyIO.readLine();

        while (!(linha.equals("0"))){

            anoAtual = Integer.parseInt(linha); //pega a idade da dona monica
            n = (anoAtual-10)/76; //descobre quantas vezes o cometa ja passou
            n++; //incrementa o n para saber o numero da proxima vez
            anoCometa = 10+(76*n); //descobre o ano do proximo cometa

            MyIO.println(anoCometa);

            linha = MyIO.readLine(); //le a proxima linha
            
        }
        
    }
}
