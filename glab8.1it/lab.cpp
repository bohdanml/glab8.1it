#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

int Count(const char* str) {
    int k = 0;
    int len = strlen(str);

    for (int i = 0; i < len - 1; ++i) {
        if (str[i] == 'n' && str[i + 1] == 'o') {
            ++k;
        }
    }

    return k;
}

char* Change(const char* str) {
    int len = strlen(str);
    char* tmp = new char[len * 2 + 1];
    char* t = tmp;
    tmp[0] = '\0';

    for (int i = 0; i < len; ++i) {
        if (i < len - 2 && str[i] == 'n' && str[i + 1] == 'o') {
            strncat_s(t, len * 2 + 1 - strlen(t), "**", 2);
            t += 2;
            ++i;
        }
        else {
            *t++ = str[i];
            *t = '\0';
        }
    }

    return tmp;
}

int main() {
    const int maxInputSize = 100;
    char input[maxInputSize];

    std::cout << "Enter string (word): " << std::endl;
    std::cin.getline(input, maxInputSize);

    int count = Count(input);
    std::cout << "The count of occurrences of the pattern 'no': " << count << std::endl;

    char* dest = Change(input);
    std::cout << "Modified string (result): " << dest << std::endl;


    return 0;
}
