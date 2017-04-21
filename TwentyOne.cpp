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
void print(){
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
        delay(200);}
int counter1(int count){
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
        cout<<++count<<" ";
        return count;

}
int counter2(int count){
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
        return count;

}
int counter3(int count){
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
        return count;

    }
main(){
     char ch;
    int count =0,input,value;
    cout<<"Press 1 for  cpu's turn first"<<endl;
    cout<<"press 0 for user's turn first"<<endl;
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
        count = counter1(count);
         }
if(count==2){
        count = counter2(count);
       }
 if(count==3){
       count = counter3(count);
       }


print();

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
      count =  counter1(count);}
if(count==6){
      count = counter2(count);
       }
 if(count==7){
     count = counter3(count);
        }

print();


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
       count =  counter1(count);}
if(count==10){
       count = counter2(count);
       }
 if(count==11){
       count = counter3(count);

 }
print();
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
        count = counter1(count);}
if(count==14){
       count = counter2(count);
       }
 if(count==15){
       count =counter3(count);

 }
print();

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
       count = counter1(count);}
if(count==18){
       count =counter2(count);
       }
 if(count==19){
       count = counter3(count);

 }
print();
        cout<<"You Lost the game"<<endl<<"press 1 to try again";
        cin>>input;
        if(input==1)
        goto x;
    }
    else cout<<"Coming soon...";



}
