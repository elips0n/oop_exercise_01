//
// Created by Алиса Ли on 15/10/2019.
//

#include <climits>
#include "Long.h"

void Long::read(std::istream& is) {
    is >> first >> second;}

void Long::write(std::ostream &os) const {
    if (first != 0) {
        os << first << " ";
    }
    os << second;
}

int f(uint32_t n) { // подсчет разрядов числа
    int result = 0;
    while (n >= 10){
        ++result;
        n /= 10;
    }
    return result;
}

uint64_t Long::glue() const{ // склейка чисел
    uint64_t result;
    result = ((uint64_t)first << 32u) + (uint64_t)second;
    return result;
}

   void Long::split(uint64_t n) { // расклейка чисел
       first = n >> 32u;
       second = n & (0u - 1u);
   }


Long Long::add(const Long& o) const {
    Long result;
    result.second = this->second + o.second;
    result.first = this->first + o.first;
    if (std::numeric_limits<uint32_t>::max() - this->second < o.second) {
        result.first += 1;
    }
return result;
}

Long Long::sub(const Long& o) const {
    Long result;
    result.first = this->first - o.first;
    result.second = this->second - o.second;
    if (this->second < o.second) {
        result.first -= 1;
    }
    return result;
}

Long Long::mult(const Long &o) const {
    Long result;
    uint64_t a = glue();
    uint64_t b = o.glue();
    uint64_t c = a * b;
    result.split(c);
    return result;
}

Long Long::div(const Long& o) const {
    Long result;
    uint64_t a = glue();
    uint64_t b = o.glue();
    uint64_t c = a / b;
    result.split(c);
    return result;
}

bool Long::less(const Long& o) const {
    return (this->first < o.first || (this->first == o.first && this->second < o.second));
}

bool Long::more(const Long& o) const {
    return (this->first > o.first || (this->first == o.first && this->second > o.second));
}

bool Long::equal(const Long& o) const {
    return (this->first == o.first && this-> second == o.second);
}




