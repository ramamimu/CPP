#include <stdio.h>
using namespace std;

int main(){
    unsigned int n;
    scanf("%u", &n);
    while(n>=2){
        n%2==0? printf("1"):printf("7");
        n%2==0? n-=2:n-=3;
    }
    return 0;
}

/*
by number
0 = 6
1 = 2
2 = 5
3 = 5
4 = 4
5 = 5
6 = 6
7 = 3
8 = 7
9 = 6
/////
5 = 71 | 17
6 = 111
7 = 711
by arrangement fragments
2 = 1       // even
3 = 7       // odd
4 = 4
5 = 2,3,5
6 = 0 6,9
7 = 8
*/
