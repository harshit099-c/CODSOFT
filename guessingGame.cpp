#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Welcome To Number Guessing Game"<<endl;
    cout<<"Select Difficulty Level"<<endl;
    int difficulty;
    cin>>difficulty;
    switch(difficulty){
        case 1:
        cout<<"Easy level"<<endl;
        break;
        case 2:
        cout<<"Moderate Level"<<endl;
        break;
        case 3:
        cout<<"Hard Level"<<endl;
        break;
        deafault :
        cout<<"Invalid level"<<endl;
    }
    srand(time(0));
    int range=100;
    int count=1;
    int ComputerNo;
    while(count--){
        ComputerNo=rand()%range;
        
    }
    int playerNo;
    

    if(difficulty==1){
        cout<<"You Have 5 Chances"<<endl;
        int chances=5;
        for(int i=0;i<=5;i++){
            cin>>playerNo;
            if(playerNo==ComputerNo){
                cout<<"You Won"<<endl;
                break;
            }
            else{
                cout<<"Player Number is not equal to computer number"<<endl;
                if(playerNo>ComputerNo){
                    cout<<"Player No is greater than computer number"<<endl;
                }
                else{
                    cout<<"Player No is smaller"<<endl;
                }
                chances--;
            }
            if(chances==0){
                cout<<"COmputer Number is: "<<ComputerNo<<endl;
                cout<<"Better Luck Next Time"<<endl;
            }
        }
    }
    else if(difficulty==2){
        cout<<"You Have 3 chances"<<endl;
        int chances=3;
        for(int i=1;i<=3;i++){
            cin>>playerNo;
            if(playerNo==ComputerNo){
                
                cout<<"You Won!";
                break;
            }
            else{
                cout<<"Player Number is not equal to computer number"<<endl;
                if(playerNo<ComputerNo){
                    cout<<"Player No is smaller than computer Number"<<endl;
                }
                else{
                    cout<<"Player No is greater than computer number"<<endl;
                }
                chances--;
            }
            if(chances==0){
                cout<<"COmputer Number is: "<<ComputerNo<<endl;
                cout<<"Better Luck Next Time"<<endl;
            }

            
        }
    }
    else if(difficulty==3){
        cout<<"You Have 1 chance"<<endl;
        int chances=1;
        for(int i=1;i<=1;i++){
             cin>>playerNo;
            if(playerNo==ComputerNo){
                
                cout<<"You Won!"<<endl;
            }
            else{
                cout<<"Player Number is not equal to computer number"<<endl;
                if(playerNo<ComputerNo){
                    cout<<"Player No is smaller"<<endl;
                }
                else{
                    cout<<"Player No is greater than computer number"<<endl;
                }
                chances--;
            }
            if(chances==0){
                 cout<<"COmputer Number is: "<<ComputerNo<<endl;
                cout<<"Better Luck Next Time"<<endl;
            }
        }
    }
    cout<<"Thanks For Playing"<<endl;

return 0;
}