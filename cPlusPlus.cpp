#include <bits/stdc++.h>

using namespace std;

int main(){
    printf("\nPlease Press 1 to 6 for Searching and 0 to Exit\n");

    while(1){
        bool flag = false;
        ifstream inFile;
        try{
            inFile.open("NCHS_-_Leading_Causes_of_Death__United_States.csv");
        }
        catch(runtime_error e){
            printf("Sorry There Is No File of Such Name!");
            break;
        }
        int option;
        scanf("%d", &option);
        if (option == 1){
            int counter=0;
            string year;
            printf("\nPlease enter a Year: ");
            getline(cin,year);
            getline(cin,year);
            year = year + ',';
            string s="";
            while(inFile){
                getline(inFile,s);
                if(s.find(year)!=string::npos){
                    cout<<s<<endl;
                    flag = true;
                }
            }
        }

        else if(option == 2){
            string cause113;
            printf("\nPlease Type any of 113 Cause Name to Search: ");
            getline(cin,cause113);
            getline(cin,cause113);
            cause113 = "," + cause113 + ",";
            string s="";
            while(inFile){
                getline(inFile,s);
                if(s.find(cause113)!=string::npos){
                    cout<<s<<endl;
                    flag = true;
                }
            }
        }

        else if(option==3){
            printf("\nPlease Type a Cause to Search : ");
            string cause;
            getline(cin,cause);
            getline(cin,cause);
            cause = "-" + cause + "-";
            string s="";
            while(inFile){
                getline(inFile,s);
                if(s.find(cause)!=string::npos){
                    cout<<s<<endl;
                    flag = true;
                }
            }
        }
        else if(option == 4){
            printf("\nPlease Type a State to Search : ");
            string state;
            getline(cin,state);
            getline(cin,state);
            string day ="";
            state = "," + state + ",";
            string s="";
            while(inFile){
                getline(inFile,s);
                if(s.find(state)!=string::npos){
                    cout<<s<<endl;
                    flag = true;
                }
            }
        }
        else if(option == 5){
            printf("\nPlease Type a any Number of Deaths to Search : ");
            string death;
            getline(cin,death);
            getline(cin,death);
            death = "," + death + ",";
            string s="";
            while(inFile){
                getline(inFile,s);
                if(s.find(death)!=string::npos){
                    cout<<s<<endl;
                    flag = true;
                }
            }
        }
        else if(option == 6){
            printf("\nPlease Type any Age-adjusted Death Rates: ");
            string deathRates;
            getline(cin,deathRates);
            getline(cin,deathRates);
            deathRates = "," + deathRates;
            string s="";
            while(inFile){
                getline(inFile,s);
                if(s.find(deathRates)!=string::npos){
                    cout<<s<<endl;
                    flag = true;
                }
            }
        }
        else if(option == 0){
            break;
        }
        else if (option>7 || option<0){
            printf("\nPlease Enter a Valid Input");
            continue;
        }
        else if(flag==false){
           printf("\nSorry, No Such String in this File!");
        }
        inFile.close();
    }
}
