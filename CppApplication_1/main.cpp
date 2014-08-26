/* 
 * File:   main.cpp
 * Author: eirik
 *
 * Created on August 22, 2014, 1:50 PM
 */

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main () {
    double temp;
    int temp10 = 0;
    int temp1020 = 0;
    int temp20 = 0; 
    
    for (int i = 0; i < 5; i++) {
        cout << "skriv inn temp "<< i+1 <<": ";
        cin >>temp;
        
        if(temp<10){
            temp10=temp10+1;
        }
        else if(temp>20){
            temp20=temp20+1;
        }
        else{
            temp1020=temp1020+1;
        }
    }
    cout << "\ntempraturer under 10: "<<temp10<<"\n"<<"tempraturer mellom 10 og 20: "<<
            temp1020<<"\n"<<"tempraturer over 20: "<<temp20<<"\n";
}
