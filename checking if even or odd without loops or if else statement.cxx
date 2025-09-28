// Checking if number is true or false without using if else statement or for loop:-
# include <iostream>

int main(){
    //defining variables to be used:
    int x;
    std::string integer[]={"even","odd"};
    
    //getting user input:
    std::cout << " Enter a number to check even or odd::";
    std::cin >> x;
    
    //if no is odd :: index(1) is shown which is odd :-
    //if no is even :: index(0) is shown which is even :-
    std::cout << integer[x%2];
    
    return 0;
    }
