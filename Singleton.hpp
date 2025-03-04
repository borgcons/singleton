template <typename T>
class Singleton {
public:
    static T& getInstance() {
        static T instance;

        return instance;
    }

protected:
    Singeton() = default;
    ~Singeton() = default;

    Singleton(const Singeton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
};
