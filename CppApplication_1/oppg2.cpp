/* 
 * File:   oppg2.cpp
 * Author: eirik
 *
 * Created on August 26, 2014, 11:58 AM
 */

#include <cstdlib>

using namespace std;

/*
 * 
 */
void lesInnTemp(double temp[], int antall){
    const char fil[] = "tallfil.dat";
    ifstream innfil;
    innfil.open(fil);
    if (!innfil){
        cout << "Feil ved åpning av fil." << endl;
        exit(EXIT_FAILURE);
    }
    int tall;
    innfil >> tall;
    while(!innfil.eof()){
	Hei
    }
}

int main() {
    
}


