#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main(){
    int n, m;
    cin >> n;
    
    for(int k = 0; k < n; k++){
        cin >> m;
        bool flag = true;
        vector<string> str;
        for(int i = 0; i < m; i++){
            string num;
            cin >> num;
            str.push_back(num);
        }

        sort(str.begin(), str.end());

        for(int i = 0; i < str.size() - 1; i++){
            flag = true;
            if(str[i].length() > str[i + 1].length()) continue;
            if(str[i] == str[i + 1].substr(0, str[i].length())){
                flag = false;
                break;
            }
        }

        if(flag)
            cout << "Yes\n";
        else
            cout << "No\n";

    }
    return 0;
}
//https://velog.io/@minseojo/%EB%B0%B1%EC%A4%80-5052.-%EC%A0%84%ED%99%94%EB%B2%88%ED%98%B8-%EB%AA%A9%EB%A1%9D-%EB%AC%B8%EC%A0%9C%ED%92%80%EC%9D%B4-c-string
//https://yabmoons.tistory.com/397