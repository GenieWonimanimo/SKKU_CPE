#include <iostream>

int main(void)
{
    int fibonacci[] = {0, 1, 1, 2, 3, 5};
    int i;

    for (int i = 0; i < sizeof(fibonacci) / sizeof(int); i++)
        std::cout << fibonacci[i] << " ";

    std::cout << "\n" << std::endl;

    for (int number : fibonacci)
        std::cout << number << " ";
    
    return 0;
}