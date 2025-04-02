#include <iostream>
using namespace std;

void monthlySales(){
    int mSales;
    double percentage;
    double income;
    cout<<"Enter your monthly sales: ";
    cin>>mSales;

    if(mSales >= 50000){
        percentage = 0.16;
        income = 375 + (percentage * mSales);
        cout<<"Income: "<<income;
    } else if(mSales < 50000 || mSales >= 40000){
        percentage = 0.14;
        income = 350 + (percentage * mSales);
        cout<<"Income: "<<income;
    } else if(mSales < 40000 || mSales >= 30000){
        percentage = 0.12;
        income = 325 + (percentage * mSales);
        cout<<"Income: "<<income;
    } else if(mSales < 30000 || mSales >= 20000){
        percentage = 0.09;
        income = 300 + (percentage * mSales);
        cout<<"Income: "<<income;
    } else if(mSales < 20000 || mSales >= 10000){
        percentage = 0.05;
        income = 250 + (percentage * mSales);
        cout<<"Income: "<<income;
    } else if(mSales < 10000){
        percentage = 0.03;
        income = 200 + (percentage * mSales);
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
            default:
                cout<<"Invalid Status!\n";
            }
        
        cout<<"\nMonthly Sales and Income\n";
    // Monthly Sales Function
        monthlySales();
        
        return 0;
}