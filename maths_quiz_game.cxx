//MATHS QUIZ GAME :::::::::::::::::::::::::::::::::::::::::
    //dependencies ::------
#include <iostream>
#include <ctime>

//Object
//class numbers{
//    public:
//        int numbers;
//        int second_number;
//        int final_resultant;
        //int third_number;
        //int fourth_number;
//    int multiply(int number,int second_number){
//        return number*second_number;
//        }
//    int add (int number,int second_number){
//        return number+second_number;
//        }
//    int subtract (int number,int second_number){
//        return number-second_number;
//        }
//    int divide (int number,int second_number){
//        return number/second_number;
//        }
//    
//    };
//void try();
int multiply(int number,int second_number){
        return number*second_number;
        }
   int add (int number,int second_number){
        return number+second_number;
        }
    int subtract (int number,int second_number){
        return number-second_number;
        }
    int divide (int number,int second_number){
        return number/second_number;
        }    

    
            int main()
    {
        std::cout << "************************READ    INSTURCTIONS    CAREFULY********************************" << std::endl;
        std::cout << "****************************************************************************************" << std::endl;
        std::cout << "1.) You get 20 seconds to complete one answer." << std::endl;
        std::cout << "2.) Press e to exit loop --" << std::endl;
        std::cout << "3.) Your score will be visible after each question and final score will be displayes after exiting loop ::--"<< std::endl;
        std::cout << "4.)  "<< std:: endl;
        
        
        // numbers
        //srand(time(0));
        //numbers first_number = rand()% 9 +2;
        //numbers second_number = rand()%9+2;
        //numbers third_number = rand()%5 + 2;
        //numbers fourth_number = rand()%10 +4;
        int score=0;
        std::string wanted_input = "e";
        std::string user_input ;
        do{
            //std::cout 
            // numbers
            srand(time(0));
            int first_number = rand()% 9 +2;
            int second_number = rand()%9+2;
            int third_number = rand()%5 + 2;
            int fourth_number = rand()%10 +4;                
            
             int final_resultant = (multiply(first_number , second_number) + add(second_number,fourth_number)+subtract(fourth_number,first_number))+third_number;
            std::cout << "****************YOUR QUESTION IS************** "<<std::endl;
            std::cout << " ({first_number} * {second_number} +{fourth_number}+{second number}+{fourth_number}-{first_number})+{third_number}" << std::endl;
                        
            //Randomising options ::::::::::::–
            int n = rand() % 4 + 1;
            
            int Option_a;
            int Option_b;
            int Option_c;
            int Option_d;
            
            if (n==1)
            {
                Option_a = final_resultant;
                Option_b = final_resultant + rand()% 7 +1;
                Option_c= final_resultant + rand () %30 +5;
                Option_d = final_resultant+ rand()%20+1;
                
                }
            else if (n==2)
            {
                Option_b = final_resultant;
                Option_d= final_resultant + 101;
                Option_a= final_resultant + rand()% 7 +1;
                Option_c= final_resultant + rand () %30 +5;
                
                }
            else if(n==3)
            {
                Option_c = final_resultant;
                
                Option_a = final_resultant + rand()% 7 +1;
                Option_d= final_resultant + rand () %30 +5;
                Option_b = final_resultant+ rand()%20+1;
                }
            else 
            {
                Option_d = final_resultant;
                Option_b = final_resultant + rand()% 7 +1;
                Option_a= final_resultant + rand () %30 +5;
                Option_c = final_resultant+ rand()%20+1;
                }
            
            //std::cout << "****************YOUR QUESTION IS************** "<<std::endl;
            //std::cout << " ({first_number} * {second_number} +{fourth_number}+{second number}+{fourth_number}-{first_number})+{third_number}" << std::endl;
            
            //Finalle :
            std::cout << "Option A]" <<    Option_a << std::endl;
            std::cout <<    "Option B]" << Option_b << std::endl;
            std::cout << "Option c]" << Option_c<< std::endl;
            std::cout << "Option d]" << Option_d<< std::endl;
            
            //Final input    
            std::cout << "Enter your choice" << std::endl;    
            std::getline(std::cin , user_input);
            std::cin.clear();
            if (user_input == "a")
            {
                if(Option_a == final_resultant)
                {
                    std::cout << "YOU ARE CORRECT" <<std::endl;
                    }
                else
                {
                    std::cout << "You are not correct : - <"<<std::endl;
                    }    
                }

                        
                
            }while (user_input != wanted_input);
        
        
        return 0;
        }
    
    