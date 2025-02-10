#include <iostream>

void printArray(int array[], int length) {
    
    for (int index=0; index<length; ++index) {
        std::cout << array[index] << " ";
    }
    std::cout << std::endl;
    
}

int main(void) {
    
    using namespace std;
    
    /*
                      value       index
     3  5  2  1  4      1           3
     1  5  2  3  4      2           2
     1  2  5  3  4      3           3
     1  2  3  5  4      4           4
     1  2  3  4  5
     */
    
    const int length = 5;
    
    int array[length] = {3, 5, 2, 1, 4};
    
    printArray(array, length);
    
    // swap
    int temp = array[0];
    array[0] = array[1];
    array[1] = temp;
    
    printArray(array, length);
    
    for(int startIndex=0; startIndex<length; ++startIndex){
        
        int smallestIndex = startIndex;
        
        for(int currentIndex=startIndex+1; currentIndex<length; ++currentIndex) {
            
            if (array[smallestIndex] > array[currentIndex]){
                
                smallestIndex = currentIndex;
                
            }
            
        }
        
        {
            int temp = array[smallestIndex];
            array[smallestIndex] = array[startIndex];
            array[startIndex] = temp;
        }
        printArray(array, length);
    }
    
    return 0;
}
