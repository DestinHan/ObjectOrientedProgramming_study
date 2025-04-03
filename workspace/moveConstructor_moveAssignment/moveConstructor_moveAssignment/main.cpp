#include "AutoPtr.h"
#include "Resource.h"

AutoPtr<Resource> generateResource() {
    AutoPtr<Resource> res(new Resource(1000000));
    
    return res;
}

int main() {
    
    using namespace std;
    
    streambuf* orig_buf  = cout.rdbuf();
    
    {
        AutoPtr<Resource> main_res;
        main_res = generateResource();
    }
    
    return 0;
}
