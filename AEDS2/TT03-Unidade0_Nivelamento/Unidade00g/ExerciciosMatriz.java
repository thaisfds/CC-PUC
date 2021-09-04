import java.io.*;
import java.util.*;

import javax.swing.plaf.metal.MetalSplitPaneDivider.MetalDividerLayout;

public class ExerciciosMatriz {
    
    /*Faça um programa que leia os elementos de uma matriz com L linhas e C 
    colunas e mostre na tela os elementos da matriz em formato de grid*/
    public static void grid(){

        MyIO.print("Entre com o numero de linhas: ");
        int l = MyIO.readInt(); //le e armazena o tamanho

        MyIO.print("Entre com o numero de colunas: ");
        int c = MyIO.readInt(); //le e armazena o tamanho

        int[][] matriz = new int[l][c];

        for(int i = 0; i < l; i++){
            MyIO.println("Linha: " + i);
            for(int j = 0; j < c; j++){
                matriz[i][j] = MyIO.readInt();
            }
        }

        for(int i = 0; i < l; i++){
            MyIO.print(" | ");
            for(int j = 0; j < c; j++){
                MyIO.print(matriz[i][j] + " | ");
            }
            MyIO.println("\n _____________________ ");
        }

    }

    /*Faça um programa que leia os elementos de uma matriz com L linhas e C 
    colunas e mostre na tela os elementos da matriz Transposta*/
    public static void transposta(){

        MyIO.print("Entre com o numero de linhas: ");
        int l = MyIO.readInt(); //le e armazena o tamanho

        MyIO.print("Entre com o numero de colunas: ");
        int c = MyIO.readInt(); //le e armazena o tamanho

        int[][] matriz = new int[l][c];
        int[][] transposta = new int[c][l];

        for(int i = 0; i < l; i++){
            MyIO.println("Linha: " + i);
            for(int j = 0; j < c; j++){
                matriz[i][j] = MyIO.readInt();
            }
        }

        for(int i = 0; i < l; i++){
            MyIO.println("Linha: " + i);
            for(int j = 0; j < c; j++){
                transposta[j][i] = matriz[i][j];
            }
        }

        for(int i = 0; i < l; i++){
            MyIO.print(" | ");
            for(int j = 0; j < c; j++){
                MyIO.print(transposta[i][j] + " | ");
            }
            MyIO.println("\n _____________________ ");
        }

    }

    /*Faça um programa que leia duas matrizes com os mesmos números de 
    linhas e colunas, faça a soma das mesmas e imprima na tela a matriz 
    resultante*/
    public static void somaMatriz(){

        MyIO.print("Entre com o numero de linhas: ");
        int l = MyIO.readInt(); //le e armazena o tamanho

        MyIO.print("Entre com o numero de colunas: ");
        int c = MyIO.readInt(); //le e armazena o tamanho

        int[][] matriz1 = new int[l][c];
        int[][] matriz2 = new int[l][c];
        int[][] matriz3 = new int[l][c];

        for(int i = 0; i < l; i++){
            MyIO.println("Linha: " + i);
            for(int j = 0; j < c; j++){
                matriz1[i][j] = MyIO.readInt();
            }
        }
        for(int i = 0; i < l; i++){
            MyIO.println("Linha: " + i);
            for(int j = 0; j < c; j++){
                matriz3[i][j] = matriz1[i][j] * matriz2[i][j];
            }
        }


        for(int i = 0; i < l; i++){
            MyIO.print(" | ");
            for(int j = 0; j < c; j++){
                MyIO.print(matriz3[i][j] + " | ");
            }
            MyIO.println("\n _____________________ ");
        }

    }

    /*Faça um programa que leia os elementos de uma matriz quadrada com N 
    linhas e N colunas e mostre as diagonais principal e secundária*/
    public static void diagonalMatriz(){

        MyIO.print("Entre com o numero de linhas: ");
        int l = MyIO.readInt(); //le e armazena o tamanho

        int[][] matriz1 = new int[l][l];

        for(int i = 0; i < l; i++){
            MyIO.println("Linha: " + i);
            for(int j = 0; j < l; j++){
                matriz1[i][j] = MyIO.readInt();
            }
        }


        for(int i = 0; i < l; i++){
            MyIO.print(" | ");
            for(int j = 0; j < l; j++){
                MyIO.print(matriz1[i][j] + " | ");
            }
            MyIO.println("\n _____________________ ");
        }
        MyIO.println("\n ");

        for(int i = 0; i < l; i++){
            for(int j = 0; j < l; j++){
                if(i==j){
                    MyIO.print(matriz1[i][j]);
                }else{
                    MyIO.print("   ");
                }
                                
            }
            MyIO.print("\n");
        }

    }

    /*Faça um programa que leia os elementos de uma matriz e mostre a média 
    dos elementos*/
    public static void mediaMatriz(){

        MyIO.print("Entre com o numero de linhas: ");
        int l = MyIO.readInt(); //le e armazena o tamanho

        MyIO.print("Entre com o numero de colunas: ");
        int c = MyIO.readInt(); //le e armazena o tamanho

        int[][] matriz1 = new int[l][c];

        float media = 0;

        for(int i = 0; i < l; i++){
            MyIO.println("Linha: " + i);
            for(int j = 0; j < c; j++){
                matriz1[i][j] = MyIO.readInt();
            }
        }
        for(int i = 0; i < l; i++){
            for(int j = 0; j < c; j++){
                media += matriz1[i][j];
            }
        }


        for(int i = 0; i < l; i++){
            MyIO.print(" | ");
            for(int j = 0; j < c; j++){
                MyIO.print(matriz1[i][j] + " | ");
            }
            MyIO.println("\n _____________________ ");
        }

        media /= (l*c);

        MyIO.println("Media = " + media);

    }

    /*Faça um programa que leia os elementos de uma matriz e mostre a média 
    dos elementos de cada linha*/
    public static void mediaLinha(){

        MyIO.print("Entre com o numero de linhas: ");
        int l = MyIO.readInt(); //le e armazena o tamanho

        MyIO.print("Entre com o numero de colunas: ");
        int c = MyIO.readInt(); //le e armazena o tamanho

        int[][] matriz1 = new int[l][c];

        float media = 0;

        for(int i = 0; i < l; i++){
            MyIO.println("Linha: " + i);
            for(int j = 0; j < c; j++){
                matriz1[i][j] = MyIO.readInt();
            }
        }

        for(int i = 0; i < l; i++){
            for(int j = 0; j < c; j++){
                media += matriz1[i][j];
            }
            media /= c;
            MyIO.println("Media = " + media);
            media = 0;
        }


        for(int i = 0; i < l; i++){
            MyIO.print(" | ");
            for(int j = 0; j < c; j++){
                MyIO.print(matriz1[i][j] + " | ");
            }
            MyIO.println("\n _____________________ ");
        }

    }

    /*Faça um programa que leia os elementos de uma matriz e mostre a média 
    dos elementos de cada coluna*/
    public static void mediaColuna(){

        MyIO.print("Entre com o numero de linhas: ");
        int l = MyIO.readInt(); //le e armazena o tamanho

        MyIO.print("Entre com o numero de colunas: ");
        int c = MyIO.readInt(); //le e armazena o tamanho

        int[][] matriz1 = new int[l][c];

        float[] media = new float[l];

        for(int i = 0; i < l; i++){
            MyIO.println("Linha: " + i);
            for(int j = 0; j < c; j++){
                matriz1[i][j] = MyIO.readInt();
            }
        }

        for(int i = 0; i < l; i++){
            for(int j = 0; j < c; j++){
                media[j] += matriz1[i][j];
            }
        }

        for(int i = 0; i < l; i++){
            MyIO.println("Media = " + media[i]);
        }

        for(int i = 0; i < l; i++){
            MyIO.print(" | ");
            for(int j = 0; j < c; j++){
                MyIO.print(matriz1[i][j] + " | ");
            }
            MyIO.println("\n _____________________ ");
        }

    }

    public static void main(String[] args) {
        //grid();
        //transposta();
        //somaMatriz();
        //diagonalMatriz();
        //mediaMatriz();
        //mediaLinha();
        //mediaColuna();
    }
       
}