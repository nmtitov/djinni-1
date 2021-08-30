// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from outcome.djinni

#include "NativeTestOutcome.hpp"  // my header
#include "NativeNestedOutcome.hpp"

namespace djinni_generated {

em::val NativeTestOutcome::cppProxyMethods() {
    static const em::val methods = em::val::array(std::vector<std::string> {
        "getSuccessOutcome",
        "getErrorOutcome",
        "putSuccessOutcome",
        "putErrorOutcome",
        "getNestedSuccessOutcome",
        "getNestedErrorOutcome",
        "putNestedSuccessOutcome",
        "putNestedErrorOutcome",
    });
    return methods;
}

em::val NativeTestOutcome::getSuccessOutcome() {
    return ::djinni::Outcome<::djinni::String, ::djinni::I32>::fromCpp(::testsuite::TestOutcome::getSuccessOutcome());
}
em::val NativeTestOutcome::getErrorOutcome() {
    return ::djinni::Outcome<::djinni::String, ::djinni::I32>::fromCpp(::testsuite::TestOutcome::getErrorOutcome());
}
std::string NativeTestOutcome::putSuccessOutcome(const em::val& w_x) {
    return ::djinni::String::fromCpp(::testsuite::TestOutcome::putSuccessOutcome(::djinni::Outcome<::djinni::String, ::djinni::I32>::toCpp(w_x)));
}
int32_t NativeTestOutcome::putErrorOutcome(const em::val& w_x) {
    return ::djinni::I32::fromCpp(::testsuite::TestOutcome::putErrorOutcome(::djinni::Outcome<::djinni::String, ::djinni::I32>::toCpp(w_x)));
}
em::val NativeTestOutcome::getNestedSuccessOutcome() {
    return ::djinni_generated::NativeNestedOutcome::fromCpp(::testsuite::TestOutcome::getNestedSuccessOutcome());
}
em::val NativeTestOutcome::getNestedErrorOutcome() {
    return ::djinni_generated::NativeNestedOutcome::fromCpp(::testsuite::TestOutcome::getNestedErrorOutcome());
}
int32_t NativeTestOutcome::putNestedSuccessOutcome(const em::val& w_x) {
    return ::djinni::I32::fromCpp(::testsuite::TestOutcome::putNestedSuccessOutcome(::djinni_generated::NativeNestedOutcome::toCpp(w_x)));
}
std::string NativeTestOutcome::putNestedErrorOutcome(const em::val& w_x) {
    return ::djinni::String::fromCpp(::testsuite::TestOutcome::putNestedErrorOutcome(::djinni_generated::NativeNestedOutcome::toCpp(w_x)));
}

EMSCRIPTEN_BINDINGS(test_outcome) {
    em::class_<::testsuite::TestOutcome>("test_outcome")
        .smart_ptr<std::shared_ptr<::testsuite::TestOutcome>>("test_outcome")
        .function("nativeDestroy", &NativeTestOutcome::nativeDestroy)
        .class_function("getSuccessOutcome", NativeTestOutcome::getSuccessOutcome)
        .class_function("getErrorOutcome", NativeTestOutcome::getErrorOutcome)
        .class_function("putSuccessOutcome", NativeTestOutcome::putSuccessOutcome)
        .class_function("putErrorOutcome", NativeTestOutcome::putErrorOutcome)
        .class_function("getNestedSuccessOutcome", NativeTestOutcome::getNestedSuccessOutcome)
        .class_function("getNestedErrorOutcome", NativeTestOutcome::getNestedErrorOutcome)
        .class_function("putNestedSuccessOutcome", NativeTestOutcome::putNestedSuccessOutcome)
        .class_function("putNestedErrorOutcome", NativeTestOutcome::putNestedErrorOutcome)
        ;
}

}  // namespace djinni_generated
