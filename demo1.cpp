#include<bits/stdc++.h>
using namespace std;

string vote(int x){
    if(x<18){
        return "Cannot vote" ;
    }
    else{
        return "Can vote";
    }
}

int main(){
    int age;
    cin >> age;
    cout << vote(age);
    return 0;
}