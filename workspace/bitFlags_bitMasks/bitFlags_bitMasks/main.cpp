#include <iostream>
#include <bitset>
int main(void) {
    
    using namespace std;
    
//    bool item1_flag = false;
//    bool item2_flag = false;
//    bool item3_flag = false;
//    bool item4_flag = false;
//    
//    // event!
//    item1_flag = true;
//    
//    // die! item2 lost
//    item2_flag = false;
//    
//    if (item3_flag == true) {
//        // event
//    }
//    
//    if (item3_flag == true) {
//        item3_flag = false;
//        item4_flag = true;
//    }
    
    const unsigned char opt0 = 1 << 0;
    const unsigned char opt1 = 1 << 1;
    const unsigned char opt2 = 1 << 2;
    const unsigned char opt3 = 1 << 3;
    // opt4, 5, 6, 7
    
    cout << bitset<8>(opt0) << endl;
    cout << bitset<8>(opt1) << endl;
    cout << bitset<8>(opt2) << endl;
    cout << bitset<8>(opt3) << endl;
    
    unsigned char items_flag = 0;   // 1byte
    
    cout << "No item "<< bitset<8>(items_flag) << endl;
    
    // item0 on
    items_flag |= opt0;
    cout << "item0 obtained "<< bitset<8>(items_flag) << endl;
    
    // item3 on
    items_flag |= opt3;
    cout << "item3 obtained "<< bitset<8>(items_flag) << endl;
    
    // item3 lost
    items_flag &= ~opt3;
    cout << "item3 lost "<< bitset<8>(items_flag) << endl;
    
    // has item1 ?
    if (items_flag & opt1) { cout << "Has item1" << endl; }
    else { cout << "No item 1" << endl; }
    
    // obtain item 2 and 3
    items_flag |= (opt2 | opt3);
    cout << "item2, 3 obtained "<< bitset<8>(items_flag) << endl;
    
    if ((items_flag & opt2) && !(items_flag & opt1)) {
        items_flag ^= opt2;
        items_flag ^= opt1;
    }
    
    const unsigned int red_mask = 0xFF0000;
    const unsigned int green_mask = 0X00FF00;
    const unsigned int blue_mask = 0x0000FF;
    
    cout << std::bitset<32>(red_mask) << endl;
    cout << std::bitset<32>(green_mask) << endl;
    cout << std::bitset<32>(blue_mask) << endl;
    
    unsigned int pixel_color = 0xDAA520;
    
    cout << std::bitset<32>(pixel_color) << endl;
    
    unsigned char green = (pixel_color & green_mask) >> 8;
    unsigned char blue = pixel_color & blue_mask;
    
    cout << "green " << bitset<16>(green) << " " << int(green) << endl;
    cout << "blue " << bitset<8>(blue) << " " << int(blue) << endl;
    
    return 0;
}
