#include <iostream>
using namespace std;

#include "UI.h"

int UI::n = 0;

void UI::start() {
    cout << "�׷��� �������Դϴ�." << endl;
}

int UI::menu() {
    cout << "����:1, ����:2, ��κ���:3, ����:4 >> ";
    cin >> n;
    return n;
}

int UI::insert() {
    cout << "��:1, ��:2, �簢��:3 >> ";
    cin >> n;
    return n;
}

int UI::del() {
    cout << "�����ϰ��� �ϴ� ������ �ε��� >> ";
    cin >> n;
    return n;
}
