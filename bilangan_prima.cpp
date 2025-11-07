#include <iostream>
#include <vector>
#include <thread>
#include <chrono>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

void typePrint(const string &text, int delay = 50) {
    for (char c : text) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(delay));
    }
    cout << endl;
}

void progressBar(int current, int total) {
    int barWidth = 30;
    float progress = (float)current / total;
    int pos = barWidth * progress;

    cout << "\rCalculating primes: [";
    for (int i = 0; i < barWidth; ++i) {
        if (i < pos) cout << "█";
        else cout << "-";
    }
    cout << "] " << int(progress * 100.0) << "%";
    cout.flush();
}

int main() {
    typePrint("=== Prime Number Generator (C++) ===", 40);

    int count;
    cout << "Enter how many prime numbers you want: ";
    cin >> count;

    if (count <= 0) {
        cout << "Please enter a positive number." << endl;
        return 0;
    }

    char speedChoice;
    int delay;
    cout << "Choose typing speed (f = fast, s = slow): ";
    cin >> speedChoice;

    if (speedChoice == 'f' || speedChoice == 'F') delay = 10;
    else delay = 50;

    vector<int> primes;
    int num = 2;

    while (primes.size() < (size_t)count) {
        if (isPrime(num)) {
            primes.push_back(num);
        }
        progressBar(primes.size(), count);
        num++;
        this_thread::sleep_for(chrono::milliseconds(10));
    }

    cout << endl << endl;
    typePrint("The first " + to_string(count) + " prime numbers are:\n", delay);

    for (size_t i = 0; i < primes.size(); ++i) {
        cout << primes[i] << "\t";
        if ((i + 1) % 5 == 0) cout << endl;
        this_thread::sleep_for(chrono::milliseconds(delay));
    }

    cout << endl << endl;
    typePrint("Done! Thank you for using this program.", delay);

    return 0;
}