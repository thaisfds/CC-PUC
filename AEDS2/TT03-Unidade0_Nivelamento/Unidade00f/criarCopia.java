public class criarCopia {

    public static void copia() {
        //abre o arquivo baseado no que a pessoa digitar
        Arq.openRead(MyIO.readString("Digite o nome do arquivo: "));
        String str = Arq.readAll(); //le todo o arquivo e salva em str
        Arq.close();// fecha o arquivo
        Arq.openWrite("copia.txt"); //abre um novo arquivo pra copia
        Arq.print(str); //printa no arquivo o que estava em str
        Arq.close(); //fecha o arquivo
    }
    public static void main(String[] args) {
        copia();
    }
    /*
    O comando Arq.openRead("exemplo.txt") poderia ser substituído:
        1)Arq.openRead("C:\\entrada01.txt")
        2) Arq.openRead("/home/maxm/entrada01.txt")
        3) Arq.openRead(MyIO.readString("Digite o nome do arquivo: "))
    */
    /*
    Os comandos: 
        String str = "";
        while(Arq.hasNext()==true){
            str+-Arq.readChar();
        }
    podem ser substituidos por:
        String str = "";
        while(Arq.hasNext()==true){
            str+-Arq.readString();
        }

        String str = "";
        while(Arq.hasNext()==true){
            str+-Arq.readLine();
        }

        String str = Arq.readAll();
    */
    
}
