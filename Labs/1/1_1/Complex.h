class Complex{
    double Re_,Im_;
public:
    Complex(double Re = 0,double Im = 0);
    double printRe();
    double printIm();
    double getRe();
    double getIm();
    double module();
    Complex operator+(Complex b);
    Complex operator-(Complex b);
    Complex operator*(Complex b);
    Complex operator/(Complex b);
    Complex pow(int p);
};
