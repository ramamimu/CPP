#include <cstdio>
#include <math.h>

int pangkat(int x, int y){
	 int mod=0;
        if (y==1){
            mod=x;
        } else if (x%10==1){
            mod=1;
        } else if (x%10==0){
            mod=0;
        } else if (x%20==12){	//done
            mod=6;
        } else if (x%10==2){
            if(y==2){
                mod=4;
            } else if(y>2){
                mod=6;
            }
    	} else if(x%20==13){		//3 done
            mod=3;
        } else if (x%10==3){
            if(y%2==0){
                mod=7;
            } else if(y%2==1){
                mod=3;
            }
        } else if (x%10==4){	//4 done
            mod=6;
        } else if (x%10==5){	//5 done
            mod=5;
        } else if (x%10==6){	//6 done
            mod=6;
        } else if (x%20==17){ 	//7 done
            mod=7;
		} else if (x%10==7){
            if(y%2==0){
                mod=3;
            } else if(y%2==1){
                mod=7;
            }
    	} else if (x%20==18){	//8 done
    		if(y%2==0){
                mod=4;
            } else if(y%2==1){
                mod=6;
            }
        } else if (x%10==8){	
                mod=6;
        } else if (x%10==9){	//9 done
                mod=9;
        } else if (x%10==0){	//10 done
            mod=0;
        }
	return mod;
}

int main (){
	int n;
	scanf("%d", &n);
	int arr1[n]={};
	for (int i=0; i<n; i++){
		scanf("%d", &arr1[i]);
//		arr1[i]%=10;
	}
	int arr2[n]={};
	int sum;
	for (int i=0; i<n; i++){
		scanf("%d", &arr2[i]);
//		arr2[i]%=10;
		sum+= pangkat(arr1[i],arr2[i]);
	}
	if (sum%2==0){
		printf("0\n");
	} else {
		printf("1\n");
	}
	return 0;
}