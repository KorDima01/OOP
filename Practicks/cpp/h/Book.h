#include <iostream>
#include <string>
#include <vector>

#ifndef BOOK_H_
#define BOOK_H_

class Book {
	int pages;	// количество страниц
	int currentPage;	//текущая страница
	vector<string> authors;	// автор
	string title;	// название
	string genre;	// жанр
	string publisher;	// издатель
public:
	Book(); // Создаёт пустой экземпляр

	Book(int, const vector<string> &, string &, const string &, const string &);
	// Создаёт экземпляр с заполненными полями

	void setNumberOfPages(const int);	// Ввод количества страниц в книге

	int getNumberOfPages();		// Получение количества страниц

	void setAuthors(const vector<string> &);	// Ввод автора книги

	void addAuthor(const string &);	// Добавление одного автора к уже существующим

	vector<string> &getAuthors();	// Получение авторов книги

	void setPublisher(const string &);	// Ввод издателя книги

	string &getPublisher();	// Получение издателя книги

	void setGenre(const string &);	// Ввод жанра

	string &getGenre();	// Получение жанра

	void openPage(const int);	// Установка определённой текущей страницы

	void nextPage();	// Открытие следующей страницы

	int getCurrentPage();	// Получение текущей открытой страницы

	void setTitle(const string &);	// Ввод названия книги

	string &getTitle();	// Получение названия книги

	~Book();	// Деструктор экземпляра
};

#endif /* BOOK_H_ */
