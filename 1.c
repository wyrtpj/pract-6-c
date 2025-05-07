#include <stdio.h>

int main() {
    char lines[4][30] = {
        "/test.txt",
        "Здравствуйте",
        "Я",
        "Маша"
    };
    printf("Имя файла: %s\n", lines[0]);
    char content[100];
    int index = 0;
    for (int i = 1; i < 4; i++) { 
        int j = 0;
        while (lines[i][j] != '\0') {
            content[index] = lines[i][j];
            index++;
            j++;
        }
        content[index] = '\n'; 
        index++;
    }
    content[index] = '\0'; 
    printf("\nСодержимое файла:\n%s", content);
    char target[] = "Привет";
    int contentLength = 0;
    int targetLength = 0;

    while (content[contentLength] != '\0') {
        contentLength++;
    }

    while (target[targetLength] != '\0') {
        targetLength++;
    }

    int found = 0;
    for (int i = 0; i <= contentLength - targetLength; i++) {
        int match = 1;
        for (int j = 0; j < targetLength; j++) {
            if (content[i + j] != target[j]) {
                match = 0;
                break;
            }
        }
        if (match == 1) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("\nСлово \"%s\" найдено в тексте\n", target);
    } else {
        printf("\nСлово \"%s\" не найдено\n", target);
    }

    return 0;
}
