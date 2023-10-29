
#include<iostream>
using namespace std ;



int productPrime(int number); 
bool isPrime(int number) ;



main(){

int number ;
cout<< "Enter number: " ;
cin>> number ;

cout << productPrime(number); 


}

int productPrime(int number){
    int prod = 1 ; 
    int times = 0 ;
    for(int x = 1; times <= number ; x++){

        int primenum = isPrime(x) ;
        if(primenum == 1){
            prod = prod*x ;
            times ++ ;
        }
    }
    return prod ;
}
        
   
    bool isPrime(int number){
    
    if(number == 2 || number == 3){
        return true ;
    }


    if(number != 2 && number != 3){

        if(number%2 == 0 || number%3 == 0){

        return false ;
    }

    else if(number%2 != 0 || number%3 != 0){


        return true ;
    }
    }

    

    
    
}
    