#include <stdio.h>
#include <vector>

int main(){
    unsigned int number;
    std::vector<unsigned int>res;
    scanf("%u", &number);
    while(number>1){
        if(number%3==0){
            number/=3;
            res.insert(res.begin(), 3);
        }
        else{
            number-=1;
            res.insert(res.begin(), 1);
        }
    }

    for(unsigned int i : res){
        printf("%u", i);
    }
}