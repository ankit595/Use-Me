#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    int input_number;
    int temp;
    int user = 0, computer = 0, round;
    cout<<"\n***Welcome To The Game Rock Paper And Scissors !!!***";
    cout<<"\nFirst you have to select the no of round you want to Play:\n";
    cin>>round;
    //srand(time(0));
    //temp = rand() % 3;
    for (int i=1; i<=round; i++) {
        srand(time(0));
        temp = 1 + (rand() % 3);
        cout<<"\nRound:"<<i;
        cout<<"\nAlright you have to select your choice...";
        cout<<"\n1 Denotes for the rock:";
        cout<<"\n2 Denotes for the paper:";
        cout<<"\n3 Denotes for the scissor:";
        cin>>input_number;
        switch (input_number) {
            case 1:
                cout<<"\nYou Selected 1 for the Rock.";
                cout<<"\nComputer Gets: "<<temp;
                if (temp == 1)
                    cout<<"\nMatch tie..";
                else if (temp == 2) {
                    cout<<"\nPaper beats rock > system win";
                    computer++;
                }
                else if (temp == 3) {
                    cout<<"\nRock beats scissor > you win";
                    user++;
                }
                continue;
            case 2:
                cout<<"\nYou Selected 2 for the Paper.";
                cout<<"\nComputer Gets: "<<temp;
                if (temp == 1) {
                    cout<<"\nPaper beats rock > you win";
                    user++;
                }
                else if (temp == 2)
                    cout<<"\nMatch Tie...";
                else if (temp == 3) {
                    cout<<"\nscissor beats Paper  > system win";
                    computer++;
                }
                continue;
            case 3:
                cout<<"\nYou Selected 3 for the scissor.";
                cout<<"\nComputer Gets: "<<temp;
                if (temp == 1) {
                    cout<<"\nRock beats scissor > system win";
                    computer++;
                }
                else if (temp == 2) {
                    cout<<"\nscissor beats Paper > you win";
                    user++;
                }
                 else if (temp == 3)
                    cout<<"\nMatch tie...";
                continue;
            default:
                cout<<"\nWrong choice entered by the user";
                break;
        }
    }
    if (user > computer)
        cout<<"\nYou win the final game";
    else if (computer > user)
        cout<<"\nComputer win the final game";
    else
        cout<<"\nFinal Match Tied...";
}