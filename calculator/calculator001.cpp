#include<bits/stdc++.h>
using namespace std;

class simplecalculator{
    float a,b,res;
    char operation; 
    bool isoutput=true;   
    public:
        simplecalculator(){
            a=0;b=0;res=0;
        }
        simplecalculator(float x,float y){
            a=x;b=y;
        }
        void input(){
            cout<<"Enter the values :"<<endl;
            cin>>a>>b;
            cout<<"Enter the operation :"<<endl;
            cin>>operation;
        }

        void solution(){
            switch(operation){
                case '+':{
                    res=a+b; break;
                }
                case '-':{
                    res=a-b; break;
                }
                case '*':{
                    res=a*b; break;
                }
                case '/':{
                    if(b==0) cout<<"invalid b"<<endl,isoutput=false;
                    else res=a/b;
                    break;
                }
                default :{
                    cout<<"Enter the values again with valid operation."<<endl;
                    isoutput=false;
                }
            }

        }

        void print(){
            if(isoutput) cout<<res<<endl;
        }

};

int main(){
    cout<<"Welcome to the calculator"<<endl;
    while(true){
        cout<<"0.Exit"<<endl;
        cout<<"1.Simple calculation"<<endl;
        cout<<"2.Scintific calculation"<<endl;
        int n; cin>>n;

        switch(n){
            case 0:{
                cout<<"Thanks for using "<<endl;
                return 0;
            }

            case 1:{

            }

            case 2:{

            }

        }
    }

}