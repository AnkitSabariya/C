#include <stdio.h>

int main(){
    for (int i = 5; i >=1; i--)
    {
        for (int j = 1; j >=1+1-i; j--)
        {
            printf("%d ",i);
        }
        printf("\n");
        
    }
    
}