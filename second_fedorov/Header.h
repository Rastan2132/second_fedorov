#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <conio.h>
#include <fstream>
#include <ctype.h>
#include <windows.h>
#include <vector>
#include <sstream>

using namespace std;

#define MAXLINE 20
#define num_ 3
#define sex_ 2
#define year_ 4
#define piesel_ 12


#define MENU "| q-Zamkac |  a-ADD uzytkownika  |  d-Usuwanie uzytkownika |  e-Redaktor |  s-Sortowac |  y-Szukaj |" 
#define stru "#       Name                 Surname	          Year		       Piesel 	       Sex"


#define MANIP setw(MAXLINE) <<  left 

struct Users
{
	string Name;
	string Surname;
	string Year;
	string piesel;
	string sex;
};
struct Uzond
{
	Users **people;
	string Name;
	string Numer;
	int size_Of_arr_peopls;
};
struct COLOR
{
	short text;
	short back;
};
enum ConsoleColor
{
	Black = 0, Blue, Green, Cyan, Red, Magenta, Brown, LightGray, DarkGray,
	LightBlue, LightGreen, LightCyan, LightRed, LightMagenta, Yellow, White
};

enum Keys { Enter = 13, Backspace = 8 };
enum SpecialKeys { Left = 75, Right = 77, End = 79, Home = 71, Esc = 27, Del = 83 };



void error(); 
void create(Uzond*& arr, short size, short size_of_peopl);
void initRand(Uzond*& program, short size, short size_of_peopl, vector<string> arr_name, vector<string> arr_suname, vector<string>arr_of_name_urzant);
void show(Uzond* program, short size, short size_of_peopl);
void find(Uzond*& program, short& size, short& size_of_peopl);
void add(Uzond*& program, short* size, short* size_of_peopl, vector<string> arr_name, vector<string> arr_suname, vector<string>arr_of_name_urzant);
char* strstr_lower(char* str_a, char* str_b);
int rand_data(string sex);								/// �� 0 �� 9 ���. �� 10 �� 19 ���
string rand_data(int max);
void sort(Uzond*& program, short size, short size_of_peopl);
bool isalpha_r(unsigned char a);
bool isdigit_r(unsigned char a);
vector<char> stringToArrChar(const string& str);
void edit(Uzond*& program, short index_1, short index_2);
void dell(Uzond*& program, short* size, short* size_of_peopl);
void clear(Uzond* program, short size, short size_Of_arr_peopl);


COORD getCursorPosition(void);
void Clear(int x, int y, long cnt = 100);
bool stredit(char* str, int buffer_size, int x, int y, int cursor = 0, bool clear_after = true);
void showcursor(bool flag);
void setCursorPosition(int x, int y);
COORD getConsoleSize();
COLOR GetColor();
WORD GetColorWord();
void SetColor(COLOR Color);
void print_find(char* str, short str_size, char* keyword, short key_size, int text = -1, int back = -1);


void DeleteCh(char* str, int& cursor, int& term);
void InsertCh(char* str, int buffer_size, int& cursor, int& term, char symb);


	