#include <iostream>

int main(void) {
    
    using namespace std;
    
    const int num_students = 5;
    int scores[num_students] = {84, 92, 76, 81, 56};
    int total_score = 0;
    int max_score = 0;
    
    for(int i=0; i<num_students; ++i) {
        total_score += scores[i];
//        max_score = max_score < scores[i] ? scores[i] : max_score;
        if(max_score < scores[i]) max_score = scores[i];
    }
    
    
    
    cout << total_score << endl;
    cout << max_score << endl;
    
    return 0;
}
