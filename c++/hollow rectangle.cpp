#include<iostream>
using namespace std;
int main(){
    
    for(int row =0; row<3; row =row+1 ){
        for (int col =0;col<6;col=col+1){
            if(row==0|| row ==2||col==0||col==5){
            cout<<"*";}
            else{
                cout<<" ";
            }
                
            
        }
        cout<<endl;
        

    }
}