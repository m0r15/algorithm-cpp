#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <string_view>
#include <map>

const std::string_view INPUT_FILE = "input.txt";

using WordsCount = std::map<std::string, size_t>;

void append_word_to_count(WordsCount &wc, std::string_view word) 
{}

int main(int argc, char *argv[])
{
    // read file
    std::fstream input_file(INPUT_FILE);
    if (!input_file.is_open()) {
        std::cerr << "File does not open" << std::endl;
        return 1;
    }

    std::string result = "";
    std::stringstream ss(result);
    std::map<std::string, size_t> words_count;
    while (input_file) {
        std::string line;
        input_file >> line;
        std::string word = "";
        for (auto it = line.cbegin(); it != line.cend(); ++it) {
            if (*it != ' ' || *it != '\n') {
                word += *it;
            } else {
                if (words_count.find(word) == words_count.cend()) {
                    words_count.insert({word, 0});
                } else {
                    words_count[word] += 1;
                    ss << words_count[word] << " ";
                }
            }
        }
            if (words_count.find(word) == words_count.cend()) {
                words_count.insert({word, 0});
            } else {
                words_count[word] += 1;
                ss << words_count[word] << " ";
            }
    }

    std::cout << result;

    return 0;
}