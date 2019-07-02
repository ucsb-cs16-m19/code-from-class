#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
    for (int horses = 0; horses <= 100; horses++) {
        for (int pigs = 0; pigs <= 100; pigs++) {
            for (int rabbits = 0; rabbits <= 100; rabbits++) {
                // this loop ranges between
                // (0, 0, 0) and (100, 100, 100)
                double price = horses*10 + pigs*3 + rabbits*0.50;
                int number_of_animals = horses + pigs + rabbits;

                if (number_of_animals == 100 && price == 100.00) {
                    cout << "you bought: " << horses << " horses, " <<
                            pigs << " pigs, and " << rabbits << 
                            " rabbits.\n";
                }
            }
        }
    }

    return 0;
}