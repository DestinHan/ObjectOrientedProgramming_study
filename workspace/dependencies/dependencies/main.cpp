#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>

class Timer {
    using clock_t = std::chrono::high_resolution_clock;
    using second_t = std::chrono::duration<double, std::ratio<1>>;
    
    std::chrono::time_point<clock_t> start_time = clock_t::now();
    
public:
    void elapsed() {
            std::chrono::time_point<clock_t> end_time = clock_t::now();
            double elapsed_seconds = std::chrono::duration_cast<second_t>(end_time - start_time).count();
            std::cout << "Elapsed time: " << elapsed_seconds << " seconds" << std::endl;
        }
    
};

class Worker {
public:
    void doSomething() {
        Timer timer;    // start timer
        
        // do some work here
        
        timer.elapsed();    // end timer and report elapsed time
    }
};

int main() {
    
    using namespace std;
    
    Worker worker;
    worker.doSomething();
    
    return 0;
}
