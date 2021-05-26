#include<iostream>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{   int h,m,sec;
    cout<<"\n enter the time (hh mm sec): ";
    cin>>h>>m>>sec;
    cout<<flush;
    
    while(h<24)
    {
    while(m<60)
    {
    while(sec<60)
    {    
        sleep(1);
        sec++;
        system ("CLS");
        cout<<"HH:MM:SS"<<"\n";
        cout<<h<<" : "<<m<<" : "<<sec<<"\n";
    }
    m++;
    sec=0;
    }
    h++;
    if(h==24)
    {h=0;}
    m=0;  
   }
   
getch();
}