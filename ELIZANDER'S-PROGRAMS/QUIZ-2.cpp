#include <iostream>
using namespace std;

void monthlySales(){
    int mSales;
    double income;
    cout<<"Enter your monthly sales: ";
    cin>>mSales;

    if(mSales >= 50000){
        double percentageOne = 0.16;
        income = 375 + (percentageOne * mSales);
        cout<<"Income: "<<income;
    } else if(mSales < 50000 && mSales >= 40000){
        double percentageTwo = 0.14;
        income = 350 + (percentageTwo * mSales);
        cout<<"Income: "<<income;
    } else if(mSales < 40000 && mSales >= 30000){
        double percentageThree = 0.12;
        income = 325 + (percentageThree * mSales);
        cout<<"Income: "<<income;
    } else if(mSales < 30000 && mSales >= 20000){
        double percentageFour = 0.09;
        income = 300 + (percentageFour * mSales);
        cout<<"Income: "<<income;
    } else if(mSales < 20000 && mSales >= 10000){
        double percentageFive = 0.05;
        income = 250 + (percentageFive * mSales);
        cout<<"Income: "<<income;
    } else if(mSales < 10000){
        double percentageSix = 0.03;
        income = 200 + (percentageSix * mSales);
        cout<<"Income: "<<income;
    }
    cout<<"\n\nProgrammer's Name: Elizander Aguila, DIT 1-3";
}

int main(){
    // Variables
        char status;
        int age;
        cout<<"\nSeminar Fee\n";

    // Status Input
        cout<<"Enter your status: ";
        cin>>status;

    // Nested If inside switch statement 
        switch(status){
            case 'S':
            case 's':
            case 'M':
            case 'm':
                cout<<"Enter your age: ";
                cin>>age;
                if(age >= 60){
                    cout<<"Seminar Fee: 5\n";
                } else if(age < 60){
                    cout<<"Seminar Fee: 10\n";
                } else
                    cout<<"Invalid Age!\n";
                break;
            case 'N':
            case 'n':
                cout<<"Seminar Fee: 20\n";
            break;
            default:
                cout<<"Invalid Status!\n";
            }
        
        cout<<"\nMonthly Sales and Income\n";
    // Monthly Sales Function
        monthlySales();
        
        return 0;
}