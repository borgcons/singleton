#include "Singelton.hpp"

class MyClass : public Singleton<MyClass> {
    friend class Singleton<MyClass>;
public:
    void func() {
        std::cout << "Function called" << std::endl;
    }

private:
    MyClass() = default;
};
