#include <stdio.h>

int main()
{
    int n, c1, c2, r=0;
    scanf("%ds", &n);
    for (int i=0; i<n; i++){
        scanf("%d %d", &c1, &c2);
        while(c2!=0){
            r = c1%c2;
            c1 = c2;
            c2 = r;
        }
        printf("%d\n", c1);
    }
    return 0;
}
