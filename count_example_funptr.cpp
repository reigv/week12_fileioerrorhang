#include <iostream>

using namespace std;

// class Counter {
//     private:
//         int count;
//     public:
//         Counter() : count(0) {}
//         void increment() { count++; }
//         int getCount() const { return count; }
// };

// int main() {
//     Counter counter;

//     // Create a function pointer to the increment method
//     void (Counter::*incrementPtr)() = &Counter::increment;

//     // Call the increment method using the function pointer
//     (counter.*incrementPtr)();
//     (counter.*incrementPtr)();

//     cout << "Count: " << counter.getCount() << endl; // Output: Count: 2

//     return 0;
// }


class Counter {
    private:
        int count;
    public:
        Counter() : count(0) {}
        void operator() () {
            count++;
            cout << "Count: " << count << endl;
        }
        int getCount() const { return count; }
};

int main() {
    Counter counter;

    // Call the operator() to increment the count
    counter(); // Output: Count: 1
    counter(); // Output: Count: 2

    cout << "call " << counter.getCount() << " times" << endl; // Output: call 2 times
    return 0;
}