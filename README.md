# Prime Number Generator in C++

![C++](https://img.shields.io/badge/C++-17-blue)
![Data Science](https://img.shields.io/badge/Data%20Science-Ready-green)
![Status](https://img.shields.io/badge/Status-Completed-brightgreen)

This is an interactive console-based program written in C++ that generates prime numbers with animation effects.  
It includes a **typewriter-style text display**, a **progress bar**, and prints the primes in a clean, formatted layout.  

---

## Features
- Calculates prime numbers up to a user-defined amount  
- Shows progress with a live updating progress bar  
- Typewriter animation effect using C++ threading and timing  
- Displays 5 prime numbers per line for readability  
- Beginner-friendly and great for learning basic logic and I/O

---

## How to Run

1. Clone the repository:
```bash
git clone https://github.com/g3raldatsc/prime-generator-cpp.git
```
2. Navigate into the folder:
``` bash
cd prime-generator-cpp
```
3. Compile the code:
``` bash
g++ main.cpp -o prime_generator
```
4. Run the program:
``` bash
./prime_generator
```

## Example Output
``` bash
=== Prime Number Generator (C++) ===
Enter how many prime numbers you want: 15
Choose typing speed (f = fast, s = slow): f
Calculating primes: [███████████████████████-----] 80%

The first 15 prime numbers are:
2    3    5    7    11
13   17   19   23   29
31   37   41   43   47
```

## Learning Points

1. Prime number logic in C++
2. Usage of <thread> and <chrono> for animation effects
3. Simple progress bar visualization in terminal
