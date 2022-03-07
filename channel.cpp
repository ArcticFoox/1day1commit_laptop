#include<iostream>
using namespace std;

int main(){
    int n;
    int idx_1 = -1, idx_2 = -1;
    string s;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> s;

        if(s == "KBS1")
            idx_1 = i;
        else if(s == "KBS2")
            idx_2 = i;
        else
            continue;
    }
    
    int inOrder = idx_1 > idx_2 ? 1 : 0; //KBS1과 KBS2가 정렬되어있는가

    for (int i = 0; i < idx_1; i++)
        cout << "1";

    for (int i = 0; i < idx_1; i++)
        cout << "4";

    for (int i = 0; i < idx_2 + inOrder; i++)
        cout << "1";

    //KBS1보다 한칸 아래

    for (int i = 0; i < idx_2 + inOrder - 1; i++)
        cout << "4";

    cout << "\n";

    return 0;
}