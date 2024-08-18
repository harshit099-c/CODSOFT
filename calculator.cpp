#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    float a,b;
    cout<<"Enter First Number:";
    cin>>a;
    cout<<"Enter Second Number:";
    cin>>b;
    char choice;
    cin>>choice;
    switch(choice){
    case '+':
        cout<<"addition Of Two Numbers are: "<<a+b;
        break;
    case '-':
        cout<<"Subtraction Of Two Numbers are:" <<a-b;
        break;
    case '*':
        cout<<"Multiplication Of Two Numbers are:"<<a*b;
        break;
    case '/':
        cout<<"Division of Two Numbers are:"<<a/b;
        break;
    default :
        cout<<"Invalid choice";
    
    }
return 0;

}