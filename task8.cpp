
#include<iostream>
#include<iomanip>
using namespace std ;


main(){

float count ;
float minibus = 0.0 ,truck = 0.0,  train = 0.0 ;
float num ;

cout<<"Enter the count of cargo for transportation: " ;
cin>> count ;
    float tonsofTrain = 0.0;
    float tonsofbus = 0.0;
    float tonsofTruck = 0.0;
    float sum = 0.0 ;

for(float x = 1 ; x <=  count ; x = x + 1)
{
    
cout<<"Enter the tonnage of cargo " << x << ": " ;
cin>> num ; 


if(num <= 3 ){
  
tonsofbus =tonsofbus + num ;

}

else if(num > 3 && num <= 11 ){
tonsofTruck =tonsofTruck + num ;

}
else if(num > 11  ){
tonsofTrain = tonsofTrain + num ;


}

}


sum = tonsofTrain + tonsofTruck + tonsofbus ;
float average = (tonsofbus * 200 + tonsofTruck * 175 + tonsofTrain * 120) / sum ;

float minibusCost = (tonsofbus/sum)*100 ;
float truckCost = (tonsofTruck/sum)*100 ;
float trainCost = (tonsofTrain/sum)*100 ;

cout <<fixed << setprecision(2)<< average << endl ;
cout<< fixed << setprecision(2)<< minibusCost <<"%" <<endl ;
cout<<fixed << setprecision(2) << truckCost <<"%" <<endl ;
cout<<fixed << setprecision(2) <<  trainCost <<"%" <<endl ;

}

