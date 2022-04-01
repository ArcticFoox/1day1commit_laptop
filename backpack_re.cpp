#include<iostream>
int main(){
    int n, k, w, v;
    scanf("%d%d", &n, &k);
    int dp[k+1] = {};
    for(int i = 1; i <= n; i++){
        scanf("%d%d", &w, &v);
        for(int j = k; j >= w; j--){
            if(dp[j-w] + v > dp[j]){
                dp[j] = dp[j-w]+v;
            }
        }
    }
    printf("%d", dp[k]);
    return 0;
}