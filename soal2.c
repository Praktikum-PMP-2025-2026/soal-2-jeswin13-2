#include <stdio.h>
#include <string.h>

int main(){
    int n,m;
    char pulau [100][100];
    int b = 0;
    int c = 0;

    scanf ("%d",&n);
    scanf ("%d", &m);

    for (int i = 0; i < n; i++){
        scanf ("%s",pulau[i]);

        int a =0;
        for (int j = 0; j <m; j ++){
        if (pulau[i][j] =='1'){
            a++;
        }
        }
        if (a > b){
            b = a;
        }
        if ( a>0 ){
           c ++;
        } 
    }

    printf ("ISLANDS %d\n",c);
    printf ("LARGEST %d\n",b);
    return 0;
}
