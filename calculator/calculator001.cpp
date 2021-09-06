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
        void inputSimple(){
            cout<<"Enter the values :"<<endl;
            cin>>a>>b;
        }
        void inputSimple(int x,int y){
            a=x,b=y;
        }

        void solutionSimple(){
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
        void inputScintific(){
            cout<<"Enter the values of a and b :"<<endl;
            cin>>a>>b;
        }
        void inputScintific(int x,int y){
            a=x,b=y;
        }

        void solutionScintific(){
            cout<<"sin(a) : "<<sin(a)<<endl;
            cout<<"cos(a) : "<<cos(a)<<endl;
            cout<<"tan(a) : "<<tan(a)<<endl;
            cout<<"sin(b) : "<<sin(b)<<endl;
            cout<<"cos(b) : "<<cos(b)<<endl;
            cout<<"tan(b) : "<<tan(b)<<endl;
        }
};

class hybridCalculator : public simplecalculator,public scintificCalculator{
   int m,n;
   public:  
        void inputHybrid(){
            cout<<"Enter the values of a and b :"<<endl;
            cin>>m>>n;
            inputScintific(m,n);
            inputSimple(m,n);
        }
};

int main(){
    cout<<"Welcome to the calculator"<<endl;
    while(true){
        cout<<"0.Exit"<<endl;
        cout<<"1.Simple calculation"<<endl;
        cout<<"2.Scintific calculation"<<endl;
        cout<<"3.Hybrid calculation"<<endl;
        int n; cin>>n;

        switch(n){
            case 0:{
                cout<<"Thanks for using "<<endl;
                return 0;
            }

            case 1:{
                simplecalculator obj1;
                obj1.inputSimple();
                obj1.solutionSimple();
                break;
            }

            case 2:{
                scintificCalculator obj2;
                obj2.inputScintific();
                obj2.solutionScintific();
                break;
            }
            case 3:{
                hybridCalculator obj3;
                obj3.inputHybrid();
                obj3.solutionSimple();3
                obj3.solutionScintific();
            }

        }
    }

}