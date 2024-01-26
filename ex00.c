#ifdef _WIN32
#include <windows.h>
#define WRITE_FUNC WriteFile
#else
#include <unistd.h>
#define WRITE_FUNC write
#endif

void ft_putchar(char c) {
    WRITE_FUNC(GetStdHandle(STD_OUTPUT_HANDLE), &c, 1, NULL, NULL);
}

int main() {
    char myChar = 'a';  // Define a character, for example
    ft_putchar(myChar);
    return 0;
}