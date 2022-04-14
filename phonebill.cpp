#include<iostream>
using namespace std;

int main(){
    int y, m;
    int y_sum = 0, m_sum = 0;
    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        y_sum = y_sum + (num/30) * 10 + 10;
        m_sum = m_sum + (num/60) * 15 + 15;
    }
    
    if(y_sum < m_sum){
        cout << "Y " << y_sum;
    }
    else if(y_sum == m_sum){
        cout << "Y M " << m_sum;
    }
    else
        cout << "M " << m_sum;
    return 0;
}