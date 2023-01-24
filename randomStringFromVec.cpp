#include <iostream>
#include <vector>
#include <random>

template <typename T>
std::string randomStringFromVec(const T &vec)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distribution(0, vec.size() - 1);
    int randomIdx = distribution(gen);
    return vec[randomIdx];
}

auto main() -> int
{
    std::vector<std::string> vec{"dupa", "blada", "lol", "mars"};
    std::cout << randomStringFromVec(vec);
}