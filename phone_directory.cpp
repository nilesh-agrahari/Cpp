#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class directory{
int no;
string name;
public:
void insert()
{
    cin>>name>>no;
}
void display()
{
    cout<<name<<" : "<<no;
}
string search()
{
    return name;
}
};

int main()
{
    int n,count=0;
    string key,res;
    cin>>n;
    directory di[n];
    for(int i=0;i<n;i++)
    {
        di[i].insert();
    }
    cout<<endl<<"enter the name to find the number : ";
    cin>>key;
    for(int i=0;i<n;i++)
    {
        res=di[i].search();
        if(res==key)
        {
            cout<<endl<<"***************************************************** "<<endl<<"************************************************"<<endl;
            di[i].display();
            count++;
            break;
        }
    }
    if(count==0)
    {
        cout<<"not found"<<endl;
    }


    // for(int i=0;i<n;i++)
    // {
    //     cout<<endl;
    //     di[i].display();
    // }

}