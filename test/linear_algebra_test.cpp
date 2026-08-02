#include <gtest/gtest.h>

#include <math_lib/linear_algebra.hpp>

using namespace math::la;

TEST(Vec2Test, Addition) {
  vec2<float> v1{1.0f, 2.0f};
  vec2<float> v2{3.0f, 4.0f};

  auto sum = v1 + v2;
  EXPECT_FLOAT_EQ(sum.x, 4.0f);
  EXPECT_FLOAT_EQ(sum.y, 6.0f);

  v1 += v2;
  EXPECT_FLOAT_EQ(v1.x, 4.0f);
  EXPECT_FLOAT_EQ(v1.y, 6.0f);
}

TEST(Vec2Test, Subtraction) {
  vec2<float> v1{10.0f, 5.0f};
  vec2<float> v2{3.0f, 2.0f};

  auto diff = v1 - v2;
  EXPECT_FLOAT_EQ(diff.x, 7.0f);
  EXPECT_FLOAT_EQ(diff.y, 3.0f);

  v1 -= v2;
  EXPECT_FLOAT_EQ(v1.x, 7.0f);
  EXPECT_FLOAT_EQ(v1.y, 3.0f);
}

TEST(Vec2Test, ScalarMultiplication) {
  vec2<float> v{2.0f, 3.0f};
  float scalar = 2.0f;

  auto res1 = v * scalar;
  EXPECT_FLOAT_EQ(res1.x, 4.0f);
  EXPECT_FLOAT_EQ(res1.y, 6.0f);

  auto res2 = scalar * v;
  EXPECT_FLOAT_EQ(res2.x, 4.0f);
  EXPECT_FLOAT_EQ(res2.y, 6.0f);

  v *= scalar;
  EXPECT_FLOAT_EQ(v.x, 4.0f);
  EXPECT_FLOAT_EQ(v.y, 6.0f);
}

TEST(Vec2Test, Magnitude) {
  vec2<float> v{3.0f, 4.0f};
  EXPECT_FLOAT_EQ(v.magnitude(), 5.0f);
}

TEST(Vec3Test, Addition) {
  vec3<float> v1{1.0f, 2.0f, 3.0f};
  vec3<float> v2{4.0f, 5.0f, 6.0f};

  auto sum = v1 + v2;
  EXPECT_FLOAT_EQ(sum.x, 5.0f);
  EXPECT_FLOAT_EQ(sum.y, 7.0f);
  EXPECT_FLOAT_EQ(sum.z, 9.0f);

  v1 += v2;
  EXPECT_FLOAT_EQ(v1.x, 5.0f);
  EXPECT_FLOAT_EQ(v1.y, 7.0f);
  EXPECT_FLOAT_EQ(v1.z, 9.0f);
}

TEST(Vec3Test, Subtraction) {
  vec3<float> v1{10.0f, 10.0f, 10.0f};
  vec3<float> v2{1.0f, 2.0f, 3.0f};

  auto diff = v1 - v2;
  EXPECT_FLOAT_EQ(diff.x, 9.0f);
  EXPECT_FLOAT_EQ(diff.y, 8.0f);
  EXPECT_FLOAT_EQ(diff.z, 7.0f);

  v1 -= v2;
  EXPECT_FLOAT_EQ(v1.x, 9.0f);
  EXPECT_FLOAT_EQ(v1.y, 8.0f);
  EXPECT_FLOAT_EQ(v1.z, 7.0f);
}

TEST(Vec3Test, ScalarMultiplication) {
  vec3<float> v{1.0f, 2.0f, 3.0f};
  float scalar = 3.0f;

  auto res1 = v * scalar;
  EXPECT_FLOAT_EQ(res1.x, 3.0f);
  EXPECT_FLOAT_EQ(res1.y, 6.0f);
  EXPECT_FLOAT_EQ(res1.z, 9.0f);

  auto res2 = scalar * v;
  EXPECT_FLOAT_EQ(res2.x, 3.0f);
  EXPECT_FLOAT_EQ(res2.y, 6.0f);
  EXPECT_FLOAT_EQ(res2.z, 9.0f);

  v *= scalar;
  EXPECT_FLOAT_EQ(v.x, 3.0f);
  EXPECT_FLOAT_EQ(v.y, 6.0f);
  EXPECT_FLOAT_EQ(v.z, 9.0f);
}

TEST(Vec3Test, Magnitude) {
  vec3<float> v{1.0f, 2.0f, 2.0f};
  EXPECT_FLOAT_EQ(v.magnitude(), 3.0f);
}