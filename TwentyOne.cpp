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
            delay(50);
            cout<<"o";
            delay(50);
            cout<<"u";
            delay(50);
            cout<<"r";
            delay(50);
            cout<<" ";
            delay(50);
            cout<<"T";
            delay(50);
            cout<<"u";
            delay(50);
            cout<<"r";
            delay(50);
            cout<<"n";
            delay(50);
            cout<<".";
            delay(50);
             cout<<".";
            delay(50);
             cout<<".";
            delay(50);
             cout<<".";
            delay(50);}

            void printCpu(){
            cout<<endl<<"C";
            delay(50);
            cout<<"p";
            delay(50);
            cout<<"u";
            delay(50);
            cout<<"'s";
            delay(50);
            cout<<" ";
            delay(50);
            cout<<"T";
            delay(50);
            cout<<"u";
            delay(50);
            cout<<"r";
            delay(50);
            cout<<"n";
            delay(50);
            cout<<".";
            delay(50);
             cout<<".";
            delay(50);
             cout<<".";
            delay(50);
             cout<<".";
            delay(50);}

    int counter1(int count){
         cout<<endl<<"C";
            delay(50);
            cout<<"p";
            delay(50);
            cout<<"u";
            delay(50);
            cout<<"'s";
            delay(50);
            cout<<" ";
            delay(50);
            cout<<"T";
            delay(50);
            cout<<"u";
            delay(50);
            cout<<"r";
            delay(50);
            cout<<"n";
            delay(50);
            cout<<".";
            delay(50);
             cout<<".";
            delay(50);
             cout<<".";
            delay(50);
             cout<<".";
            delay(50);
            delay(50);
            cout<<++count<<" ";
            delay(50);
            cout<<++count<<" ";
            delay(50);
            cout<<++count<<" ";
            return count;

    }
    int counter2(int count){
         cout<<endl<<"C";
            delay(50);
            cout<<"p";
            delay(50);
            cout<<"u";
            delay(50);
            cout<<"'s";
            delay(50);
            cout<<" ";
            delay(50);
            cout<<"T";
            delay(50);
            cout<<"u";
            delay(50);
            cout<<"r";
            delay(50);
            cout<<"n";
            delay(50);
            cout<<".";
            delay(50);
             cout<<".";
            delay(50);
             cout<<".";
            delay(50);
             cout<<".";
            delay(50);
            delay(50);
            cout<<++count<<" ";
            delay(50);
            cout<<++count<<" ";
            return count;

    }
    int counter3(int count){
         cout<<endl<<"C";
            delay(50);
            cout<<"p";
            delay(50);
            cout<<"u";
            delay(50);
            cout<<"'s";
            delay(50);
            cout<<" ";
            delay(50);
            cout<<"T";
            delay(50);
            cout<<"u";
            delay(50);
            cout<<"r";
            delay(50);
            cout<<"n";
            delay(50);
            cout<<".";
            delay(50);
             cout<<".";
            delay(50);
             cout<<".";
            delay(50);
             cout<<".";
            delay(50);
            delay(50);
            cout<<++count<<" ";
            return count;

        }
    main(){
         char ch;


            int count =0,input,input1;
    delay(200);
        cout<<" The first person must start at 1."<<endl;
        delay(1000);
        cout<<"Each person may say one, two, or three numbers per turn,"<<endl ;
        delay(2000);
        cout<<"and the numbers must be in counting order."<<endl;
        delay(2000);
        cout<<"Each person must start with the number after"<<endl;
        delay(2000);
        cout<<"The last one that the other person said."<<endl;
        delay(2000);
        cout<<"For example, the first person can say '1', or '1, 2', or '1, 2, 3.' "<<endl;
        delay(4000);
        cout<<"If the first person says '1, 2', then the second person could say "<<endl;
        delay(4000);
        cout<<"'3' or '3, 4', or '3, 4, 5'"<<endl;
        delay(3000);
        cout<<"Whoever says '20' wins the game."<<endl;
        delay(4000);
        x:
        count=0;
            cout<<"Press 0 for user's turn first"<<endl;
            cout<<"Pres 1 for Cpu's turn first"<<endl;
            cin>>input;

    if(input==0){

    cout<<"Now your turn";

    for(int i=0;i<3;i++){
     ch=getch();
     if(ch=='\r'){
        break;
     }

        count++;
        delay(50);
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
        delay(50);
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
        delay(50);
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
        delay(50);
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
        delay(50);
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
    delay(50);
    cout<<" "<<"21"<<endl;
            cout<<"You Lost the game"<<endl<<"press 1 to try again";
            cin>>input1;
            if(input1==1)goto x;
            else exit(0);
    }
            if(input==1){
                count=0;
                printCpu();
                count=(rand()%3)+1;
                for(int i=1;i<=count;i++){
                        cout<<i<<" ";
                        delay(50);}
    while(count<=21){
    int break1=0,break2=0;
        print();

    for(int i=0;i<3;i++){
     ch=getch();
     if(ch=='\r'){
        break;
     }

        count++;
        delay(50);
        cout<<count<<" ";
        if(count==20){
                printCpu();
                delay(50);
                cout<<" "<<"21"<<" ";
        cout<<"Congratulations!!You Won"<<endl;
         break1=1;
            break;
            }
            if(count==21){
                cout<<"OOPS!! You Lost "<<endl;
                break2=1;
                break;
            }
    }
    if(break1==1||break2==1){
        cout<<"Press 1 to try again";
    cin>>input1;
    if(input1==1)goto x;
    else {exit(0);}
            break;}

    int flag=1;
    int count1;

    for(int i=count+1;i<=count+3;i++){
        if(i%4==0){count1=i;
                flag=0;
                break;}


    }

    if(flag==1){int random = rand()%3+1;
    printCpu();
    for(int i=count+1;i<=count+random;i++){
         if(count==21){
            cout<<"Congratulations!!You Won"<<endl;
            break;
        }
        delay(100);
        cout<<i<<" ";

    }
    count+=random;

    }
    if(flag==0){
            printCpu();
        for(int i=count+1;i<=count1;i++){
             if(count==21){
            cout<<"Congratulations!!You Won"<<endl;
            break;
        }
        delay(100);
        cout<<i<<" ";
        count=count1;

        }

    }

            }

    }
}






