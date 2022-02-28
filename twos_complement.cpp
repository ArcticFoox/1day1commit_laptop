#include<stdio.h>
using namespace std;

int main(){
    int a;
    unsigned int b = 4294967296;
    int i;  
    int tmp[32];
    int twos[32];
    int cnt = 0;

    scanf("%d", &a);

    for(i=0;i<32;i++){       
        if(a&b) twos[i]=1;
        else twos[i]=0;
        b=b>>1;
    }   
    for(i=0;i<32;i++){
        tmp[i] = twos[i];    
    }
    for(i=0;i<32;i++){
        printf("%d", tmp[i]);    
    }
    printf("\n");
    for(i=0;i<32;i++){
        if(twos[i]==1) twos[i]=0;
        else twos[i]=1;
    }
    for(i=31;i>=0;i--){
        if(twos[i]==1) twos[i]=0;
        else {
            twos[i]=1;
            break;
        }
    }
    for(i=0;i<32;i++){
        if(tmp[i] != twos[i]){
            cnt++;
        }    
    }
    for(i=0;i<32;i++){
        printf("%d", twos[i]);    
    }
    printf("\n");
    printf("%d", cnt);
    return 0;
}