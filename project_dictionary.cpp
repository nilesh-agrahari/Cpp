#include<iostream>
#include<fstream>
#include<strings.h>
#include<stdio.h>
#include<conio.h>
using namespace std;
class dictionary{
    char name[20];
    char mean[80];
    public:
    void input()
    {
        cout<<"enter word "<<endl;
        cin>>name;
        cout<<"enter meaning"<<endl;
        cin>>mean;

    }
    void output(string key)
    {
        
        if(key==name){
            cout<<mean;
        }
    }
};
void create(string fname){
fstream f1;
dictionary d1;
f1.open(fname,ios::binary|ios::out);
char c;
do{
d1.input();
f1.write((char*)&d1,sizeof(d1));
cout<<"want to add more (y/n) ";
fflush(stdin);
cin>>c;
}while(c=='y');
f1.close();

}
void search(string fname){
fstream f2;
dictionary d1;
string key;
cout<<"enter the word ";
cin>>key;
f2.open(fname,ios::binary|ios::in);
while(f2.read((char*)&d1,sizeof(d1)))
{

    d1.output(key);
}
f2.close();
}
int main()
{
    int ch=0;
    string fname;
            cout<<"enter file name ";
            cin>>fname;
    while(ch!=3){
    cout<<"1..for create dictionary "<<endl;
    cout<<"2..for search word "<<endl;
    cout<<"3..for exit"<<endl;
    cin>>ch;
    switch(ch){
        case 1:{
            create(fname);
            break;
        }
        case 2:
        {
            cout<<"l";
            search(fname);
            cout<<"l";
            break;

        }
        default:
        {
            cout<<"invalid choice";
        }
    }
    }
}