#include<iostream>
using namespace std;
int choose(char a,char b,char c);
int grade();
void largest(int a, int b);
void largest(int a,int b, int c);
int fibonacci(int n);
int main(){
    int y,k,z;
    char choice=choose(1,2,3);
switch(choice){
    case '1':
        grade();
        break;
    case '2':
    int x;
    cout<<"choose how many numbers you want to compare 2 or 3:";
    cin>>x;
     if (x==2){
        cout<<"Enter two numbers to compare:";
        cin>>y>>k;
        largest(y,k);
     }
     else{
     cout<<"Enter three numbers to compare:";
     cin>>y>>k>>z;
        largest(y,k,z);
     }
        break;
    case '3':
        fibonacci(5);
        break;
    default:
        cout<<"Invalid choice"<<endl;
}

    return 0;
}
int choose(char a,char b,char c){
char choice;
 cout<<"What do want to do? 1) calculate Grade \n 2)find the largest number \n 3) find fibonacci series"<<endl;
 cin>>choice;
 return choice;

}

int grade(){
int score;
cout<<"Enter your score:";
cin>>score;
if (score>=90)
 cout<<"your grade is A";
else if (score >=80 && score <90)
 cout<<"your grade is B";
else if (score >=70 && score <80)
 cout<<"your grade is C";
else if (score <70 && score >50)
    cout<<"your grade is D";
else
    cout<<"your grade is F";
return score;
}

void largest(int a, int b){
if(a>b)
    cout<<a<<"is largest";
else
    cout<<b<<"is largest";
}
void largest(int a,int b, int c){
if (a>b && b>c)
    cout<<a<<"is the largest";
else if(b>a)
cout<<b <<"is the largest";
else
    cout<<c<< "is the largest";
}


int fibonacci(int n){
int first=0,second=1,next;
for (int i=0;i<n;i++){
    if(i<=1)
        next=i;
    else{
        next=first+second;
        first=second;
        second=next;
    }
    cout<<next<<" ";
}
return 0;
}
