#include <iostream>

using namespace std;

template <class T>

class Arithmetic
{
private:
    T a, b;

public:
    Arithmetic(T a, T b);
    T add();
    T sub();
    T mul();
    T div();
};

template <class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
    this->a = a;
    this->b = b;
}
template <class T>
T Arithmetic<T>::add()
{
    return a + b;
}
template <class T>
T Arithmetic<T>::sub()
{
    return a - b;
}
template <class T>
T Arithmetic<T>::mul()
{
    return a * b;
}
template <class T>
T Arithmetic<T>::div()
{
    return a / b;
}

int main()

{
    Arithmetic<float> ar(10.5, 5.25);
    cout << "Addition is " << ar.add() << endl;
    cout << "Subtraction is " << ar.sub() << endl;
    cout << "Multiplication is " << ar.mul() << endl;
    cout << "Division is " << ar.div() << endl;
    return 0;
}