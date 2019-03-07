#include <iostream>
#include <string>
#include <vector>

#ifndef BOOK_H_
#define BOOK_H_

class Book {
	int pages;	// количество страниц
	int currentPage;	//текущая страница
	string authors;	// автор
	string title;	// название
public:
	Book(); // Создаёт пустой экземпляр

	Book(int, const string &, string &, const string &);
	// Создаёт экземпляр с заполненными полями

	void setNumberOfPages(const int);	// Ввод количества страниц в книге

	int getNumberOfPages();		// Получение количества страниц

	void setAuthors(const string &);	// Ввод автора книги

	void addAuthor(const string &);	// Добавление одного автора к уже существующим

	string &getAuthors();	// Получение авторов книги

	void openPage(const int);	// Установка определённой текущей страницы

	void nextPage();	// Открытие следующей страницы

	int getCurrentPage();	// Получение текущей открытой страницы

	void setTitle(const string &);	// Ввод названия книги

	string &getTitle();	// Получение названия книги

	~Book();	// Деструктор экземпляра
};

#endif /* BOOK_H_ */
