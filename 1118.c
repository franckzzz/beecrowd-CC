#include <stdio.h>

int main (){
    double x, y;
    int n, a;
    do{
        while(scanf("%lf", &x) && (x >10.0 || x <0.0)){
            printf("nota invalida\n");
            x=0;
        }
        while(scanf("%lf", &y) && (y >10.0 || y <0.0)){
            printf("nota invalida\n");
            y=0;
        }
        printf("media = %.2lf\n", (x+y)/2);
        printf("novo calculo (1-sim 2-nao)\n");
        while(scanf("%d", &a) && (a>2 || a<1)){
            printf("novo calculo (1-sim 2-nao)\n");
        }
    }
    while(a==1);
    return 0;
}
