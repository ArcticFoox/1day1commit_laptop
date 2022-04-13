#include<iostream>
using namespace std;

int main(){
    int max = 0;
    int n;
    float num, sum = 0;
    float arr[1000];
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> num;
        arr[i] = num;
        if(num > max){
            max = num;
        }
    }

    for(int i = 0; i < n; i++){
        arr[i] = (arr[i]/max) * 100;
        sum += arr[i];
    }

    cout << sum / n;
    return 0;
}

// #include<stdio.h>
// int main(){
// 	int n, temp, sum=0, max=0;
// 	scanf("%d", &n);
// 	for(int i=0;i<n;i++){
// 		scanf("%d", &temp), sum+=temp;
// 		if(max<temp) max=temp;
// 	}
// 	printf("%g", (double)sum/n/max*100);
// }