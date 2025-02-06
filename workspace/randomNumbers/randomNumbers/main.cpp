#include <iostream>
#include <cstdlib>  // std::rand(), std::srand()
#include <ctime>    // std::time()
#include <random>

unsigned int PRNG() {   // Pseudo Rndom Number Generator
 
    static unsigned int seed = 5523;
    
    seed = 8253729 * seed + 2396403;
    
    return seed % 32768;
}

int getRandomNumber(int min, int max) {
    
    static const double fraction = 1.0 / (RAND_MAX + 1.0);
    
    return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}

int main(void) {
    
    using namespace std;
    
    for (int count=1; count<=100; ++count) {
        cout << PRNG() << " \t";
        
        if (count % 5 == 0) cout << endl;
    }
    
    cout << endl;
    
    std::srand(5323);   // fixed seed
    for (int count=1; count<=100; ++count) {
        cout << std::rand() << " \t";
        
        if (count % 5 == 0) cout << endl;
    }
    
    cout << endl;
    
    std::srand(static_cast<unsigned int>(std::time(0)));   // changing seed
    for (int count=1; count<=100; ++count) {
        cout << std::rand() << " \t";
        
        if (count % 5 == 0) cout << endl;
    }
    
    std::random_device rd;
    std::mt19937 mersenne(rd()); // create a merssene twister
    std::uniform_int_distribution<> dice(1, 6);
    
    for(int count=1; count<=20; ++count) {
        cout << dice(mersenne) << endl;
    }
    
    return 0;
}
