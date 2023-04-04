#include <string>
#include <vector>
using namespace std;

int answer = 0;
void get_target_number(vector<int> numbers, int target, int sum, int index){
    if (index == numbers.size()){
        if (sum == target) {
            answer++;
        }
        return;
    }
    get_target_number(numbers, target, sum + numbers[index], index + 1);
    get_target_number(numbers, target, sum - numbers[index], index + 1);
}

int solution(vector<int> numbers, int target) {
    get_target_number(numbers, target, 0, 0);
    return answer;
}

//https://sindh718.tistory.com/107
//https://velog.io/@euneun/%ED%94%84%EB%A1%9C%EA%B7%B8%EB%9E%98%EB%A8%B8%EC%8A%A4-%ED%83%80%EA%B2%9F%EB%84%98%EB%B2%84C-BFSDFS