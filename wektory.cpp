#include <iostream>
#include <vector>

int main() {
    std::vector<int> vect = {};

    for (int i = 0; i < 100; i++){
        vect.emplace_back(i);
    }

    for (int i = 0; i < vect.size(); i++){
        std::cout << vect[i];
    }
}