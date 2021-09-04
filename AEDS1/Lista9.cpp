#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

//classe

class Pessoa{
    private:
        string nome;
        float altura;
        int idade;
    
    public:
        Pessoa(){
            this->nome = "vazio";
            this->altura = 0;
            this->idade= 0;
        }
    
        Pessoa(string nome, float altura, int idade){
            this-> nome = nome;
            this-> altura = altura;
            this-> idade = idade;
        }

        void set_nome(string nome){
            this->nome = nome;
        }

        void set_altura(float altura){
            this->altura = altura;
        }

        void set_idade(int idade){
            this-> idade = idade;
        }

        string get_nome(){
            return nome;
        }

        float get_altura(){
            return altura;
        }

        int get_idade(){
            return idade;
        }

        string toString(){
            return "Nome: " + nome + " Altura: " + to_string(altura) + " Idade: " + to_string(idade);
        }
};

class Elevador{
    private:
        int andarAtual;
        int totalAndar;
        int capacidade;
        int pessoas;
    
    public:
    Elevador(){
        this-> andarAtual = 0;
        this-> totalAndar = 0;
        this-> capacidade = 0;
        this-> pessoas = 0;
    }
    Elevador(int andarAtual, int totalAndar, int capacidade, int pessoas){
        this-> andarAtual = andarAtual;
        this-> totalAndar = totalAndar;
        this-> capacidade = capacidade;
        this-> pessoas = pessoas;
    }
    void inicializa(int capacidade, int totalAndar){
        this-> andarAtual = 0;
        this->capacidade = capacidade;
        this->totalAndar = totalAndar;
        this-> pessoas = 0;
    }
    void entra(){
        if(pessoas<capacidade){
            pessoas++;
        }
    }
    void sai(){
        if(pessoas>0){
           pessoas--; 
        }
    }
    void sobe(){
        if(andarAtual<totalAndar){
            andarAtual++;
        }
    }
    void desce(){
        if(andarAtual>0){
            andarAtual--;
        }
    }
    int get_andarAtual(){
            return andarAtual;
    }
    int get_totalAndar(){
            return totalAndar;
    }
    int get_capacidade(){
            return capacidade;
    }
    int get_pessoas(){
            return pessoas;
    }

};

class Relogio{
    private:
        int hora;
        int minuto;
        int segundo;

    public:
        Relogio(){
            this->hora = 0;
            this->minuto = 0;
            this->segundo = 0;
        }
        Relogio(int hora, int minuto, int segundo){
            this->hora = hora;
            this->minuto = minuto;
            this->segundo = segundo;
        }
        void setHora(int hora, int minuto, int segundo){
            this->hora = hora;
            this->minuto = minuto;
            this->segundo = segundo;
        }
        void getHora(int *hora, int *minuto, int *segundo){
            *hora = this->hora;
            *minuto = this->minuto;
            *segundo = this->segundo;
        }
        void avancaHora(){
            this->segundo++;
            if(this->segundo == 60){
                this->segundo = 0;
                this->minuto++;
            }
            if(this->minuto == 60){
                this->minuto = 0;
                this->hora++;
            }
            if(this->hora == 24){
                this->hora = 0;
            }
        }
};

class Circulo{
    private:
    float raio1,x1,y1;
    float raio2,x2,y2;

    float area(float raio){
        float resp = M_PI * pow(raio,2);
        return resp;
    }
    float distancia(){
        float resp;
        if(y1==y2){
            resp = std::abs(x1-x2);
        }else if(x1==x2){
            resp = std::abs(y1-y2);
        }else{
            float x = std::abs(x1-x2);
            float y = std::abs(y1-y2);
            resp = sqrt(pow(x,2)+pow(y,2));
        }
        return resp;
    }
    float circunferencia(float raio){
        float resp = 2 * M_PI * raio;
        return resp;
    }

    public:
    Circulo(){
        this->raio1 = 1;
        this->x1 = 0;
        this-> y1 = 0;
        this->raio2 = 1;
        this->x2 = 0;
        this-> y2 = 0;

    }
    void setRaio1(float raio1){
        this->raio1 = raio1;
    }
    void setRaio2(float raio2){
        this->raio2 = raio2;
    }
    void posicao1(float x1, float y1){
        this->x1 = x1;
        this->y1 = y1;
    }
    void posicao2(float x2, float y2){
        this->x2 = x2;
        this->y2 = y2;
    }
    void aumentarRaio1(float percentual){
        this->raio1 = raio1 + raio1*(percentual/100);
    }
    void aumentarRaio2(float percentual){
        this->raio2 = raio2 + raio2*(percentual/100);
    }
    float get_Raio1(){
        return raio1;
    }
    float get_Raio2(){
        return raio2;
    }
    float get_Centro1X(){
        return x1;
    }
    float get_Centro2X(){
        return x2;
    }
    float get_Centro1Y(){
        return y1;
    }
    float get_Centro2Y(){
        return y2;
    }
    float get_Circunferencia1(){
        return circunferencia(raio1);
    }
    float get_Circunferencia2(){
        return circunferencia(raio2);
    }
    float get_Area1(){
        return area(raio1);
    }
    float get_Area2(){
        return area(raio2);
    }
    float get_Distancia(){
        return distancia();
    }

};

class Television{
    private:
        int channel;
        int volume;

    public:
        Television(){
            this->channel = 0;
            this->volume = 0;
        }
        Television(int channel){
            this->channel = channel;
            this->volume = 0;
        }
        Television(int channel, int volume){
            this->channel = channel;
            this->volume = volume;
        }
        void volumeUp(){
            this->volume++;
        }
        void volumeDown(){
            if(this->volume>0){
                this->volume--;
            }
        }       
        void channelUp(){
            this->channel++;
        }
        void channelDown(){
            if(this->channel>0){
                this->channel--;
            }
        }
        void setVolume(int chanel){
            if(this->volume>0){
                this->volume = volume;
            }
        }
        void setChannel(int){
            if(this->channel>0){
                this->channel = channel;
            }
        }
        int getChannel(){
            return this->channel;
        }
        int getVolume(){
            return this->volume;
        }
};

class CondicionadorDeAr{
    private:
    int potencia;
    float temperaturaExterna;
    float novaTemperatura;

    public:
    CondicionadorDeAr(){
        this->potencia = 0;
        this->temperaturaExterna = 0;
        this->novaTemperatura = 0;
    }

    CondicionadorDeAr(int potencia, float temperaturaExterna){
        this->potencia = potencia;
        this->temperaturaExterna = temperaturaExterna;
        this->novaTemperatura = 0;
    }

    void setTemperatura(int potencia, float temperaturaExterna){
        novaTemperatura = temperaturaExterna - (potencia*1.8);
    }

    float get_novaTemperatura(){
        return novaTemperatura;
    }

};

class Carro{
    private:
    float tanque;
    int distancia;

    public:

    Carro(){
        this->distancia = 0;
        this->tanque=0;
    }

    Carro(float tanque, int distancia){
        this->distancia = distancia;
        this->tanque=tanque;
    }
    ~Carro(){
        cout<<"Final!!"<<endl;
    }
    void abastecer(float litros){
        if(this->tanque + litros <= 50){
            this->tanque+=litros;
        }
    }
    void mover(int quilometros){
        float litros = quilometros/15;
        this->distancia+= quilometros;
        this->tanque -= litros;
    }
    void getStatus(){
        cout<<"Distancia: "<<this->distancia<<"\t";
        cout<<"Status do tanque: "<<this->tanque<<endl;
    }
};

//menus
void menu2(){
    cout<<"1 - Para inicializar"<<endl;
    cout<<"2 - Para entrar"<<endl;
    cout<<"3 - Para sair"<<endl;
    cout<<"4 - Para subir"<<endl;
    cout<<"5 - Para descer"<<endl;
    cout<<"6 - Verificar status..."<<endl;
    cout<<"0 - Parar o elevador"<<endl;
}

void menu4(){
    cout<<"1 - Definir o raio do circulo 1"<<endl;
    cout<<"2 - Definir o raio do circulo 2"<<endl;
    cout<<"3 - Definir o centro do circulo 1 (X,Y)"<<endl;
    cout<<"4 - Definir o centro do circulo 2 (X,Y)"<<endl;
    cout<<"5 - Status dos circulos"<<endl;
    cout<<"6 - Imprimir a distancia entre os centros do circulo 1 e 2"<<endl;
    cout<<"7 - Aumentar o raio do circulo 1"<<endl;
    cout<<"8 - Aumentar o raio do circulo 2"<<endl;
    cout<<"0 - Finalizar"<<endl;
}

void menu5(){
    system("cls||clear");
    cout<<"1 - Para aumentar o volume"<<endl;
    cout<<"2 - Para abaixar o volume"<<endl;
    cout<<"3 - Para aumentar o canal"<<endl;
    cout<<"4 - Para abaixar o canal"<<endl;
    cout<<"5 - Para setar o canal"<<endl;
    cout<<"6 - Verificar status..."<<endl;
    cout<<"0 - Para desligar a TV..."<<endl;
}


//exercícios

void ex1(){
    Pessoa *p1 = new Pessoa();
    int idade;
    float altura;
    string nome;

    cout<<"Digite o nome: "<<endl;
    cin>>nome;
    cout<<"Digite a altura: "<<endl;
    cin>>altura;
    cout<<"Digite a idade: "<<endl;
    cin>>idade;

    p1->set_nome(nome);
    p1->set_altura(altura);
    p1->set_idade(idade);

    cout<<"Nome: "<<p1->get_nome()<<endl;
    cout<<"Altura: "<<p1->get_altura()<<endl;
    cout<<"Idade: "<<p1->get_idade()<<endl;

    cout<<p1->toString();

    fflush(stdin);
    cout<<"Pressione uma tecla para continuar..."<<endl;
    getchar();
    system("cls||clear");
    
}

void ex2(){
    int opcao;
    Elevador *e1 = new Elevador();
    menu2();
    cin>>opcao;
    while(opcao!=0){
        system("cls||clear");
        switch (opcao){
            case 1:
                cout<<"Inicializando"<<endl;
                int capacidade,andares;
                cout<<"Entre com a capacidade maxima:"<<endl;
                cin>>capacidade;
                cout<<"Entre com o numero de andares:"<<endl;
                cin>>andares;
                e1->inicializa(capacidade,andares);
                break;
            case 2:
                cout<<"Entrando"<<endl;
                e1->entra();
                break;
            case 3:
                cout<<"Saindo"<<endl;
                e1->sai();
                break;
            case 4:
                cout<<"Subindo"<<endl;
                e1->sobe();
                break;
            case 5:
                cout<<"Descendo"<<endl;
                e1->desce();
                break;
            case 6:
                cout<<"Status do Elevador"<<endl;
                cout<<"Total de Andares: "<<e1->get_totalAndar()<<endl;
                cout<<"Andar atual: "<<e1->get_andarAtual()<<endl;
                cout<<"Capacidade maxima: "<<e1->get_capacidade()<<endl;
                cout<<"Pessoas no elevador: "<<e1->get_pessoas()<<endl;
                break;
            default:
                break;
        }
        fflush(stdin);
        cout<<"Pressione uma tecla para continuar..."<<endl;
        getchar();
        system("cls||clear");
        menu2();
        cin>>opcao;
    }
    fflush(stdin);
    cout<<"Pressione uma tecla para continuar..."<<endl;
    getchar();
    system("cls||clear");
}

void ex3(){
    int horas, minutos, segundos;

    cout<< "Qual o valor da hora atual: "<<endl;
    cin>>horas;
    cout<< "Qual o valor dos minutos atual: "<<endl;
    cin>>minutos;
    cout<< "Qual o valor dos segundos atual: "<<endl;
    cin>>segundos;

    cout<<"\nSao: "<<horas<<":"<<minutos<<":"<<segundos<<" agora\n"<<endl;

    Relogio *r1 = new Relogio(horas, minutos, segundos);

    r1->avancaHora();
    r1->getHora(&horas, &minutos, &segundos);

    cout<<"Sao: "<<horas<<":"<<minutos<<":"<<segundos<<" agora\n"<<endl;

    fflush(stdin);
    cout<<"Pressione uma tecla para continuar..."<<endl;
    getchar();
    system("cls||clear");
}

void ex4(){
    int opcao;
    float raio,x,y,porcentagem;
    Circulo *cr1 = new Circulo();
    menu4();
    cin>>opcao;
    while(opcao!=0){
        system("cls||clear");
        switch (opcao){
            case 1:
                cout<<"Definindo o raio do circulo 1"<<endl;
                cout<<"Entre com o valor do raio:"<<endl;
                cin>>raio;
                cr1->setRaio1(raio);
                break;
            case 2:
                cout<<"Definindo o raio do circulo 2"<<endl;
                cout<<"Entre com o valor do raio:"<<endl;
                cin>>raio;
                cr1->setRaio2(raio);
                break;
            case 3:
                cout<<"Definindo a posicao do circulo 1"<<endl;
                cout<<"Entre com o valor do x:"<<endl;
                cin>>x;
                cout<<"Entre com o valor do y:"<<endl;
                cin>>y;
                cr1->posicao1(x,y);
                break;
            case 4:
                cout<<"Definindo a posicao do circulo 2"<<endl;
                cout<<"Entre com o valor do x:"<<endl;
                cin>>x;
                cout<<"Entre com o valor do y:"<<endl;
                cin>>y;
                cr1->posicao2(x,y);
                break;
            case 5:
                cout<<"Status do circulo 1"<<endl;
                cout<<"Raio: "<<cr1->get_Raio1()<<endl;
                cout<<"Posicao do Centro: ("<<cr1->get_Centro1X()<<","<<cr1->get_Centro1Y()<<")"<<endl;
                cout<<"Area: "<<cr1->get_Area1()<<endl;
                cout<<"Circunferencia: "<<cr1->get_Circunferencia1()<<endl;

                cout<<"\nStatus do circulo 2"<<endl;
                cout<<"Raio: "<<cr1->get_Raio2()<<endl;
                cout<<"Posicao do Centro: ("<<cr1->get_Centro2X()<<","<<cr1->get_Centro2Y()<<")"<<endl;
                cout<<"Area: "<<cr1->get_Area2()<<endl;
                cout<<"Circunferencia: "<<cr1->get_Circunferencia2()<<endl;

                break;
            case 6:
                cout<<"A distancia entre o circulo 1 e o circulo 2 eh: "<<cr1->get_Distancia()<<endl;
                break;
            case 7:
                cout<<"Aumentar o raio do circulo 1"<<endl;
                cout<<"Digite a porcentagem % (Ex. 50):"<<endl;
                cin>>porcentagem;
                cr1->aumentarRaio1(porcentagem);
                cout<<"Novo raio: "<<cr1->get_Raio1()<<endl;
                break;
            case 8:
                cout<<"Aumentar o raio do circulo 2"<<endl;
                cout<<"Digite a porcentagem % (Ex. 50):"<<endl;
                cin>>porcentagem;
                cr1->aumentarRaio2(porcentagem);
                cout<<"Novo raio: "<<cr1->get_Raio2()<<endl;
                break;
            default:
                break;
        }
        fflush(stdin);
        cout<<"Pressione uma tecla para continuar..."<<endl;
        getchar();
        system("cls||clear");
        menu4();
        cin>>opcao;
    }
    fflush(stdin);
    cout<<"Pressione uma tecla para continuar..."<<endl;
    getchar();
    system("cls||clear");
}

void ex5(){
    int opcao;
    Television *t1 = new Television();
    menu5();
    cin>>opcao;
    while(opcao!=0){
        system("cls||clear");
        switch (opcao){
            case 1:
                cout<<"Aumentando o Volume"<<endl;
                t1->volumeUp();
                cout<<"Novo volume: "<<t1->getVolume()<<endl;
                break;

            case 2:
                cout<<"Diminuindo o Volume"<<endl;
                t1->volumeDown();
                cout<<"Novo volume: "<<t1->getVolume()<<endl;
                break;

            case 3:
                cout<<"Incrementando o canal..."<<endl;
                t1->channelUp();
                cout<<"Novo canal: "<<t1->getChannel()<<endl;
                break;

            case 4:
                cout<<"Decrementando o canal..."<<endl;
                t1->channelDown();
                cout<<"Novo canal: "<<t1->getChannel()<<endl;
                break;

            case 5:
                cout<<"Entre com o novo canal..."<<endl;
                int canal;
                cin>>canal;
                t1->setChannel(canal);
                cout<<"Novo canal: "<<t1->getVolume()<<endl;
                break;

            case 6:
                cout<<"Canal: "<<t1->getChannel()<<"\tVolume: "<<t1->getVolume()<<endl;
                break;
        
            default:
                break;
        }
        fflush(stdin);
        cout<<"Pressione uma tecla para continuar..."<<endl;
        getchar();
        system("cls||clear");
        menu5();
        cin>>opcao;
    }
    fflush(stdin);
    cout<<"Pressione uma tecla para continuar..."<<endl;
    getchar();
    system("cls||clear");
}

void ex6(){
    int potencia;
    float temperaturaExterna;

    cout<< "Qual o valor da temperatura externa: "<<endl;
    cin>>temperaturaExterna;
    cout<< "Qual eh a potencia do condicionador de ar: "<<endl;
    cin>>potencia;

    cout<<"\nA temperatura atual eh "<<temperaturaExterna<<", e o condicionador de ar foi ligado na potencia "<<potencia<<endl;

    CondicionadorDeAr *ca1 = new CondicionadorDeAr(potencia, temperaturaExterna);

    ca1->setTemperatura(potencia, temperaturaExterna);

    cout<<"A temperatura atual eh "<<ca1->get_novaTemperatura()<<endl;

    fflush(stdin);
    cout<<"Pressione uma tecla para continuar..."<<endl;
    getchar();
    system("cls||clear");
}

void ex7(){
    int opcao;
    Carro *c1 = new Carro();
    Carro *c2 = new Carro();
    c1->abastecer(20);
    c1->mover(200);
    c1->getStatus();
    c2->abastecer(30);
    c2->mover(400);
    c2->getStatus();

    fflush(stdin);
    cout<<"Pressione uma tecla para continuar..."<<endl;
    getchar();
    system("cls||clear");

}

//main
int main(){
    system("cls");
    int q;
    cout<<"\n==========Menu========="<<endl;
    cout<<"Digite o numero da questao (0 para sair):"<<endl;
    cin>>q;
    cout<<" "<<endl;

    while(q!=0){
        switch (q){
            case 1:
                ex1();
            break;
            case 2:
                ex2();
            break;
            case 3:
                ex3();
            break;
            case 4:
                ex4();
            break;
            case 5:
                ex5();
            break;
            case 6:
                ex6();
            break;
            case 7:
                ex7();
            break;
            default:
            break;
        }
        cout<<"==========Menu========="<<endl;
        cout<<"\nDigite o numero da questao (0 para sair):"<<endl;
        cin>>q;
    }
    return 0;
}