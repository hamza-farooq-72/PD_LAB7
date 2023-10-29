
#include<iostream>
using namespace std ;



void sum(int number) ;




main(){

int number ;
cout<< "Enter number of Triangle: " ;
cin>> number ;

sum(number) ;


}

void sum(int number) {
    int series = 0 ;

    for(int x = 1; x <= number ; x++){

    series =  series + x ;
    
        }
        cout << "Dots in the Triangle: " <<series ;
   
    }
   





    