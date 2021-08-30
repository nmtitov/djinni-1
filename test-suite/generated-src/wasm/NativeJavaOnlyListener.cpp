// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from single_language_interfaces.djinni

#include "NativeJavaOnlyListener.hpp"  // my header

namespace djinni_generated {

em::val NativeJavaOnlyListener::cppProxyMethods() {
    static const em::val methods = em::val::array(std::vector<std::string> {
    });
    return methods;
}


EMSCRIPTEN_BINDINGS(java_only_listener) {
    em::class_<::testsuite::JavaOnlyListener>("java_only_listener")
        .smart_ptr<std::shared_ptr<::testsuite::JavaOnlyListener>>("java_only_listener")
        .function("nativeDestroy", &NativeJavaOnlyListener::nativeDestroy)
        ;
}

}  // namespace djinni_generated
