#include <stdio.h>

int main(){
    int input;
    scanf("%d", &input);
    while(input>1){
        if(input%3==0){
            input/=3;
        }
        else{
            input-=1;
        }
    }
    return 0;
}