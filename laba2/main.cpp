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
        cerr << "������ �������� ����� ��� ������!" << endl;
        return;
    }
    for (const auto& str : lines) {
        file << str << endl;
    }
}


int main() {
    setlocale(LC_ALL, "Russian");
    vector<string> lines;
    // ��������� ������ ������� ��� �����
    lines.push_back("������ ������ 1");
    lines.push_back("������ ������ 2");
    lines.push_back("������ ������ 3");

    // ����� ������� � 2 ��� ������ ����������� �������
    print(lines);

    // ����� ������� � 3 ��� ������ ����������� ������� � ����
    write(lines, "output.txt");

    return 0;
}

