#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#define WRITE_FUNC WriteFile
#else
#include <unistd.h>
#define WRITE_FUNC write
#endif

void ft_print_alphabet(char c) {
    WRITE_FUNC(GetStdHandle(STD_OUTPUT_HANDLE), &c, 1, NULL, NULL);
}

void ft_putstr(const char* str) {
    for (; *str != '\0'; ++str) {
        ft_print_alphabet(*str);
    }
}

int main() {
    const char* myString = "abcdefghijklmnoprstuvyz";
    ft_putstr(myString);
    return 0;
}