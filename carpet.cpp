#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer(2);
    
    for(int i = 1; i < (brown-4)/2; i++){
        for(int j = 1; j <= i; j++){
            if((i+j)*2 == brown - 4){
                if(i*j == yellow){
                    answer[0] = i+2;
                    answer[1] = j+2;
                    break;
                }
            }
        }
    }
    return answer;
}