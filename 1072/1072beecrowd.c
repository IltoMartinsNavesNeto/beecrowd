#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int contagemIn = 0;
    int contagemOut = 0;
    int i = 1;
    for(i; i <= n; i++){
        int x;
        scanf("%d", &x);

        if(x >= 10 && x <= 20){
            contagemIn++;
        }
        else{
            contagemOut++;
        }
    }
    printf("%d in\n", contagemIn);
    printf("%d out\n", contagemOut);

}
