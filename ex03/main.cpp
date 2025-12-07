#include "Fixed.hpp"
#include <iostream>

int main(void) {
    // Test des constructeurs
    Fixed a;
    Fixed const b(10);
    Fixed const c(42.42f);
    Fixed const d(b);
    
    a = Fixed(1234.4321f);
    
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    
    std::cout << std::endl << "=== Tests des opérateurs de comparaison ===" << std::endl << std::endl;
    
    // Tests des opérateurs de comparaison
    std::cout << "Comparaison a > b: " << (a > b) << " (attendu: 1)" << std::endl;
    std::cout << "Comparaison a < b: " << (a < b) << " (attendu: 0)" << std::endl;
    std::cout << "Comparaison b > c: " << (b > c) << " (attendu: 0)" << std::endl;
    std::cout << "Comparaison b < c: " << (b < c) << " (attendu: 1)" << std::endl;
    std::cout << "Comparaison c >= d: " << (c >= d) << " (attendu: 1)" << std::endl;
    std::cout << "Comparaison b >= d: " << (b >= d) << " (attendu: 1)" << std::endl;
    std::cout << "Comparaison a <= c: " << (a <= c) << " (attendu: 0)" << std::endl;
    std::cout << "Comparaison b <= d: " << (b <= d) << " (attendu: 1)" << std::endl;
    std::cout << "Comparaison a == b: " << (a == b) << " (attendu: 0)" << std::endl;
    std::cout << "Comparaison b == d: " << (b == d) << " (attendu: 1)" << std::endl;
    std::cout << "Comparaison a != b: " << (a != b) << " (attendu: 1)" << std::endl;
    std::cout << "Comparaison b != d: " << (b != d) << " (attendu: 0)" << std::endl;
    
    std::cout << std::endl << "=== Tests des opérateurs arithmétiques ===" << std::endl << std::endl;
    
    // Tests des opérateurs arithmétiques
    Fixed e(5.5f);
    Fixed f(2.2f);
    
    std::cout << "e = " << e << ", f = " << f << std::endl;
    std::cout << "e + f = " << (e + f) << std::endl;
    std::cout << "e - f = " << (e - f) << std::endl;
    std::cout << "e * f = " << (e * f) << std::endl;
    std::cout << "e / f = " << (e / f) << std::endl;
    
    std::cout << std::endl << "=== Tests des opérateurs d'incrémentation ===" << std::endl << std::endl;
    
    // Tests des opérateurs d'incrémentation
    Fixed g;
    
    std::cout << "g = " << g << std::endl;
    std::cout << "++g = " << ++g << std::endl;
    std::cout << "g = " << g << std::endl;
    std::cout << "g++ = " << g++ << std::endl;
    std::cout << "g = " << g << std::endl;
    
    Fixed h;
    
    std::cout << "h = " << h << std::endl;
    std::cout << "--h = " << --h << std::endl;
    std::cout << "h = " << h << std::endl;
    std::cout << "h-- = " << h-- << std::endl;
    std::cout << "h = " << h << std::endl;
    
    std::cout << std::endl << "=== Tests des fonctions min/max ===" << std::endl << std::endl;
    
    // Tests des fonctions min/max
    Fixed const i(100);
    Fixed const j(200);
    
    std::cout << "i = " << i << ", j = " << j << std::endl;
    std::cout << "min(i, j) = " << Fixed::min(i, j) << std::endl;
    std::cout << "max(i, j) = " << Fixed::max(i, j) << std::endl;
    
    Fixed k(50);
    Fixed l(75);
    
    std::cout << "k = " << k << ", l = " << l << std::endl;
    std::cout << "min(k, l) = " << Fixed::min(k, l) << std::endl;
    std::cout << "max(k, l) = " << Fixed::max(k, l) << std::endl;
    
    return 0;
}