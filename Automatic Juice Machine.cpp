#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void simulatePouring(string juiceName) {
    cout << "\nPouring " << juiceName << " juice..." << endl;
    for (int i = 0; i < 5; i++) {
        cout << ".";
        cout.flush();
        this_thread::sleep_for(chrono::milliseconds(500));
    }
    cout << "\n" << juiceName << " juice is ready! Enjoy 😊" << endl;
}

int main() {
    int choice;

    cout << "🧃 Welcome to the Automatic Juice Machine 🧃" << endl;
    cout << "------------------------------------------" << endl;
    cout << "Select your juice:" << endl;
    cout << "1. Orange Juice" << endl;
    cout << "2. Apple Juice" << endl;
    cout << "3. Mango Juice" << endl;
    cout << "4. Watermelon Juice" << endl;
    cout << "5. Exit" << endl;

    cout << "Enter your choice (1-5): ";
    cin >> choice;

    switch (choice) {
        case 1:
            simulatePouring("Orange");
            break;
        case 2:
            simulatePouring("Apple");
            break;
        case 3:
            simulatePouring("Mango");
            break;
        case 4:
            simulatePouring("Watermelon");
            break;
        case 5:
            cout << "Thank you for using the Juice Machine. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice. Please select between 1 and 5." << endl;
    }

    return 0;
}
