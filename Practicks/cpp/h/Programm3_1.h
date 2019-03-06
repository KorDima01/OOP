#ifndef Programm3_1
#define Programm3_1

#include "Book.h"


  Book::Book() {
  	this->pages = 0;
  	this->currentPage = 0;
  	this->authors.clear();
  	this->genre = "";
  	this->publisher = "";
  }

  Book::Book(int pages, const std::vector<std::string> &authors, std::string &title, const std::string &genre, const std::string &publisher) {
  	this->pages = pages;
  	if (this->pages) {
  		this->currentPage = 1;
  	} else {
  		this->currentPage = 1;
  	}
  	this->authors = authors;
  	this->title = title;
  	this->genre = genre;
  	this->publisher = publisher;
  }

  void Book::setAuthors(const std::vector<std::string> &authors) {
  	this->authors = authors;
  }

  void Book::addAuthor(const std::string &author) {
  	authors.push_back(author);
  }

  std::vector<std::string> &Book::getAuthors() {
  	if(!authors.size()) {
  		std::cout << "The book has no author." << std::endl;
  	}
  	return authors;
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

  void Book::setPublisher(const std::string & publisher) {
  	this->publisher = publisher;
  }

  std::string &Book::getPublisher() {
  	if (!publisher.size()) {
  		std::cout << "The book has no publisher." << std::endl;
  	}
  	return publisher;
  }

  void Book::setGenre(const std::string &genre) {
  	this->genre = genre;
  }

  std::string &Book::getGenre() {
  	if (!genre.size()) {
  		std::cout << "The book has no genre." << std::endl;
  	}
  	return genre;
  }

  void Book::openPage(const int page) {
  	if (page <= pages) {
  		currentPage = page;
  	} else {
  		std::cout << "Page " << page << " does not exist." << std::endl;
  	}
  }

  void Book::nextPage() {
  	if (currentPage == pages) {
  		std::cout << "Can't open next page. This page is the last." << std::endl;
  	} else {
  		currentPage++;
  	}
  }

  int Book::getCurrentPage() {
  	return currentPage;
  }

  void Book::setTitle(const std::string &title) {
  	this->title = title;
  }

  std::string &Book::getTitle() {
  	if (!title.size()) {
  		std::cout << "The book has no title." << std::endl;
  	}
  	return title;
  }

  Book::~Book() {
  	authors.clear();
  	genre.clear();
  	publisher.clear();
  }
  void Programma3_1(){
}

#endif
