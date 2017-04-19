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
    int count =0,input,value;
    cout<<"Press 1 for  user's turn first"<<endl;
    cout<<"press 0 for cpu's turn first"<<endl;
    cin>>value;
    if(value==0){
    x:
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
        cout<<++count<<" ";
        delay(300);
        cout<<++count<<" ";
        delay(300);
        cout<<++count<<" ";}
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
        cout<<++count<<" ";
        delay(300);
        cout<<++count<<" ";
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
        cout<<++count<<" ";
        delay(300);}


cout<<endl<<"Y";
        delay(200);
        cout<<"o";
        delay(200);
        cout<<"u";
        delay(200);
        cout<<"r";
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

for(int i=0;i<3;i++){
 ch=getch();
 if(ch=='\r'){
    break;
 }

    count++;
    delay(300);
    cout<<" "<<count<<" ";
}
if(count==5){
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
        cout<<++count<<" ";
        delay(300);
        cout<<++count<<" ";
        delay(300);
        cout<<++count<<" ";}
if(count==6){
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
        cout<<++count<<" ";
        delay(300);
        cout<<++count<<" ";
        delay(300);
       }
 if(count==7){
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
        cout<<++count<<" ";
        delay(300);
        }

cout<<endl<<"Y";
        delay(200);
        cout<<"o";
        delay(200);
        cout<<"u";
        delay(200);
        cout<<"r";
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


for(int i=0;i<3;i++){
 ch=getch();
 if(ch=='\r'){
    break;
 }

    count++;
    delay(300);
    cout<<count<<" ";
}
if(count==9){
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
        cout<<++count<<" ";
        delay(300);
        cout<<++count<<" ";
        delay(300);
        cout<<++count<<" ";}
if(count==10){
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
        cout<<++count<<" ";
        delay(300);
        cout<<++count<<" ";
        delay(300);
       }
 if(count==11){
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
        cout<<++count<<" ";
        delay(300);

 }
cout<<endl<<"Y";
        delay(200);
        cout<<"o";
        delay(200);
        cout<<"u";
        delay(200);
        cout<<"r";
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
for(int i=0;i<3;i++){
 ch=getch();
 if(ch=='\r'){
    break;
 }

    count++;
    delay(300);
    cout<<count<<" ";
}
if(count==13){
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
        cout<<++count<<" ";
        delay(300);
        cout<<++count<<" ";
        delay(300);
        cout<<++count<<" ";}
if(count==14){
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
        cout<<++count<<" ";
        delay(300);
        cout<<++count<<" ";
        delay(300);
       }
 if(count==15){
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
        cout<<++count<<" ";
        delay(300);

 }
cout<<endl<<"Y";
        delay(200);
        cout<<"o";
        delay(200);
        cout<<"u";
        delay(200);
        cout<<"r";
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

for(int i=0;i<3;i++){
 ch=getch();
 if(ch=='\r'){
    break;
 }

    count++;
    delay(300);
    cout<<count<<" ";
}
if(count==17){
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
        cout<<++count<<" ";
        delay(300);
        cout<<++count<<" ";
        delay(300);
        cout<<++count<<" ";}
if(count==18){
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
        cout<<++count<<" ";
        delay(300);
        cout<<++count<<" ";
        delay(300);
       }
 if(count==19){
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
        cout<<++count<<" ";
        delay(300);

 }
cout<<endl<<"Y";
        delay(200);
        cout<<"o";
        delay(200);
        cout<<"u";
        delay(200);
        cout<<"r";
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
        cout<<"You Lost the game"<<endl<<"press 1 to try again";
        cin>>input;
        if(input==1)
        goto x;
    }
    else cout<<"Coming soon...";



}
