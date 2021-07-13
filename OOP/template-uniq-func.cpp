#include <iostream>
using namespace std;

template <class T>
T sum(T a, T b) {
    return a+b;
}

int main () {
    int x=7, y=15;
    cout << sum(x, y) << endl;
}

/*
#include <iostream>
using namespace std;

template <class T>
class Pair {
    private:
        T first, second;
    public:
        Pair (T a, T b):
        first(a), second(b) { }
        T bigger();
};

template <class T>
T Pair<T>::bigger() {
    return (first>second ? first : second);
}

int main()
{
    Pair <int> obj(11, 22);
    cout << obj.bigger();

    return 0;
}
*/

/*#include <iostream>
using namespace std;

template <class T>
class Pair {
    private:
        T first, second;
    public:
        Pair (T a, T b):
        first(a), second(b) { }
        T bigger();
};

template <class T>
T Pair<T>::bigger() {
    return (first>second ? first : second);
}

int main()
{
    Pair <double> obj(23.43, 5.68);
    cout << obj.bigger()<<endl;
    Pair <int> obj1(23, 568);
    cout << obj1.bigger()<<endl;

    return 0;
}
*/
/*
#include <iostream>
using namespace std;

template <class T>
class MyClass {
    public:
        MyClass (T x) {
            cout <<x<<" -  not a char"<<endl;
        }
};

template < >
class MyClass<char> {
    public:
        MyClass (char x) {
            cout <<x<<" is a char!"<<endl;
        }
};

int main () {
    MyClass<int> ob1(42);
    MyClass<double> ob2(5.47);
    MyClass<char> ob3('s');
}
*/