// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from extended_record.djinni

#pragma once

#include "djinni_wasm.hpp"
#include "extended_record.hpp"

namespace djinni_generated {

struct NativeExtendedRecord
{
    using CppType = ::testsuite::ExtendedRecord;
    using JsType = em::val;
    using Boxed = NativeExtendedRecord;
    
    static CppType toCpp(const JsType& j);
    static JsType fromCpp(const CppType& c);
};

}  // namespace djinni_generated
