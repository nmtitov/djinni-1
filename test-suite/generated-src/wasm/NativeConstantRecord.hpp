// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from constants.djinni

#pragma once

#include "constant_record.hpp"
#include "djinni_wasm.hpp"

namespace djinni_generated {

struct NativeConstantRecord
{
    using CppType = ::testsuite::ConstantRecord;
    using JsType = em::val;
    using Boxed = NativeConstantRecord;
    
    static CppType toCpp(const JsType& j);
    static JsType fromCpp(const CppType& c);
};

}  // namespace djinni_generated
