#include <stdio.h>

void main(void){
    int n;
    printf("Tinggi Piramida : ");
    scanf("%d",&n);

    for(int i = 1; i<=n; i++){
        for(int j = n; j>=i; j--){
            printf(" ");
        }
        for(int k = 1; k<=i; k++){
            printf("#");
        }
        printf("\n");
    }
}