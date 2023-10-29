
#include<iostream>
using namespace std ;



void firsthalf(int rowsize) ;
void secondhalf(int rowsize) ;



main(){

int rowsize ;
cout<< "Enter the desired number of rows: " ;
cin>> rowsize ;

firsthalf(rowsize/2) ;
secondhalf(rowsize/2) ;


}

void firsthalf(int rowsize) {

for(int x = 1 ; x  <= rowsize ;  x++ ){


for(int space = 1  ; space <= (rowsize-x); space++  ){
    
    cout << " " ;
}

for(int column = 1 ; column <= x ; column++ ){

    cout << "*" ;
   

}

     cout<<endl ;
}

}
void secondhalf(int rowsize) {

    for(int x = rowsize ; x  > 0 ;  x-- ){


    for(int space = x  ; space < rowsize; space++  ){
        
        cout << " " ;
    }

    for(int column = 1 ; column <= x ; column++ ){

        cout << "*" ;
    

    }

     cout<<endl ;
}



}
    