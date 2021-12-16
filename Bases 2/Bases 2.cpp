#include <iostream>

#include <cmath>

#include <stdlib.h>

#include <cstdlib>

#include <cstring>

#include <string>

#include <sstream>

#include <conio.h>

#include <limits>

#include <iomanip>

#include <ctime>

int main()
{
    long long o, b, q, k{}, l, v{0};
    std::string n, t, i;
    bool x;
    std::cout << "enter original base and new base\n";
    std::cin >> o;
    std::cin >> b;
    q = 0;
    x = 1;
    l = 0;
    do {
        std::cout << "enter number one digit at a time right to left\n";
        std::cin >> n;
        t = t + n;

        if (n == "1"){
            std::stringstream ss;
            ss << n;
            ss >> k;

        }
        if (n == "2") {
            std::stringstream ss;
            ss << n;
            ss >> k;

        }
        if (n == "3") {
            std::stringstream ss;
            ss << n;
            ss >> k;

        }
        if (n == "4") {
            std::stringstream ss;
            ss << n;
            ss >> k;

        }
        if (n == "5") {
            std::stringstream ss;
            ss << n;
            ss >> k;

        }
        if (n == "6") {
            std::stringstream ss;
            ss << n;
            ss >> k;

        }
        if (n == "7") {
            std::stringstream ss;
            ss << n;
            ss >> k;

        }
        if (n == "8") {
            std::stringstream ss;
            ss << n;
            ss >> k;

        }
        if (n == "9") {
            std::stringstream ss;
            ss << n;
            ss >> k;
        }
        if (n == "a") {
            k = 10;
            

        }
        if (n == "b") {
            k = 11;
            
        }
        if (n == "c") {
            k = 12;
            
        }
        if (n == "d") {
            k = 13;
            
        }
        if (n == "e") {
            k = 14;
            
        }
        if (n == "f") {
            k = 15;
            
        }
        if (n == "g") {
            k = 16;
            
        }
        if (n == "h") {
            k = 17;
            
        }
        if (n == "i") {
            k = 18;
            
        }
        if (n == "j") {
            k = 19;
            
        }
        if (n == "x") {
            x = 0;
        }
        if (x == 1) {
            //std::cout << k << "\n";
            l = (k * pow(o, q));
            //std::cout << l << "\n";
            v = v + l;
            //std::cout << v << "\n";
            q = q + 1;
        }

    } while (x == 1);

    if (o == 2) {
        i = "binary";
    }
    if (o == 3) {
        i = "ternary";
    }
    if (o == 4) {
        i = "quatrinary";
    }
    if (o == 5) {
        i = "quinary";
    }
    if (o == 6) {
        i = "senary";
    }
    if (o == 7) {
        i = "septenary";
    }
    if (o == 8) {
        i = "octal";
    }
    if (o == 9) {
        i = "nonary";
    }
    if (o == 11) {
        i = "unidecimal";
    }
    if (o == 12) {
        i = "duodecimal";
    }
    if (o == 13) {
        i = "tridecimal";
    }
    if (o == 14) {
        i = "tetradecimal";
    }
    if (o == 15) {
        i = "pentadecimal";
    }
    if (o == 16) {
        i = "hexadecimal";
    }
    if (o == 17) {
        i = "heptadecimal";
    }
    if (o == 18) {
        i = "octodecimal";
    }
    if (o == 19) {
        i = "enneadecimal";
    }
    if (o == 20) {
        i = "vigesimal";
    }


    std::cout << t << " in " << i  << " = " << v << "in decimal";
}