
#ifndef LIB_H
#define LIB_H

/**
 * Вивести структуру директорій, починаючи з вказаного шляху.
 * 
 * path - Початковий шлях до дерева директорій.
 * output_fp - Вказівник на файл для запису, де буде записана структура.
 */
void print_directory_structure(const char *path, FILE *output_fp);

/**
 * Рекурсивний обхід директорії та виведення її структури.
 * 
 * path - Поточний шлях у дереві директорій.
 * output_fp - Вказівник на файл для запису, де буде записана структура.
 * level - Поточний рівень відступів (глибина у дереві директорій).
 */
void traverse_directory(const char *path, FILE *output_fp, int level);

#endif
