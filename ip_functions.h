#pragma once

#include <string>
#include <vector>

// Проверка версии (отработка автотеста)
int version();

// Запись ip адреса в отдельный вектор
std::vector<std::string> split(const std::string &str, char d);

// Сортировка по возрастанию
void sort_asc(std::vector<std::vector<std::string> > &ip_pool);

// Сортировка по убыванию
void sort_desc(std::vector<std::vector<std::string> > &ip_pool);

// Вывод на экран ip адреса
void print_ip_v4(std::vector<std::string> &ip_v4, int &num);

// Поиск ip адреса по маске
void filter(std::vector<std::vector<std::string> > &ip_pool, int a1=0, int a2=0, int a3=0, int a4=0);  

// Поиск ip адреса по числу
void filter_any(std::vector<std::vector<std::string> > &ip_pool, int a=0) ;
