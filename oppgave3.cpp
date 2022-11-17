#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

//Bruker timer for å plukke ut et tilfeldig tall
srand((unsigned) time(NULL)); 
 
 //Tilfeldigtall skal være mellom 0 og 100
int tilfeldigtall = rand() % 101;

cout << tilfeldigtall;
  
} 