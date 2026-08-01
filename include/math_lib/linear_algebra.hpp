#ifndef MATH_LIB_LINEAR_ALGEBRA_HPP
#define MATH_LIB_LINEAR_ALGEBRA_HPP

#include <cmath>

namespace ml::la {

template <typename T>
struct vec2 {
  T x{};
  T y{};

  constexpr vec2& operator+=(const vec2& other) noexcept {
    this->x += other.x;
    this->y += other.y;

    return *this;
  }

  constexpr vec2& operator-=(const vec2& other) noexcept {
    this->x -= other.x;
    this->y -= other.y;

    return *this;
  }

  constexpr vec2& operator*=(T scalar) noexcept {
    this->x *= scalar;
    this->y *= scalar;

    return *this;
  }

  [[nodiscard]] constexpr vec2 operator+(const vec2& other) const noexcept {
    vec2 result = *this;
    result += other;

    return result;
  }

  [[nodiscard]] constexpr vec2 operator-(const vec2& other) const noexcept {
    vec2 result = *this;
    result -= other;

    return result;
  }

  [[nodiscard]] constexpr vec2 operator*(T scalar) const noexcept {
    vec2 result = *this;
    result *= scalar;

    return result;
  }

  [[nodiscard]] T magnitude() const noexcept { return std::sqrt(this->x * this->x + this->y * this->y); }
};

template <typename T>
[[nodiscard]] constexpr vec2<T> operator*(T scalar, const vec2<T>& vec) noexcept {
  return vec * scalar;
}

template <typename T>
struct vec3 {
  T x{};
  T y{};
  T z{};

  constexpr vec3& operator+=(const vec3& other) noexcept {
    this->x += other.x;
    this->y += other.y;
    this->z += other.z;

    return *this;
  }

  constexpr vec3& operator-=(const vec3& other) noexcept {
    this->x -= other.x;
    this->y -= other.y;
    this->z -= other.z;

    return *this;
  }

  constexpr vec3& operator*=(T scalar) noexcept {
    this->x *= scalar;
    this->y *= scalar;
    this->z *= scalar;

    return *this;
  }

  [[nodiscard]] constexpr vec3 operator+(const vec3& other) const noexcept {
    vec3 result = *this;
    result += other;

    return result;
  }

  [[nodiscard]] constexpr vec3 operator-(const vec3& other) const noexcept {
    vec3 result = *this;
    result -= other;

    return result;
  }

  [[nodiscard]] constexpr vec3 operator*(T scalar) const noexcept {
    vec3 result = *this;
    result *= scalar;

    return result;
  }

  [[nodiscard]] T magnitude() const noexcept {
    return std::sqrt(this->x * this->x + this->y * this->y + this->z * this->z);
  }
};

template <typename T>
[[nodiscard]] constexpr vec3<T> operator*(T scalar, const vec3<T>& vec) noexcept {
  return vec * scalar;
}

}

#endif
