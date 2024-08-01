#include <stdio.h>

int main (){
    int n, notas[5], cont=0, a;
    while(scanf("%d", &n) && n){
        while(n--){
            for(int i = 0; i<5; i++){
                scanf("%d", &notas[i]);
                if (notas[i] <= 127){
                    cont++;
                    a=i;
                }
            }
            if(cont<=0 || cont>1){
                printf("*\n");
            } else{
                switch(a){
                    case 0:
                        printf("A\n");
                        break;
                    case 1:
                        printf("B\n");
                        break;
                    case 2:
                        printf("C\n");
                        break;
                    case 3:
                        printf("D\n");
                        break;
                    case 4:
                        printf("E\n");
                        break;
                }
            }
            cont = 0;
        }    
    }
    return 0;
}
