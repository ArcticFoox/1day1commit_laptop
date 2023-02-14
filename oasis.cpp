#include<iostream>
#include<stack>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    stack<pair<int, int>> st;
    int N;
    cin >> N;

    long long answer = 0;
    for(int i = 0; i < N; i++){
        int input;
        cin >> input;

        int cnt = 1;
        while(!st.empty() && st.top().first <= input){
            answer += st.top().second;
            if(st.top().first == input){
                cnt += st.top().second;
            }
            st.pop();
        }

        if(!st.empty()){
            answer++;
        }

        st.push({input, cnt});
    }
    cout << answer;
}