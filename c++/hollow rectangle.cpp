#include<iostream>
using namespace std;
int main(){
    cout<<"enter rows and columns";
    int i;
    int j;  
    cin>>i;
    cin>>j;

    
    for(int row =0; row<=i; row =row+1 ){
        for (int col =0;col<=j;col=col+1){
            if(row==0|| row ==i||col==0||col==j){
            cout<<"* ";}
            else{
                cout<<"  ";
            }
                
            
        }
        cout<<endl;
        

    }
    
}