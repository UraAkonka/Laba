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

void writeToFile(const vector<string>& lines, const string& filename) {
    ofstream file(filename);
    if (!file) {
        cerr << "������ �������� ����� ��� ������!" << endl;
        return;
    }
    for (const auto& str : lines) {
        file << str << endl;
    }

int main() {
    vector<string> lines;
    // ��������� ������ ������� ��� �����
    lines.push_back("������ ������ 1");
    lines.push_back("������ ������ 2");
    lines.push_back("������ ������ 3");

    // ����� ������� � 2 ��� ������ ����������� �������
    printVector(lines);

    // ����� ������� � 3 ��� ������ ����������� ������� � ����
    writeToFile(lines, "output.txt");

    return 0;
}

