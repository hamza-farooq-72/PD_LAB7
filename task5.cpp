
#include<iostream>
using namespace std ;



bool isPrime(int number); 




main(){

int number ;
cout<< "Enter number: " ;
cin>> number ;

cout << isPrime( number); 


}

bool isPrime(int number){
    
    if(number%2 == 0 || number%3 == 0){

        return false ;
    }

    else if(number%2 != 0 || number%3 != 0){


        return true ;
    }


    }
   





    