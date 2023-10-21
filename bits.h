#pragma once
#include <stdbool.h>

/**
 * @brief Выводит все числа натурального ряда до заданного N, содержащие только одну единицу в двоичном представлении
 * @param n_: Число
*/
void NumbersWithOneBitSet(int n_);
/**
 * @brief Выводит все степени двойки меньше заданного числа
 * @param num_: Число
*/
int Degree2(int num_);
/**
 * @brief Деление целого числа типа unsigned short int на 8
 * @param num_: Число
*/
int Div8(unsigned short int num_);
/**
 * @brief Умножение целого числа типа unsigned short int на 64
 * @param num_: Число
*/
int Mult64(unsigned short int num_);
/**
 * @brief Определяет чётность числа
 * @param n_: Число
*/
int IsEven(int num);
/**
 * @brief Определяет знак числа
 * @param n_: Число
*/
int Sign(const int n_);
/**
 * @brief Выводит число в двоичном виде
 * @param n_: Число
 * @param bits_: Кол-во выводимых бит
*/
int PrintBin(const int n_, const char bits_);

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

int Ex6(const int n_, const int i_);

int Ex7(const int n_, const int i_);

int Ex8(const int n_);