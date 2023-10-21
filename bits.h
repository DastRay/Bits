#pragma once
#pragma once
#include <stdbool.h>

/**
 * @brief ������� ����� � �������� ����
 * @param n_: �����
 * @param bits_: ���-�� ��������� ���
*/
void PrintBin(const int n_, const char bits_);

/**
 * @brief ����� ��������� � �������������
 * @param c_: �����
 * @return (-1) * c_
*/
char Inverse(const char c_);

/**
 * @brief ��������� ��� � �����
 * @param val_: �����
 * @param pos_: ������� ����
 * @return ����� ��� �� �������
*/
bool CheckBit(const int val_, const int pos_);

/**
 * @brief ������������� 1 � ������ �������
 * @param val_: �����
 * @param pos_: �������
 * @return ����� � ���������� �����
*/
int SetBit(const int val_, const int pos_);

/**
 * @brief ������������� 0 � ������ �������
 * @param val_: �����
 * @param pos_: �������
 * @return ����� � ���������� �����
*/
int UnsetBit(const int val_, const int pos_);

/**
 * @brief ������ ��� � ������� �� ���������������
 * @param val_: �����
 * @param pos_: �������
 * @return ����� � ���������� �����
*/
int SwitchBit(const int val_, const int pos_);

int Ex1(const int n_);

int Ex4(const unsigned int n_);

int Ex5(const int n_, const int i_);

int Ex7(const int n_, const int i_);

int Ex8(const int n_);