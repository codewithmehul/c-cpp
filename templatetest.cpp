#include <iostream>

using namespace std;

template <typename T>
T maxOf(T a, T b)
{
    return ( a > b ? a : b);
}


int main()
{
    std::cout << "MAX : " << maxOf<string>("aaaa","bbbb") << std::endl;
    return 0;
}
