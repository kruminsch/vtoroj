#include<stdio.h>
int main(){
    int count,sum,massiv[8] = {1,1,2,3,5,8,13,21};
     count = 7;
     sum =0;

    while(count>=0){
        
        
        sum+=massiv[count];
        
        count--;
        
        }

        printf("%d", sum);
        
    return 0;
}