// a game with guessing 2 numbers together:_--
#include <iostream>
#include <ctime>
void check(int x,int y,int num[],bool correct);

int main(){
    
    srand(time(0));
    int guess1;
    int guess2;
    int num[2];
    for (int i =1;i<=2;i++){
        num[i]=rand()%30+1;
        }
    bool correct=false;
    
    do{
        std::cout<< "Enter a no to guess between 0-30::";
        std::cin>>guess1;
        std::cout <<"Enter the second number you want to guess::"<<std::endl;
        std::cin>>guess2;
        check(guess1,guess2,num,correct);
        std::cout<<guess1<<guess2;
        }while(correct != true);
    return 0;
    }
    
void check(int x,int y,int num[],bool correct){
    if (x == num[0] && y == num[1]){
        std::cout<<"YOU ARE CORRECT!!!!!!!!";
        correct = true;
        }
    else if(x == num[0] && y != num[1]){
        std::cout<< "Your first guess is correct but second is not correct" << std::endl;
        std::cout<< (y>num[1] ? "your second guess is higher than no" : "your secind guess is lower than number");
        }
    else if(x != num[0] && y == num[1]){
      
      std::cout<< "Your first guess is incorrect but second is correct" << std::endl;
      std::cout<< (x>num[0] ? "your first guess is higher than no" : "your firsy guess is lower than number");
      }
    else{
        std::cout<<"Both of your guesses are incorrect:"<<std::endl;
        std::cout<<(x> num[0] ? "Your fisrt guess is higher than actual number:":"Your firs guess is lower than first number")<<std::endl;
        std::cout<<(y>num[1] ? "your second guess is higher than no" : "your secind guess is lower than number");
    }
    
    }