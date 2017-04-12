#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
main(){
    char ch;
    int count=0;
cout<<" Press any character(min-> 1 , Max-> 3)";
for(int i=0;i<3;i++){
    cin>>ch;
    if(ch=='a'){

        break;

    }
    count++;
    cout<<count;
}
if(count==1){
        cout<<endl<<"Cpu's Turn"<<endl;
        cout<<++count;
        cout<<++count;
        cout<<++count;}
if(count==2){
        cout<<endl<<"Cpu's Turn"<<endl;
        cout<<++count;
        cout<<++count;
       }
 if(count==3){
        cout<<endl<<"Cpu's Turn"<<endl;
        cout<<++count;
        }


}
