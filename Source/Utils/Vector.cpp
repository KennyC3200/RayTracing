#include "Vector.hpp"
#include <cmath>

namespace Utils {

Vector2f::Vector2f(float x, float y)
    : x(x), y(y) {}

Vector2f::Vector2f(int x, int y)
    : x(x), y(y) {}

float Vector2f::Len() {
    return sqrt(x * x + y * y);
}

void Vector2f::Add(const Vector2f& vec) {
    x += vec.x;
    y += vec.y;
}

void Vector2f::Sub(const Vector2f& vec) {
    x -= vec.x;
    y -= vec.y;
}

void Vector2f::Mul(const Vector2f& vec) {
    x *= vec.x;
    y *= vec.y;
}

void Vector2f::Div(const Vector2f& vec) {
    x /= vec.x;
    y /= vec.y;
}

}
