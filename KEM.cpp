#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

struct student{
    string name;
    int korea;
    int english;
    int math;
};

bool compare(const student &a, const student &b){
    if(a.korea == b.korea){
        if(a.english == b.english){
            if(a.math == b.math){
                return a.name < b.name;
            }
            else return a.math > b.math;
        }
        else return a.english < b.english;
    }
    else return a.korea > b.korea;
}

int main(){
    int n;
    cin >> n;
    vector<student> stu(n);
    for(int i = 0; i < n; i++){
        cin >> stu[i].name >> stu[i].korea >> stu[i].english >> stu[i].math; 
    }

    sort(stu.begin(), stu.end(), compare);

    for(int i = 0; i < n; i++){
        cout << stu[i].name << "\n";
    }
    return 0;
}