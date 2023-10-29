
#include<iostream>
using namespace std ;



void series(int number) ;




main(){

int number ;
cout<< "Enter the number to Amplify: " ;
cin>> number ;

series(number) ;


}

void series(int number) {
    int series = 0 ;

    for(int x = 1; x <= number ; x++){

    series =  x ;
        if(series%4 == 0){

            series = series*10 ;
        }

     cout << series  ;

        if(series != number){

            cout << ", ";

        }


   
    }
   
}




    