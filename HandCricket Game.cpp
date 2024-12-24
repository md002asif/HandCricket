#include <bits/stdc++.h>
using namespace std;
int first_batting(string p1,string p2)
{
     int out=0;
    int score=0,ball=0,bat=0,target=0;
        while(!out)
        { 
             score+=bat;
            cout<<p1<<" ";
            cin>>bat;
            cout<<p2<<" ";
            cin>>ball;
            if(bat == ball)
            {
                out=1;
                target = score+1;
            }
        }
        cout<<p1<<" scored "<<score<<endl;
        cout<<"target for "<<p2<<" is "<<target<<endl;
    return target;
}

void second_batting(string p1,string p2,int target)
{
    int bat=0,ball=0,out = 0,score=0;
    while(!out)
    {
            cout<<p1<<" ";
            cin>>bat;
            cout<<p2<<" ";
            cin>>ball;
            score+=bat;
            if(bat == ball)
            {
                out=1;
                cout<<p2<<" wins "<<p1<<" lost";
            }
            else if(score >= target)
            {
                cout<<p1<<" wins "<<p2<<" lost";
                break;
            }
    }
}

int main()
{
    int p1,p2;
    string a,b;
    cout<<"player1 \nChoose odd or even : ";
    cin>>a;
   if(a == "odd")
   {
       b = "even";
   }
   else
   {
       b = "odd";
   }
   cout<<"\nSo player2 gets "<<b;
   cout<<"\nplayer1 Choose a number ";
    cin>>p1;
    cout<<"\nplayer2 Choose a number ";
    cin>>p2;
    if(((p1+p2)%2) == 0)
    {
        if(a == "even")
        {
            cout<<"player1 chooses to(batting/bowling) : ";
            cin>>a;
            if(a == "batting")
            {
                cout<<"player2 bowling"<<endl;
            }
            else
            {
                cout<<"player2 batting"<<endl;
            }
        }
        else
        {
            cout<<"player2 chooses to(batting/bowling) : ";
            cin>>b;
            if(b == "batting")
            {
                cout<<"player1 bowling"<<endl;
            }
            else
            {
                cout<<"player1 batting"<<endl;
            }
        }
    }
    else
    {
        if(a == "odd")
        {
            cout<<"player1 choose to : ";
            cin>>a;
            if(a == "batting")
            {
                cout<<"player2 bowling"<<endl;
                b = "bowling";
            }
            else
            {
                cout<<"player2 batting"<<endl;
                b = "batting";
            }
        }
        else
        {
            cout<<"player2 choose to : ";
            cin>>b;
            if(b == "batting")
            {
                cout<<"player1 ball"<<endl;
                a = "bowling";
            }
            else
            {
                cout<<"player1 bat"<<endl;
                a = "batting";
            }
        }
    }
    int target=0;
   if(a == "batting")
   {
      target = first_batting("player1 batting", "player2 bowling");
      cout<<"Player2 batting Player1 Bowling"<<endl;
      second_batting("player2 batting","player1 bowling",target);
      
   }
   else
   {
        target = first_batting("player2 batting","player1 bowling");
        cout<<"Player1 batting Player2 bowling"<<endl;
        a = "batting";
        b = "bowling";
        second_batting("player1 batting", "player2 bowling",target);
   }
   
    return 0;
}
