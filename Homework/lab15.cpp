//Test case 1: Hi, This is my first time in RMUTL
//Test case 2: Encourage your students to test their program with different input files to ensure its correctness

#include <cstdio>
#include <fstream>
#include <string>

int main() {
    char filename[100];
    printf("Enter file name: ");
    scanf("%s", filename);

    std::ifstream file(filename);
    if (!file) {
        printf("Cannot open file '%s'.\n", filename);
        return 1;
    }

    std::string word;
    int count = 0;
    while (file >> word) {
        count++;
    }

    printf("Total number of words in '%s' : %d words\n", filename, count);
    file.close();
    return 0;
}
