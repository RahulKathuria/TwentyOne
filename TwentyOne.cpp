#include<iostream>
#include<cstdlib>
#include<time.h>
#include<conio.h>
using namespace std;
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
main(){
     char ch;
    int count =0;
    cout<<" Press any character(min-> 1 , Max-> 3)";
for(int i=0;i<3;i++){
 ch=getch();
 if(ch=='\r'){
    break;
 }



    count++;
    delay(300);
    cout<<count;
}
if(count==1){
         cout<<endl<<"C";
        delay(200);
        cout<<"p";
        delay(200);
        cout<<"u";
        delay(200);
        cout<<"'s";
        delay(200);
        cout<<" ";
        delay(200);
        cout<<"T";
        delay(200);
        cout<<"u";
        delay(200);
        cout<<"r";
        delay(200);
        cout<<"n";
        delay(200);
        cout<<".";
        delay(200);
         cout<<".";
        delay(200);
         cout<<".";
        delay(200);
         cout<<".";
        delay(200);
        delay(300);
        cout<<++count;
        delay(300);
        cout<<++count;
        delay(300);
        cout<<++count;}
if(count==2){
        cout<<endl<<"C";
        delay(200);
        cout<<"p";
        delay(200);
        cout<<"u";
        delay(200);
        cout<<"'s";
        delay(200);
        cout<<" ";
        delay(200);
        cout<<"T";
        delay(200);
        cout<<"u";
        delay(200);
        cout<<"r";
        delay(200);
        cout<<"n";
        delay(200);
        cout<<".";
        delay(200);
         cout<<".";
        delay(200);
         cout<<".";
        delay(200);
         cout<<".";
        delay(200);
        delay(300);
        cout<<++count;
        delay(300);
        cout<<++count;
        delay(300);
       }
 if(count==3){
        cout<<endl<<"C";
        delay(200);
        cout<<"p";
        delay(200);
        cout<<"u";
        delay(200);
        cout<<"'s";
        delay(200);
        cout<<" ";
        delay(200);
        cout<<"T";
        delay(200);
        cout<<"u";
        delay(200);
        cout<<"r";
        delay(200);
        cout<<"n";
        delay(200);
        cout<<".";
        delay(200);
         cout<<".";
        delay(200);
         cout<<".";
        delay(200);
         cout<<".";
        delay(200);
        delay(300);
        cout<<++count;
        delay(300);
        }

cout<<endl<<"Your Turn"<<endl;
for(int i=0;i<3;i++){
    cin>>ch;
    if(ch=='a'){

        break;

    }
    count++;
    cout<<count;
}
if(count==5){
        cout<<endl<<"Cpu's Turn"<<endl;
        cout<<++count;
        cout<<++count;
        cout<<++count;}
if(count==6){
        cout<<endl<<"Cpu's Turn"<<endl;
        cout<<++count;
        cout<<++count;
       }
 if(count==7){
        cout<<endl<<"Cpu's Turn"<<endl;
        cout<<++count;
        }




}
