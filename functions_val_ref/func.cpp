#include<bits/stdc++.h>

using namespace std;

void passval(int a){
    cout << a << endl;
    a += 10;
    cout << a << endl;
    a += 10;
    cout << a << endl;

}

void passrefn(int &a){
    cout << a << endl;
    a += 10;
    cout << a << endl;
    a += 10;
    cout << a << endl;

}

int main(){

    int s1;
    cin >> s1;

    passrefn(s1);
    cout << s1;

    return 0;
    
}

//passing by value will not edit the original value it will update the copy of it , to update the original value we need to 
//pass value by reference with & sign attached to the variable.

