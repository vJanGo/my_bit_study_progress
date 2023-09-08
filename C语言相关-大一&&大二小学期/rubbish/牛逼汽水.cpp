#include <iostream>
#include <cstring>
#include <algorithm>
void reverseWords(char* str) {
    // 反转整个字符串
    std::reverse(str, str + std::strlen(str));

    // 反转每个单词
    char* start = str;
    char* end = str;
    while (*end) {
        while (*end && *end != ' ') {
            ++end;
        }
        std::reverse(start, end);
        start = ++end;
    }
}

int main() {
    char str[] = "hello world";
    reverseWords(str);
    std::cout << str << std::endl;
    return 0;
}

