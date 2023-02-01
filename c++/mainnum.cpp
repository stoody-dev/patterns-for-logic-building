#include<iostream>
using namespace std;
int main(){
    
    int i;
    int j;
    cout<<"enter rows and columns";
    cin>>i;
    cin>>j;


    for(int row =0; row<i; row =row+1 ){
        for (int col =0;col<j;col=col+1){
            if(row==0|| row ==i-1||col==0||col==j-1){
            cout<<"4 ";}
            else if(row==1|| row ==i-2||col==1||col==j-2){
                cout<<"3 ";}
            else if(row==2|| row ==i-3||col==2||col==j-3){
                cout<<"2 ";}
            else{
                cout<<"1 ";
            }    
            
                
            
                
            
        }
        cout<<endl;
        

    }
    
}