#include <stdio.h>
#include "labs.h"

int main() {
    const char *inputStr = "apple dog orange taxi eagle tree"; // Пример строки
    int result = countWords(inputStr);
    
    printf("Количество слов, начинающихся на гласную и заканчивающихся на согласную: %d\n", result);
    
    return 0;
}
