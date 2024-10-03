#include<iostream>
using namespace std;

int main(){
int a[4][4]={{1,2,3,4,4000000},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

int top=0,left=0,right=4-1,bot=4-1;
 		while(top<=right){
 		for(int j=left;j<=right;j++)
 		{
 		    cout<<a[top][j];
 		    if(j==right)
 		    {
 		        top+=1;
 		    }
 		}
        if(top<=right){
 		for(int i=top;i<=bot;i++)
 		{
 		    cout<<a[i][right];
 		    if(i==bot)
 		    {
 		        right-=1;
 		    }
 		}
 		for(int i=right;i>=left;i--)
 		{
 		    cout<<a[bot][i];
 		    if(i==left)
 		    {
 		        bot-=1;
 		    }
 		}
 		for(int i=bot;i>=top;i--)
 		{
 		    cout<<a[i][left];
 		    if(i==top)
 		    {
 		        left+=1;
 		    }
 		}
        }
 		}


}