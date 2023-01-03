#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer(2);
    int zero_cnt = 0, try_cnt = 0, sum = 0;
    while(s.size() != 1){
        for(int i = 0; i < s.length(); i++)
            if (s[i] == '1')
                zero_cnt++;
        
        sum += s.length() - zero_cnt;
        
        s = "";
        while(zero_cnt > 0){
            if (zero_cnt % 2 == 0) s += "0";
            else s += "1";
            zero_cnt /= 2;
        }
        try_cnt++;
    }
    answer[0] = try_cnt;
    answer[1] = sum;
    return answer;
}