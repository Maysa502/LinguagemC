#include <stdio.h>
#include <stdlib.h>

int soma(int v[], int q){
    int i, rs = 0;
    for(i = 0 ; i < q ; i++){
        rs += v[i];
    }
    return rs;
}

int media(int v[], int q){
    int i, rs = 0;
    for(i = 0 ; i < q ; i++){
        rs += v[i];
    }
    return rs/q;
}
int max(int v[], int q){
    int m = v[0];
    int i;
    for(i = 1 ; i < q; i++){
        if(v[i] > m){
            m = v[i];
        }
    }
    return m;
}

int min(int v[], int q){
    int m = v[0];
    int i;
    for(i = 1 ; i < q; i++){
        if(v[i] < m){
            m = v[i];
        }
    }
    return m;
}