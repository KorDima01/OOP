#ifndef class
#define cless
void big_integer::_remove_leading_zeros() {
        while (this->_digits.size() > 1 && this->_digits.back() == 0) {
                this->_digits.pop_back();
        }
        // этот код нужен, чтобы у нас не было отрицательного нуля
        if (this->_digits.size() == 1 && this->_digits[0] == 0) this->_is_negative = false;
}

#endif
