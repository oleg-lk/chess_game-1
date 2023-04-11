#include "get_index.h"

//��������� ������� ������
bool get_index(std::string str_index, size_t& row_index, size_t& col_index) {

    for (int i = 0; i < str_index.size(); i++) {
        //index_find = ������� ���������
        auto index_find = str_index[i];

        //���� ������ �������� ������ [0]
        if (i == 0) {

            //temp = (���-�� ����� - 1) - command[0] (������� ��������)
            auto temp = 'g' - index_find;

            //������ ������� = ���-�� ����� - ������� �������� - 1
            col_index = 8 - temp - 1;
        }
        else if (i == 1) {
            //������ ������ = char ���-�� ����� - char command[1]
            row_index = '8' - index_find;
        }
    }
    return row_index, col_index;
}