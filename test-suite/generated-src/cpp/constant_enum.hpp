// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from constant_enum.djinni

#pragma once

#include <functional>

namespace testsuite {

enum class constant_enum : int {
    SOME_VALUE = 0,
    SOME_OTHER_VALUE = 1,
};

}  // namespace testsuite

namespace std {

template <>
struct hash<::testsuite::constant_enum> {
    size_t operator()(::testsuite::constant_enum type) const {
        return std::hash<int>()(static_cast<int>(type));
    }
};

}  // namespace std
