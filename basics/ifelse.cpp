#include<iostream>
using namespace std;

int main(){
    int age;
    // cout << "Enter your age:" << endl;
    cin >> age;
    if(age>=18){
        cout << "Your age is " << age << "," << "You can vote";
    }
    else
    {
        cout << "Your age is " << age << "," << "You cannot vote";

    }
}