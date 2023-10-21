#pragma once
#pragma once
#include <stdbool.h>

/**
 * @brief Выводит число в двоичном виде
 * @param n_: Число
 * @param bits_: Кол-во выводимых бит
*/
void PrintBin(const int n_, const char bits_);

/**
 * @brief Число переводит в отрицательное
 * @param c_: Число
 * @return (-1) * c_
*/
char Inverse(const char c_);

/**
 * @brief Проверяет бит в числе
 * @param val_: Число
 * @param pos_: Позиция бита
 * @return Какой бит на позиции
*/
bool CheckBit(const int val_, const int pos_);

/**
 * @brief Устанавливает 1 в нужную позицию
 * @param val_: Число
 * @param pos_: Позиция
 * @return Число в измененным битом
*/
int SetBit(const int val_, const int pos_);

/**
 * @brief Устанавливает 0 в нужную позицию
 * @param val_: Число
 * @param pos_: Позиция
 * @return Число в измененным битом
*/
int UnsetBit(const int val_, const int pos_);

/**
 * @brief Меняет бит в позиции на противоположный
 * @param val_: Число
 * @param pos_: Позиция
 * @return Число с измененным битом
*/
int SwitchBit(const int val_, const int pos_);

int Ex1(const int n_);

int Ex4(const unsigned int n_);

int Ex5(const int n_, const int i_);

int Ex7(const int n_, const int i_);

int Ex8(const int n_);