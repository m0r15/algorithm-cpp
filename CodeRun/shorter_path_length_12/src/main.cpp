#include <iostream>
#include <string>
#include <vector>

int main(int argc, char *argv[])
{
    // Input
    int N = 0;
    std::cin >> N;

    std::vector<std::vector<int>> matrix(N);
    for (size_t i = 0; i < N; ++i) {
        matrix[i] = std::vector<int>(N);
        std::string item;
        size_t j = 0;
        while (j < N && std::getline(std::cin, item, ' ')) {
            if (!item.empty()) {
                matrix[i][j] = std::stoi(item);
            }
            ++j;
        }
    }

    // vertex
    int v_begin, v_end;
    std::cin >> v_begin >> v_end;

    return 0;
}