#include <iostream>
#include <cstring>
#include <algorithm>
void reverseWords(char* str) {
    // ��ת�����ַ���
    std::reverse(str, str + std::strlen(str));

    // ��תÿ������
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

