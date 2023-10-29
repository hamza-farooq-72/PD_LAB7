#include<iostream>
using namespace std;




            int calculate(int);
            int untreat=0;

            main(){
                int days;
                cout<<"Enter Number of days you visited Hospital: ";
                cin>>days;
            
                cout<<"Treated patients: "<<calculate(days)<<endl;

                cout<<"UnTreated Patients: "<<untreat;
            }


            int calculate(int days){
                int y = 0;
                int treat=0;
                int z=7;
                for (int  x = 1; x <=days; x++)
                {   

                cout<<"Number of patients who visited hospital on Day "<<x<<": ";

                cin>>y;

                if(x==3 && untreat>treat){
                    z++;

                }
                if(y<=z){
                    treat=treat+y;
                }
                if(y>z){
                    treat=treat+z;
                    untreat=untreat+(y-z);
                }
                }

                untreat;
                return treat;
            }