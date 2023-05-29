#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void my_christmas_tree(int param);

int main(int argc, char **argv){
    if(argv == NULL || atoi(argv[1]) == 0){
        return 0;
    }
    my_christmas_tree(atoi(argv[1]));
    return 0;
}


void my_christmas_tree(int param)
{
    int probel, num, i;
    probel = 3;
    num = 3;

    for(i = 2; i <= param; i++){
        probel += num;
        int p = i % 2;

        if(p == 1){
            num--;
        }
        num++;
    }

    int zvezda,line,bq,dent,ss,ced;
    zvezda = 1;
    line = (param + 1)*(param + 1) - ((param - 1)*(param - 2))/2;
    bq = probel;
    dent = 4;
    ss = 1;
    ced = 0;

    for(int i = 0; i < line; i++){
        for(int l = 0;l < bq;l++){
            printf(" ");
        }
        for(int j = 0;j < zvezda;j++){
            printf("*");
        }
        if(i == dent - 1 && param > 1){
            zvezda = zvezda - 2 - (2 * (ced /2));
            bq = bq +(1 + (ced / 2));
            ced++;
            dent = dent + 4 + ss;
            ss++;
            printf("\n");
            continue;
        }
        zvezda += 2;
        bq--;
        printf("\n");
    }

    int kek,atl;
    atl = 3;
    kek = 3;

    for(int c = 2; c <= param;c++){
        kek += atl;
        if(c % 2 == 0){
            atl--;
        }
        atl++;
    }

    for(int i = 0; i < param;i++){
        int p = 0;
        int l = 0;
        while( p < kek){
            printf(" ");
            p++;
        }
        while(l < param){
            printf("|");
            l++;
        }
        printf("\n");
    }
}