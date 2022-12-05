#include <bits/stdc++.h>

// This function converts characters to integers.
int value(char a) {
    int v = int(a) - 96;
    if (v < 0) {
        return v + 58;
    }
    return v;
}
int main() {
    std::string input {};
    int sum{};

    for (int i = 0; i < 300; i++) {
        std::cin >> input;
        // hashmap for visited values of the first half V
        std::unordered_map<int, int> seen;
        int n = input.length();

        char array[n + 1] {};
        strcpy(array, input.c_str());
        // converts string to char and places them in array

        for (int i = 0; i < n/2; i++) {
            seen[value(array[i])] = i;
        }
        for (int i = n/2; i <= n; i++) {
            if (seen.count(value(array[i]))) {
                sum += value(array[i]);
                break;
            }
        }
        seen.clear();
    }
        std::cout << sum << '\n';
        return 0;
    }

Part 2

#include <bits/stdc++.h>

int value(char a) {
    int v = int(a) - 96;
    if (v < 0) {
        return v + 58;
    }
    return v;
}
int main() {
    std::string input {};
    std::string input2 {};
    std::string input3 {};
    int sum{};
    int counter{}, counter2{};

    for (int i = 0; i < 100; i++) {
        std::cin >> input;
        std::cin >> input2;
        std::cin >> input3;

        // hashmap for visited values of the first half V
        std::unordered_map<int, int> seen;
        std::unordered_map<int, int> seen2;
        int n = input.length();
        int n2 = input2.length();
        int n3 = input3.length();

        char array1[n + 1] {};
        char array2[n2 + 1] {};
        char array3[n3 + 1] {};
        strcpy(array1, input.c_str());
        strcpy(array2, input2.c_str());
        strcpy(array3, input3.c_str());

        // converts string to char and places them in array
        for (int i = 0; i < n; i++) {
            seen[value(array1[i])] = i;
        }
        for (int i = 0; i < n2; i++) {
            if (seen.count(value(array2[i]))) {
                seen2[value(array2[i])] = i;
            }
        }

        for (int i = 0; i < n3; i++) {
            if (seen2.count(value(array3[i]))) {
                sum += value(array3[i]);
                break;
            } 
        }
        seen.clear();
        seen2.clear();
    }
        std::cout << sum << '\n';
        return 0;
    }
    




    