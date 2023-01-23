#include <iostream>

using namespace std;

int div(int x){
    if(x%2 == 1){
        return x/2 + 1;
    }
    else{
        return x/2;
    }
}

int solution(int n, int a, int b)
{
    int answer = 0;
    
    while(true){
        a = div(a);
        b = div(b);
        answer++;
        if(a == b){
            break;
        }
    }
    

    return answer;
}

// int solution(int n, int a, int b)
// {
//     a--;
//     b--;
//     int answer=0;
//     while(a!=b){
//         a=a/2;
//         b=b/2;
//         answer++;
//     }
//     return answer;
// }