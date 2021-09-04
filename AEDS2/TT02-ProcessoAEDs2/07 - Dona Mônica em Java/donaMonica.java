class donaMonica {
    public static void main (String[] args){
        String linha;
        int dona, f1, f2, f3;
    
        linha = MyIO.readLine();

        while (!(linha.equals("0"))){
            String[] idades = linha.split(" "); //separa as idades pelo espaço em branco

            dona = Integer.parseInt(idades[0]); //pega a idade da dona monica
            f1 = Integer.parseInt(idades[1]); //pega a idade do filho 1
            f2 = Integer.parseInt(idades[2]); //pega a idade do filho 2

            f3 = dona - (f1+f2); // calcula a idade do filho 3

            if(f1>f2 && f1>f3){MyIO.println(f1);}
            else if(f2>f1 && f2>f3){MyIO.println(f2);}
            else{MyIO.println(f3);}

            linha = MyIO.readLine(); //le a proxima linha
            
        }
        
    }
}