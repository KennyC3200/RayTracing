#ifndef UTILS_VECTOR_HPP
#define UTILS_VECTOR_HPP

#include <iostream>

namespace Utils {

class Vector2f {
public:
    Vector2f(float x, float y);
    Vector2f(int x, int y);

    float Len();
    void Add(const Vector2f& vec);
    void Sub(const Vector2f& vec);
    void Mul(const Vector2f& vec);
    void Div(const Vector2f& vec);

    float x, y;

    friend std::ostream& operator<<(std::ostream& os, Vector2f const& vec) {
        return os << "(" + std::to_string(vec.x) + "," + std::to_string(vec.y) + ")";
    }
};

}

#endif
