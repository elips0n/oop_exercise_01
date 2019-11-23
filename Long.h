//
// Created by Алиса Ли on 15/10/2019.
//

#ifndef LABA1_LONG_H
#define LABA1_LONG_H

#include <cstdint>
#include <iostream>
#include <cmath>

class Long {

private:
    uint32_t first, second;
    uint64_t glue() const;
    void split(uint64_t n);

public:
    void read(std::istream& is);
    void write(std::ostream& os) const;
    Long add (const Long& o) const; // сложение
    Long sub (const Long& o) const; // модуль разности
    Long mult (const Long& o) const;// умножение
    Long div (const Long& o) const; // деление
    bool equal (const Long& o) const; // равно
    bool more (const Long& o) const; // больше
    bool less (const Long& o) const; // меньше
};


#endif //LABA1_LONG_H
