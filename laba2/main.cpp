#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void read(const string& filename, vector<string>& lines) {
    ifstream file(filename);
    string line;
    while (getline(file, line)) {
        lines.push_back(line);
    }
    for (const auto& str : lines) {
        cout << str << endl;
    }
}

void print(const vector<string>& lines) {
}

void write(const vector<string>& lines, const string& filename) {
}

int main() {
    vector<string> lines;
    // Заполняем вектор вручную для теста
    lines.push_back("Пример строки 1");
    lines.push_back("Пример строки 2");
    lines.push_back("Пример строки 3");

    // Вызов функции № 2 для вывода содержимого вектора
    printVector(lines);

    // Вызов функции № 3 для записи содержимого вектора в файл
    writeToFile(lines, "output.txt");

    return 0;
}

