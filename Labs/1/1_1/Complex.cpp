#include "Complex.h"
#include <cmath>
Complex::Complex(double Re,double Im){
    Re_ = Re;
    Im_ = Im;
}
double  Complex::printRe(){
    return Re_;
}
double Complex::printIm(){
    return Im_;
}
double Complex::getRe(){
    return this->Re_;
}
double Complex::getIm(){
    return this->Im_;
}
double Complex::module(){
    return sqrt(this->Re_*this->Re_ + this->Im_ * this->Im_);
}
Complex Complex::operator+(Complex b){
    Complex res;
    res.Re_ = this->Re_ + b.Re_;
    res.Im_ = this->Im_ + b.Im_;
    return res;
}
Complex Complex::operator-(Complex b){
    Complex res;
    res.Re_ = this->Re_ - b.Re_;
    res.Im_ = this->Im_ - b.Im_;
    return res;
}
Complex Complex::operator*(Complex b){
    Complex res;
    res.Re_ = this->Re_ * b.Re_ - this->Im_ * b.Im_;
    res.Im_ = this->Re_ * b.Im_ + this->Im_ * b.Re_;
    return res;
}
Complex Complex::operator/(Complex b){
    Complex res;
    res.Re_ = (this->Re_ * b.Re_ + this->Im_ * b.Im_)/(b.Re_ * b.Re_ + b.Im_ * b.Im_);
    res.Im_ = (b.Re_ * this->Im_ - this->Re_ * b.Im_)/(b.Re_ * b.Re_ + b.Im_ * b.Im_);
    return res;
}
Complex Complex::pow(int p){
    Complex res;
    res = *this;
    while (p > 1) {
        res = res * *this;
        p--;
    }
    return  res;
}
