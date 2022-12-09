#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

//Bruker timer for å plukke ut et tilfeldig tall
srand((unsigned) time(NULL)); 
 
 //Tilfeldigtall skal være mellom 1 og 34 
int a = 1 + rand() % 34;
int b = 1 + rand() % 34;
if (a == b) {
      b = 1 + rand() % 34;   
   }
int c = 1 + rand() % 34;
if ((c == a) or (c == b)) {
      c = 1 + rand() % 34;   
   }
int d = 1 + rand() % 34;
if ((d == a) or (d == b) or (d == c)) {
      d = 1 + rand() % 34;   
   }
int e = 1 + rand() % 34;
if ((e == a) or (e == b) or (e == c) or (e == d)) {
      e = 1 + rand() % 34;
}
int f = 1 + rand() % 34;
if ((f == a) or (f == b) or (f == c) or (f == d) or (f == e)) {
      f = 1 + rand() % 34;   
   }
int g = 1 + rand() % 34;
if ((g == a) or (g == b) or (g == c) or (g == d) or (g == e) or (g == f)) {
      g = 1 + rand() % 34;   
   }

cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << " " << g;
return 0;  
} 