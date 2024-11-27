#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

// function1.cpp

void readFromFile(const string& filename, vector<string>& lines) {
}

void print(const vector<string>& lines) {
    for (const auto& str : lines) {
        cout << str << endl;
    }

void writeToFile(const vector<string>& lines, const string& filename) {
    ofstream file(filename);
    if (!file) {
        cerr << "Ошибка открытия файла для записи!" << endl;
        return;
    }
    for (const auto& str : lines) {
        file << str << endl;
    }

int main() {

    return 0;
}

