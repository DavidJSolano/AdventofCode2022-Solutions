#include <bits/stdc++.h>

int main() {
    int counter {};
    for (int i = 0; i < 1000; i++) {
        int f1{}, f2{}, s1{}, s2{};
        char dash{}, comma{}, dash2{};
        std::cin >> f1 >> dash >> f2 >> comma >> s1 >> dash2 >> s2;
        // if (f1 <= s1 && f2 >= s2) { counter++; }
        // else if (s1 <= f1 && s2 >= f2) { counter++;}
        for (int i = f1; i <= f2; i++) {
            if ((i == s1) || (i == s2)) {
                counter++;
                break;
            }
            else if (s1 < f1 && s2 > f1) {
                counter++;
                break;
            }
        }
    }
    std::cout << counter << '\n';
    return 0;
}