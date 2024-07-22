#include <stdio.h>
  
int main() {
    int n, a, cont=0, cR=0, cC=0, cS=0;
    char b;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d %c", &a, &b);
        cont += a;
        if(b == 'S'){
            cS += a;
        } else if(b == 'R'){
            cR += a;
        } else if(b == 'C'){
            cC += a;
        }
    }
    float cCf = (float)cC;
    float cRf = (float)cR;
    float cSf = (float)cS;
    float contf = (float)cont;
    printf("Total: %d cobaias\n", cont);
    printf("Total de coelhos: %d\n", cC);
    printf("Total de ratos: %d\n", cR);
    printf("Total de sapos: %d\n", cS);
    printf("Percentual de coelhos: %.2f %%\n", 100.0*(cCf/cont));
    printf("Percentual de ratos: %.2f %%\n", 100.0*(cRf/cont));
    printf("Percentual de sapos: %.2f %%\n", 100.0*(cSf/cont));
  
    
    return 0;
}
