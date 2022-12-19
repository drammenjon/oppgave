#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;

int main()
{
    int Liste_Størrelse = 34;
    srand(time(0));

    int Lotto_tall[Liste_Størrelse] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34 };

    for (int i = 0; i < 34; i++) {

        int index = rand() % Liste_Størrelse;

//        int temp = Lotto_tall[i];
//        Lotto_tall[i] = Lotto_tall[index];
//        Lotto_tall[index] = temp;
    }
    for (int i = 0; i < 34; i++) {
        cout << Lotto_tall[i] << " ";
    }

}
