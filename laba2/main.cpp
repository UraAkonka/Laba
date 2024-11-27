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
    for (const auto& str : lines) {
        cout << str << endl;
    }
}
void write(const vector<string>& lines, const string& filename) {
    ofstream file(filename);
    if (!file) {
        cerr << "Ошибка открытия файла для записи!" << endl;
        return;
    }
    for (const auto& str : lines) {
        file << str << endl;
    }
}


int main() {
    setlocale(LC_ALL, "Russian");
    vector<string> lines;
    // Заполняем вектор вручную для теста
    lines.push_back("Пример строки 1");
    lines.push_back("Пример строки 2");
    lines.push_back("Пример строки 3");

    // Вызов функции № 2 для вывода содержимого вектора
    print(lines);

    // Вызов функции № 3 для записи содержимого вектора в файл
    write(lines, "output.txt");

    return 0;
}

