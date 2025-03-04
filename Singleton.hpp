template <typename T>
class Singleton {
public:
    static T& getInstance() {
        static T instance;

        return instance;
    }

protected:
    Singleton() = default;
    ~Singleton() = default;

    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
};
