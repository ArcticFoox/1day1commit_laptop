#include <string>
#include <vector>

using namespace std;
int arr[100001] = {0,};

int fibo(int x) {
	if (x <= 1) {
		arr[x] = x;
		return arr[x];
	}
	if (arr[x] != 0) {
		return arr[x];
	}
	arr[x] = fibo(x - 1) + fibo(x - 2);
    arr[x] %= 1234567;
	return arr[x];
}
int solution(int n) {
    int answer = 0;
    answer = fibo(n);
    return answer;
}