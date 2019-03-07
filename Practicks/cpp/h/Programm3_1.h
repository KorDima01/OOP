#ifndef Programm3_1
#define Programm3_1
   
#include "Book.h"


  Book::Book() {
  	this->pages = 0;
  	this->currentPage = 0;
  	this->author.clear();
  }

  Book::Book(int pages, string &author, string &title) {
  	this->pages = pages;
  	if (this->pages) {
  		this->currentPage = 1;
  	} else {
  		this->currentPage = 1;
  	}
  	this->author = author;
  	this->title = title;
  }

  void Book::setAuthor(const string &author) {
  	this->author = author;
  }

  string &Book::getAuthor() {
  	if(!author.size()) {
  		cout << "Нет автора." << endl;
  	}
  	return author;
  }

  void Book::setNumberOfPages(const int pages) {
  	this->pages = pages;
  	if (pages) {
  		currentPage = 1;
  	} else {
  		currentPage = 0;
  	}

  }

  int Book::getNumberOfPages() {
  	return pages;
  }

  void Book::openPage(const int page) {
  	if (page <= pages) {
  		currentPage = page;
  	} else {
  		cout << "В книге нет страницы с номером: #" << page << endl;
  	}
  }

  void Book::nextPage()
  	if (currentPage == pages) {
  		cout << "Нельзя открыть следующую страницу, т.к. это последняя страница." << endl;
  	} else {
  		currentPage++;
  	}
  }

  int Book::getCurrentPage() {
  	return currentPage;
  }

  void Book::setTitle(const string &title) {
  	this->title = title;
  }

  string &Book::getTitle() {
  	if (!title.size()) {
  		cout << "У книги нет названия." << endl;
  	}
  	return title;
  }

  Book::~Book() {
  	author.clear();
  }
  void Programma3_1(){
}

#endif
