#include <iostream>
#include <vector>

using VertexPair = std::pair<int, int>;

int main(int argc, char *argv[])
{
    int N, M;
    std::cin >> N >> M;

    std::vector<VertexPair> ridge(M);
    for (size_t i = 0; i < M; ++i) {
        std::cin >> ridge[i].first >> ridge[i].second;
    }

    

    return 0;
}