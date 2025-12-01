#include <iostream>
#include <memory>
#include <vector>

// Abstract Base Class
class Task {
  public:
    virtual void execute() = 0;
    virtual ~Task() {}
};

// Wrapper for int function
class IntTask : public Task {
    int value;

  public:
    IntTask(int v)
        : value(v) {}
    void execute() override {

        long long sum = 0;
        for (int i = 0; i < 10987654; i++) {
            sum += i;
        }

        std::cout << "Sum : " << sum << "\n";
        std::cout << "Processing Int: " << value << "\n";
    }
};

// Wrapper for string function
class StringTask : public Task {
    std::string msg;

  public:
    StringTask(std::string m)
        : msg(m) {}
    void execute() override { std::cout << "Processing String: " << msg << "\n"; }
};

int main() {
    // Store pointers to the base class
    std::vector<std::unique_ptr<Task>> tasks;

    tasks.push_back(std::make_unique<IntTask>(100));
    tasks.push_back(std::make_unique<StringTask>("Data Payload"));

    // Execute them uniformly
    for (const auto& task : tasks) {
        task->execute();
    }

    return 0;
}
