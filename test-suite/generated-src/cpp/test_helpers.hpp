// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from test.djinni

#pragma once

#include "../../handwritten-src/cpp/optional.hpp"
#include "Future.hpp"
#include <cstdint>
#include <memory>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

namespace testsuite {

class AsyncInterface;
class ClientInterface;
class UserToken;
enum class color;
struct AssortedPrimitives;
struct MapListRecord;
struct NestedCollection;
struct PrimitiveList;
struct SetRecord;

/**
 * Helper methods used by various different tests.
 * (Second line of multi-line documentation.
 *   Indented third line of multi-line documentation.)
 */
class TestHelpers {
public:
    virtual ~TestHelpers() = default;

    /** Method with documentation */
    static SetRecord get_set_record();

    /**
     * Method with long documentation
     * (Second line of multi-line documentation.
     *   Indented third line of multi-line documentation.)
     */
    static bool check_set_record(const SetRecord & rec);

    static PrimitiveList get_primitive_list();

    static bool check_primitive_list(const PrimitiveList & pl);

    static NestedCollection get_nested_collection();

    static bool check_nested_collection(const NestedCollection & nc);

    static std::unordered_map<std::string, int64_t> get_map();

    static bool check_map(const std::unordered_map<std::string, int64_t> & m);

    static std::unordered_map<std::string, int64_t> get_empty_map();

    static bool check_empty_map(const std::unordered_map<std::string, int64_t> & m);

    static MapListRecord get_map_list_record();

    static bool check_map_list_record(const MapListRecord & m);

    static void check_client_interface_ascii(const /*not-null*/ std::shared_ptr<ClientInterface> & i);

    static void check_client_interface_nonascii(const /*not-null*/ std::shared_ptr<ClientInterface> & i);

    static void check_client_interface_args(const /*not-null*/ std::shared_ptr<ClientInterface> & i);

    static void check_enum_map(const std::unordered_map<color, std::string> & m);

    static void check_enum(color c);

    static /*nullable*/ std::shared_ptr<UserToken> token_id(const /*nullable*/ std::shared_ptr<UserToken> & t);

    static /*not-null*/ std::shared_ptr<UserToken> create_cpp_token();

    static void check_cpp_token(const /*not-null*/ std::shared_ptr<UserToken> & t);

    static int64_t cpp_token_id(const /*not-null*/ std::shared_ptr<UserToken> & t);

    static void check_token_type(const /*not-null*/ std::shared_ptr<UserToken> & t, const std::string & type);

    static std::experimental::optional<int32_t> return_none();

    /** Ensures that we generate integer translation code */
    static AssortedPrimitives assorted_primitives_id(const AssortedPrimitives & i);

    static std::vector<uint8_t> id_binary(const std::vector<uint8_t> & b);

    static ::djinni::Future<int32_t> get_async_result();

    static ::djinni::Future<std::string> future_roundtrip(::djinni::Future<int32_t> f);

    static ::djinni::Future<int32_t> async_early_throw();

    static ::djinni::Future<void> void_async_method(::djinni::Future<void> f);

    static ::djinni::Future<std::string> check_async_interface(const /*not-null*/ std::shared_ptr<AsyncInterface> & i);

    static ::djinni::Future<std::string> check_async_composition(const /*not-null*/ std::shared_ptr<AsyncInterface> & i);

    static std::vector<std::experimental::optional<std::string>> get_optional_list();

    static bool check_optional_list(const std::vector<std::experimental::optional<std::string>> & ol);

    static std::unordered_set<std::experimental::optional<std::string>> get_optional_set();

    static bool check_optional_set(const std::unordered_set<std::experimental::optional<std::string>> & os);

    static std::unordered_map<std::experimental::optional<std::string>, std::experimental::optional<std::string>> get_optional_map();

    static bool check_optional_map(const std::unordered_map<std::experimental::optional<std::string>, std::experimental::optional<std::string>> & om);
};

} // namespace testsuite
