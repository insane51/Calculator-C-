#include<bits/stdc++.h>
using namespace std;

class simplecalculator{
    float a,b;
    bool isoutput=true;   
    public:
        simplecalculator(){
            a=0;b=0;
        }
        simplecalculator(float x,float y){
            a=x;b=y;
        }
        void input(){
            cout<<"Enter the values :"<<endl;
            cin>>a>>b;
        }

        void solution(){
            cout<<"a+b : "<<a+b<<endl;
            cout<<"a-b : "<<a-b<<endl;
            cout<<"a*b : "<<a*b<<endl;
            if(b!=0) cout<<"a/b : "<<a/b<<endl;
            else cout<<"b is zero"<<endl;
        }

};

class scintificCalculator{
    int a,b;
    public:
        scintificCalculator(){
            a=0;b=0;
        }
        scintificCalculator(int x,int y){
            a=x;b=y;
        }
        void input(){
            cout<<"Enter the values of a anf b :"<<endl;
            cin>>a>>b;
        }

        void solution(){
            cout<<"sin(a) : "<<sin(a)<<endl;
            cout<<"cos(a) : "<<cos(a)<<endl;
            cout<<"tan(a) : "<<tan(a)<<endl;
            cout<<"sin(b) : "<<sin(b)<<endl;
            cout<<"cos(b) : "<<cos(b)<<endl;
            cout<<"tan(b) : "<<tan(b)<<endl;
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
                simplecalculator obj1;
                obj1.input();
                obj1.solution();
                break;
            }

            case 2:{
                scintificCalculator obj2;
                obj2.input();
                obj2.solution();
                break;
            }

        }
    }

}