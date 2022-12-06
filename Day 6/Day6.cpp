//Part 1
#include <bits/stdc++.h>

int main(){
    int i{4}, h{1}, o{2}, l{3};
    std::vector<char> seen;
    char input{};
    for (int j = 0; j < 4; j++) {
        std::cin >> input;
        seen.push_back(input);
    }
    while (std::cin >> input) {
        seen.push_back(input);
        if ((seen[h] != seen[o]) && (seen[h] != seen[l])
            && (seen[o] != seen[l]) && (seen[o] != seen[i])
            && (seen[l] != seen[i]) && (seen[i] != seen[h])) {
                std::cout << seen[h] << " " << seen[o] << " " << seen[l] << " " << seen[i];
                i++;
                std::cout << i << '\n';
                break;
            }
        h++;
        o++;
        l++;
        i++;
    }
}

//Part 2

#include <bits/stdc++.h>

int main(){
    int i{0};
    std::vector<char> seen;
    char input{};
    for (int j = 0; j < 14; j++) {
        std::cin >> input;
        seen.push_back(input);
    }
    while (std::cin >> input) {
    int end = i + 13;
    int counter{0};
    for (int k = i; k < end; k++) {
        int begin = k + 1;
        for (int j = begin; j <= end; j++) {
            if (seen[k] != seen[j]) {
                counter++;
            } else {
                break;
            }
        }
    }
    if (counter >= 91) {
        i += 14;
        std::cout << i << '\n';
        break;
    }
    seen.push_back(input);
    i++;
    }
}