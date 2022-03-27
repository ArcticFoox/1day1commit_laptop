#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

bool check[11];
char sign[11];
int n;
vector<string>ans;
bool SC(char a, char b, char oper){
    if(oper == '<'){
        if(a > b) return false;
    }
    else{
        if(a < b) return false;
    }
    return true;
}

void Back(int index, string num){
    if(index == (n+1)){
        ans.push_back(num);
        return;
    }

    for(int i = 0; i <= 9; i++){
        if(check[i]) continue;

        if(index == 0 || SC(num[index - 1], i + '0', sign[index - 1])){
            check[i] = true;
            Back(index + 1, num + to_string(i));
            check[i] =false; // backtracking 때문?
        }
    }
}

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> sign[i];
    }    
    Back(0, "");
    sort(ans.begin(), ans.end());
    cout << ans[ans.size() - 1] << "\n" << ans[0];
    return 0;
}

//https://gdlovehush.tistory.com/337
//https://youngest-programming.tistory.com/558