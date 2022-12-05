// #include <bits/stdc++.h>

// int main() {
//     std::string m{}, f{}, t{}; 
//     int move{}, from{}, to{};
//     std::vector<std::vector<std::string>> blocks {{"D", "B", "J", "V"},
//     {"P", "V", "B", "W", "R", "D", "F"}, {"R", "G", "F", "L", "D", "C", "W", "Q"}, {"W", "J", "P", "M", "L", "N", "D", "B"},
//     {"H", "N", "B", "P", "C", "S", "Q"}, {"R", "D", "B", "S", "N", "G"}, {"Z", "B", "P", "M", "Q", "F", "S", "H"},
//     {"W", "L", "F"}, {"S", "V", "F", "M", "R"}};
//     for (int i = 0; i < 65; i++){
//     std::string letter{};
//     std::cin >> letter;
//     }
//     for (int i = 0; i < 502; i++) {
//         std::cin >> m >> move >> f >> from >> t >> to;
//         from = from - 1;
//         to = to - 1;
//         int n = blocks[from].size() - 1;
//         for (int i = n; i > (n - move); i--){
//             blocks[to].push_back(blocks[from][i]);
//             blocks[from].pop_back();
//         }
//     }
//     for (int i = 0; i < blocks.size(); i++) {
//         int n = blocks[i].size() - 1;
//         std::cout << blocks[i][n] << " ";
//         }
//     std::cout << '\n';
//     return 0;
// }

// Part 2:
#include <bits/stdc++.h>

int main() {
    std::string m{}, f{}, t{}; 
    int move{}, from{}, to{};
    std::vector<std::vector<std::string>> blocks {{"D", "B", "J", "V"},
    {"P", "V", "B", "W", "R", "D", "F"}, {"R", "G", "F", "L", "D", "C", "W", "Q"}, {"W", "J", "P", "M", "L", "N", "D", "B"},
    {"H", "N", "B", "P", "C", "S", "Q"}, {"R", "D", "B", "S", "N", "G"}, {"Z", "B", "P", "M", "Q", "F", "S", "H"},
    {"W", "L", "F"}, {"S", "V", "F", "M", "R"}};
    for (int i = 0; i < 65; i++){
    std::string letter{};
    std::cin >> letter;
    }
    for (int i = 0; i < 502; i++) {
        std::cin >> m >> move >> f >> from >> t >> to;
        from = from - 1;
        to = to - 1;
        int n = blocks[from].size();
        for (int j = (n - move); j < n; j++){
            blocks[to].push_back(blocks[from][j]);
        }
        for (int l = 0; l < move; l++){
            blocks[from].pop_back();
        }
    }
    for (int i = 0; i < blocks.size(); i++) {
        int n = blocks[i].size() - 1;
        std::cout << blocks[i][n];
        }
    std::cout << '\n';
    return 0;
}
