#include<iostream>
using namespace std;

int main(){
    int cash;
    int cnt = 0;
    cin >> cash;
    cash = 1000 - cash;
    if(cash / 500){
        cnt += cash / 500;
        cash = cash % 500;
    }
    if(cash / 100){
        cnt += cash / 100;
        cash = cash % 100;
    }
    if(cash / 50){
        cnt += cash / 50;
        cash = cash % 50;
    }
    if(cash / 10){
        cnt += cash / 10;
        cash = cash % 10;
    }
    if(cash / 5){
        cnt += cash / 5;
        cash = cash % 5;
    }
    if(cash / 1){
        cnt += cash / 1;
        cash = cash % 1;
    }

    cout << cnt;
    return 0;
}

// #include<stdio.h>
// int n,r;
// int d[6]={500,100,50,10,5,1};
// int main(){
// 	scanf("%d", &n); n=1000-n;
// 	for(int i=0;i<6;i++){
// 		r+=n/d[i];
// 		n%=d[i];	
// 	} printf("%d", r);
// }