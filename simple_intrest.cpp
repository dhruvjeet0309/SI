#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

class simple_intrest{
    public:
    float priciple,S_I,time,rate;

    public:
    void getvalue();
    void for_principle();
    void for_rate();
    void for_SI();
    void for_time();
    void diplay();
    void cal_SI(float p,float r,float t);
    void cal_P(float si,float r,float t);
    void cal_R(float si,float p,float t);
    void cal_T(float si,float p,float r);
};

int main(){
    int val;
    simple_intrest s_i;

    s_i.getvalue();
    return 0;
}

void simple_intrest::getvalue(){
    int val;
    simple_intrest s_i;
    cout<<"\nWhat u wanttt : \n"<<endl;
    cout<<"1.Simple Intrest\t2.Principle\n\n3.Rate\t\t\t4.Time"<<endl;
    cin>>val;
    
    switch (val)
    {
    case 1:
        s_i.for_SI();
        break;
    case 2:
        s_i.for_principle();
        break;
    case 3:
        s_i.for_rate();
        break;
    case 4:
        s_i.for_time();
        break;            
    default:
        if(val>4)
        cout<<"Invalide input"<<endl;
        cout<<"Enter b/w 1 to 4"<<endl;
        break;
    }
}

void simple_intrest::for_SI(){
    simple_intrest s_i;
    cout<<"Enter Principle : "<<endl;
    cin>>s_i.priciple;
    cout<<"Enter Rate : "<<endl;
    cin>>s_i.rate;
    cout<<"Enter Time : "<<endl;
    cin>>s_i.time;
    s_i.cal_SI(s_i.priciple,s_i.rate,s_i.time);
}

void simple_intrest::for_principle(){
    simple_intrest s_i;
    cout<<"Enter S.I : "<<endl;
    cin>>s_i.S_I;
    cout<<"Enter Rate : "<<endl;
    cin>>s_i.rate;
    cout<<"Enter Time : "<<endl;
    cin>>s_i.time;
    s_i.cal_P(s_i.S_I,s_i.rate,s_i.time);
}

void simple_intrest::for_rate(){
    simple_intrest s_i;
    cout<<"Enter S.I : "<<endl;
    cin>>s_i.S_I;
    cout<<"Enter Principle: "<<endl;
    cin>>s_i.priciple;
    cout<<"Enter Time : "<<endl;
    cin>>s_i.time;
    s_i.cal_R(s_i.S_I,s_i.priciple,s_i.time);
}


void simple_intrest::for_time(){
    simple_intrest s_i;
    cout<<"Enter S.I : "<<endl;
    cin>>s_i.S_I;
    cout<<"Enter Principle: "<<endl;
    cin>>s_i.priciple;
    cout<<"Enter Rate : "<<endl;
    cin>>s_i.rate;
    s_i.cal_T(s_i.S_I,s_i.priciple,s_i.rate);
}

void simple_intrest::cal_SI(float p,float r,float t){
    float Sim=(p*r*t)/100;
    cout<<"Your Simple intrest = "<<Sim;
    getch();
    system("cls");
    getvalue();
}

void simple_intrest::cal_R(float si,float p,float t){
    float Rat = (si*100)/(p*t);
    cout<<"Your Rate = "<<Rat;
    getch();
    system("cls");
    getvalue();
}

void simple_intrest::cal_P(float si,float r,float t){
    float Pri = (si*100)/(r*t);
    cout<<"Your Principle = "<<Pri;
    getch();
    system("cls");
    getvalue();
}

void simple_intrest::cal_T(float si,float p,float r){
    float Tim = (si*100)/(r*p);
    cout<<"Your Time = "<<Tim;
    getch();
    system("cls");
    getvalue();
}