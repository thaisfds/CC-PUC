#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

int main(){

int array[] = {10,20,30,40,50,60,70,80,90,100};
int n = 10, x = 11;

bool resp = false;
int dir = n;
int esq = -1;
int meio;

    while (esq < dir-1) {
        meio = (esq + dir) / 2;
        if(array[meio] < x){esq = meio;}
        else{dir = meio;}
    }
    if(array[dir] == x){resp = true;}

    printf("Resp %d",resp); // prints 1 se true
return 0;
}