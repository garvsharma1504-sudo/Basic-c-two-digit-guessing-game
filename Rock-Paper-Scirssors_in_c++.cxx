// Rock-Paper-Scissors in c++
//not yet complete

#include <iostream>
#include <ctime>

//template typedef T= std::string;

int decide(int c_choice, std::string Y);
void winner(int computer_choice_int,char Player_chioce,int Player_choice);

int main(){
    srand(time(0));
    int computer_choice_int = 0;
    std::string computer_choice_string;
    
    //player choice ::---
    char player_choice;
    int Player_choice;
    std::cout<<"Enter :::---------- " << std::endl;
    std::cout<<"R or r for rock" << std::endl;
    std::cout<<"P or p for paper" << std::endl;
    std::cout<<"S or s for scissors" << std::endl;
    std:: cin >> player_choice;
    
    //descision 
    decide(computer_choice_int,computer_choice_string);
    winner(computer_choice_int,player_choice,Player_choice);
    
    }
int decide (int c_choice, std::string Y){
    c_choice = rand()%3+1;
    if (c_choice==1){
        Y="Rock";
        }
    else if(c_choice ==2){
        Y="Paper";
        }
    else {
        Y="Scissors";
        }   
    std::cout << "The computer choose " << Y << std::endl;
    return c_choice;
    }
    
void winner(int computer_choice_int,char Player_chioce,int Player_choice){
    switch (Player_chioce){
        case "r"||"R":
            Player_choice = 1;
            break;
        case "P" || "p":
            Player_choice = 2;
            break;
        case "S" or "s":
            Player_choice = 3;
            break;
        default :
            std::cout<< "Enter a valid  character";
        }
    
    if (computer_choice==Player_choice)
    {
        std::cout << "*****************************************" << std::endl;
        std::cout << "HERE ARE YOUR RESULTS" << std::endl;
        std::cout << "IT IS A TIE" << std::endl;
        std::cout << "*****************************************" << std::endl;
        }
        
    else if ((computer_choice==1  && Player_choice==2) || (computer_choice==2 && Player_choice==3) || (computer_choice==3 && Player_choice == 1) )
    {
        std::cout << "*****************************************" << std::endl;
        std::cout << "HERE ARE YOUR RESULTS" << std::endl;
        std::cout << "YOU HAVE WON :-)" << std::endl;
        std::cout << "*****************************************" << std::endl;
        }        
    else if ((computer_choice==2  && Player_choice==1) || (computer_choice==3 && Player_choice==2) || (computer_choice==1 && Player_choice == 3) )
    {
        std::cout << "*****************************************" << std::endl;
        std::cout << "HERE ARE YOUR RESULTS" << std::endl;
        std::cout << "YOU HAVE LOST :-<" << std::endl;
        std::cout << "*****************************************" << std::endl;
        }
    }
