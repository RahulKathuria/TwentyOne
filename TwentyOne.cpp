#include<iostream>
#include<cstdlib>
#include<time.h>
#include<stdio.h>
#include<conio.h>
using namespace std;
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
void print(){
cout<<endl<<"Y";
        delay(6);
        cout<<"o";
        delay(6);
        cout<<"u";
        delay(6);
        cout<<"r";
        delay(6);
        cout<<" ";
        delay(6);
        cout<<"T";
        delay(6);
        cout<<"u";
        delay(6);
        cout<<"r";
        delay(6);
        cout<<"n";
        delay(6);
        cout<<".";
        delay(6);
         cout<<".";
        delay(6);
         cout<<".";
        delay(6);
         cout<<".";
        delay(6);}
int counter1(int count){
     cout<<endl<<"C";
        delay(6);
        cout<<"p";
        delay(6);
        cout<<"u";
        delay(6);
        cout<<"'s";
        delay(6);
        cout<<" ";
        delay(6);
        cout<<"T";
        delay(6);
        cout<<"u";
        delay(6);
        cout<<"r";
        delay(6);
        cout<<"n";
        delay(6);
        cout<<".";
        delay(6);
         cout<<".";
        delay(6);
         cout<<".";
        delay(6);
         cout<<".";
        delay(6);
        delay(6);
        cout<<++count<<" ";
        delay(6);
        cout<<++count<<" ";
        delay(6);
        cout<<++count<<" ";
        return count;

}
int counter2(int count){
     cout<<endl<<"C";
        delay(6);
        cout<<"p";
        delay(6);
        cout<<"u";
        delay(6);
        cout<<"'s";
        delay(6);
        cout<<" ";
        delay(6);
        cout<<"T";
        delay(6);
        cout<<"u";
        delay(6);
        cout<<"r";
        delay(6);
        cout<<"n";
        delay(6);
        cout<<".";
        delay(6);
         cout<<".";
        delay(6);
         cout<<".";
        delay(6);
         cout<<".";
        delay(6);
        delay(6);
        cout<<++count<<" ";
        delay(6);
        cout<<++count<<" ";
        return count;

}
int counter3(int count){
     cout<<endl<<"C";
        delay(6);
        cout<<"p";
        delay(6);
        cout<<"u";
        delay(6);
        cout<<"'s";
        delay(6);
        cout<<" ";
        delay(6);
        cout<<"T";
        delay(6);
        cout<<"u";
        delay(6);
        cout<<"r";
        delay(6);
        cout<<"n";
        delay(6);
        cout<<".";
        delay(6);
         cout<<".";
        delay(6);
         cout<<".";
        delay(6);
         cout<<".";
        delay(6);
        delay(6);
        cout<<++count<<" ";
        return count;

    }
main(){
     char ch;


        int count =0,input;
x:
    count=0;
        cout<<"Press 0 for user's turn first"<<endl;
        cout<<"Pres 1 for Cpu's turn first"<<endl;
        cin>>input;

    cout<<" The first person must start at 1."<<endl<<"Each person may say one, two, or three numbers per turn,"<<endl ;
    cout<<"and the numbers must be in counting order."<<endl;
    cout<<"Each person must start with the number after"<<endl<<" the last one that the other person said."<<endl;
    cout<<"For example, the first person can say '1', or '1, 2', or '1, 2, 3.' "<<endl;
    cout<<"If the first person says '1, 2', then the second person could say "<<endl<<"'3' or '3, 4', or '3, 4, 5'"<<endl;
    cout<<"Whoever says '20' wins the game."<<endl;
if(input==0){

cout<<"Now your turn";

for(int i=0;i<3;i++){
 ch=getch();
 if(ch=='\r'){
    break;
 }

    count++;
    delay(6);
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
    delay(6);
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
    delay(6);
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
    delay(6);
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
    delay(6);
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
ch=getch();
        cout<<"You Lost the game"<<endl<<"press 1 to try again";
        cin>>input;

        goto x;
}
        if(input==1){
            count=0;
            count=(rand()%3)+1;
            if(count==1){
                cout<<count;
            }if(count==2){
            cout<<count-1;
            delay(6);
            cout<<count;
            }
            if(count==3){
                cout<<count-2;
                delay(6);
                cout<<count-1;
                delay(6);
                cout<<count;
            }






        }





}
