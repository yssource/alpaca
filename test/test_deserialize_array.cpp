#include <doctest.hpp>
#include <structbyte/structbyte.h>
using namespace structbyte;

using doctest::test_suite;

TEST_CASE("Deserialize array<char, 3>" * test_suite("array")) {
  struct my_struct {
    std::array<char, 3> values;
  };

  std::vector<uint8_t> bytes;

  {
    my_struct s{{'x', 'y', 'z'}};
    bytes = serialize(s);
    REQUIRE(bytes.size() == 3);
  }

  {
    auto result = deserialize<my_struct>(bytes);
    REQUIRE((result.values == std::array<char, 3>{'x', 'y', 'z'}));
  }
}

TEST_CASE("Deserialize array<array<int, 3>, 3>" * test_suite("array")) {
  struct my_struct {
    std::array<std::array<int, 3>, 3> values;
  };

  std::vector<uint8_t> bytes;

  {
    my_struct s{{{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}}};
    bytes = serialize(s);
    REQUIRE(bytes.size() == 9);
  }

  {
    auto result = deserialize<my_struct>(bytes);
    REQUIRE((result.values == std::array<std::array<int, 3>, 3>{
                                  {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}}));
  }
}

TEST_CASE("Deserialize array<size_t>" * test_suite("array")) {
  struct my_struct {
    std::array<uint64_t, 6> values;
  };

  std::vector<uint8_t> bytes;

  {
    my_struct s{{1, 2, 3, 4, 5, 6}};
    bytes = serialize(s);
    REQUIRE(bytes.size() == 6);
  }

  {
    auto result = deserialize<my_struct>(bytes);
    REQUIRE((result.values == std::array<uint64_t, 6>{1, 2, 3, 4, 5, 6}));
  }
}

TEST_CASE("Deserialize array<int>" * test_suite("array")) {
  struct my_struct {
    std::array<int, 6> values;
  };

  std::vector<uint8_t> bytes;

  {
    my_struct s{{1, 2, 3, 4, 5, 6}};
    bytes = serialize(s);
    REQUIRE(bytes.size() == 6);
  }

  {
    auto result = deserialize<my_struct>(bytes);
    REQUIRE((result.values == std::array<int, 6>{1, 2, 3, 4, 5, 6}));
  }
}

TEST_CASE("Deserialize array<vector<char>>" * test_suite("array")) {
  struct my_struct {
    std::array<std::vector<char>, 2> values;
  };

  std::vector<uint8_t> bytes;

  {
    my_struct s{{{{'a', 'b', 'c'}, {'d', 'e', 'f'}}}};
    bytes = serialize(s);
  }

  {
    auto result = deserialize<my_struct>(bytes);
    REQUIRE((result.values == std::array<std::vector<char>, 2>{
                                  {{'a', 'b', 'c'}, {'d', 'e', 'f'}}}));
  }
}

TEST_CASE("Deserialize array<nested_struct>" * test_suite("array")) {
  struct my_struct {
    std::array<double, 3> values;
    struct nested_t {
      int value;
    };
    std::array<nested_t, 3> nested_values;
  };

  std::vector<uint8_t> bytes;

  {
    my_struct s{{1.23, 4.56, 7.89},
                {my_struct::nested_t{1}, my_struct::nested_t{2},
                 my_struct::nested_t{3}}};
    bytes = serialize(s);
  }

  {
    auto result = deserialize<my_struct>(bytes);
    REQUIRE((result.values == std::array<double, 3>{1.23, 4.56, 7.89}));
    REQUIRE(result.nested_values.size() == 3);
    REQUIRE(result.nested_values[0].value == 1);
    REQUIRE(result.nested_values[1].value == 2);
    REQUIRE(result.nested_values[2].value == 3);
  }
}