// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from derivings.djinni

#pragma once

#include "djinni_wasm.hpp"
#include "record_with_nested_derivings.hpp"

namespace djinni_generated {

struct NativeRecordWithNestedDerivings
{
    using CppType = ::testsuite::RecordWithNestedDerivings;
    using JsType = em::val;
    using Boxed = NativeRecordWithNestedDerivings;
    
    static CppType toCpp(const JsType& j);
    static JsType fromCpp(const CppType& c);
};

}  // namespace djinni_generated
