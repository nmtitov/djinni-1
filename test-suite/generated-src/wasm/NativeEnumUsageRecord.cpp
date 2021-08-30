// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from enum.djinni

#include "NativeEnumUsageRecord.hpp"  // my header
#include "NativeColor.hpp"

namespace djinni_generated {

auto NativeEnumUsageRecord::toCpp(const JsType& j) -> CppType {
    return {::djinni_generated::NativeColor::Boxed::toCpp(j["e"]),
            ::djinni::Optional<std::experimental::optional, ::djinni_generated::NativeColor>::Boxed::toCpp(j["o"]),
            ::djinni::List<::djinni_generated::NativeColor>::Boxed::toCpp(j["l"]),
            ::djinni::Set<::djinni_generated::NativeColor>::Boxed::toCpp(j["s"]),
            ::djinni::Map<::djinni_generated::NativeColor, ::djinni_generated::NativeColor>::Boxed::toCpp(j["m"])};
}
auto NativeEnumUsageRecord::fromCpp(const CppType& c) -> JsType {
    em::val js = em::val::object();
    js.set("e", ::djinni_generated::NativeColor::Boxed::fromCpp(c.e));
    js.set("o", ::djinni::Optional<std::experimental::optional, ::djinni_generated::NativeColor>::Boxed::fromCpp(c.o));
    js.set("l", ::djinni::List<::djinni_generated::NativeColor>::Boxed::fromCpp(c.l));
    js.set("s", ::djinni::Set<::djinni_generated::NativeColor>::Boxed::fromCpp(c.s));
    js.set("m", ::djinni::Map<::djinni_generated::NativeColor, ::djinni_generated::NativeColor>::Boxed::fromCpp(c.m));
    return js;
}

}  // namespace djinni_generated
