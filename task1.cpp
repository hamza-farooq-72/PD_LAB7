
#include<iostream>
using namespace std ;

int calculatePrice(int money, int year);






main(){

int rowsize ;
cout<< "Enter the desired number of rows: " ;
cin>> rowsize ;

for(int x = rowsize ; x  >= 1;  x-- ){

for(int column = 1 ; column <= x ; column++ ){

cout << "*"  ;
}
cout<<endl ;
    
}
}