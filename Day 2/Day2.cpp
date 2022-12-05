#include <bits/stdc++.h>

int main(int argc, char* argv[]) {
    std::string first{}, second{};
    int sum{};
    for (int i = 0; i < 2500; i++) {
        std::cin >> first >> second;
        if (first == "A" && second == "X") {
            sum += 3;
        } else if (first == "A" && second == "Y") {
            sum += 4;
        } else if (first == "A" && second == "Z") {
            sum += 8;
        } else if (first == "B" && second == "X") {
            sum += 1;
        } else if (first == "B" && second == "Y") {
            sum += 5;
        } else if (first == "B" && second == "Z") {
            sum += 9;
        } else if (first == "C" && second == "X") {
            sum += 2;
        } else if (first == "C" && second == "Y") {
            sum += 6;
        } else if (first == "C" && second == "Z") {
            sum += 7;
        }
    }
    std::cout << "The sum is: " << sum << '\n';
}
