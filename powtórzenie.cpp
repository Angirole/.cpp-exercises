#include <iostream>
using namespace std;

int main () {
    int liczbyCalkowite = 10;
    char znaki_symbole = 'A';
    float liczbyZmiennoporzcinkowe = 2.0f;
    std::cout << "podaj liczbe calkowite, znak oraz liczbe zmiennoprzecinkowa";
    std::cin >> liczbyCalkowite;
    std::cin >> znaki_symbole;
    std::cin >> liczbyZmiennoporzcinkowe;

    std::cout << liczbyCalkowite << " " << znaki_symbole << "\n" << liczbyZmiennoporzcinkowe;

    std::cout << "hello world";
    std::cin >> liczbyCalkowite;

    return 0;
}