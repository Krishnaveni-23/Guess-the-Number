//guess the number

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    cout<<"choose a random number between (1 to 9)\n"<<endl;
    int player;
    cout<<"enter your choice: "<<endl;
    cin>>player;
    player--;
    
    int computer;
    srand(time(0));
    computer = rand() % 9;
    cout<<"computer choice: "<<computer<<endl;
    
    if(player==computer)
    {
        cout<<"you win"<<endl;
    }
    else
    {
        cout<<"you loose"<<endl;
    }
    
    cout<<"thanks for playing"<<endl;
    
    return 0;
}