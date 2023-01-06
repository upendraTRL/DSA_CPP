#include <iostream>

using namespace std;

int main()
{
    int a = 4;
    int b = 6;
    
    std::cout << "a & b " << (a&b) << std::endl;
    std::cout << "a | b " << (a|b) << std::endl;
    std::cout << "~a " << (~a) << std::endl;
    std::cout << "a ^ b " << (a^b) << std::endl;
    
    std::cout << (17>>1) << std::endl;
    std::cout << (17>>2) << std::endl;
    std::cout << (19<<1) << std::endl;
    std::cout << (21<<2) << std::endl;

    return 0;
}
