#include<iostream>
using namespace std;

int main(){
    int arr[7] = { 0, };
    int max = 0;
    int flag = 0;
    for(int i = 0; i < 3; i++){
        int num;
        cin >> num;
        arr[num]++;
        if(max < num){
            max = num;
        }
    }

    for(int i = 1; i <= 6; i++){
        if(arr[i] == 3){
            flag = 1;
            cout << 10000 + (i * 1000);
            break;
        }
        else if(arr[i] == 2){
            flag = 2;
            cout << 1000 + (i * 100);
            break;
        }
    }

    if(!flag){
        cout << max * 100;
    }
}

// #include <stdio.h>

// int main(void)
// {
//   int a, b, c;
//   int reward;

//   scanf("%d %d %d", &a, &b, &c);
//   if (a == b || b == c || a == c)
//     reward = a == b ? (b == c ? (10 + a) * 10 : 10 + a) : 10 + c;
//   else
//     reward = a > b ? (a > c ? a : c) : (b > c ? b : c);
//   printf("%d", reward * 100);
// }