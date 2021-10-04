//Soma da pilha
public int soma() {

    int soma = 0;

    for (Celula i = topo; i != null; i = i.prox) {
        soma += i.elemento;
    }
    return soma;
}

//Soma recursiva da pilha

public int somarRec() {
    return somarRec(topo);
}



private int somarRec(Celula i) {
    if (i != null) {
        return i.elemento + somarRec(i.prox);
    } else {
        return 0;
    }

}

//mostrar os arquivos da cabeça
void mostrar(){
    mostrar(topo);
}

void mostrar(Celula i){
    if(i != null){
        System.out.println(i.elemento);
        mostrar(i.prox);
    }
}

//mostrar os arquivos da cauda
void mostrar(){
    mostrar(topo);
}

void mostrar(Celula i){
    if(i != null){
        mostrar(i.prox);
        System.out.println(i.elemento);
    }
}