//
// Created by Mr.Hu on 2018/11/2.
//
#include <iostream>

using namespace std;

int main() {

    int count = 0;
    for (int i = 0; i <= 33; ++i) {  //ĸ���������
        for (int j = 0; j <= 100; ++j) { //�����������
            for (int k = 0; k <= 100; ++k) { //С���������
                if ((k + j + i == 100) && (2*i + 1*j + 0.5*k == 100)) {
                    cout << "ĸ����" << i << "ֻ, ������" << j << "ֻ, С����" << k << "ֻ" << endl;
                    count++;
                }
            }
        }
    }

    cout << "����" << count << "�ֽ������" << endl;
}
