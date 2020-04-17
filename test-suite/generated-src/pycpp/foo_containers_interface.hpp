// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from foo_containers.djinni

#pragma once

#include <cstdint>
#include <experimental/optional>
#include <memory>
#include <string>
#include <unordered_map>
#include <vector>

namespace testsuite {

struct FooContainersRecord;
struct FooSomeOtherRecord;

class FooContainersInterface {
public:
    virtual ~FooContainersInterface() {}

    virtual void set_containers_record(const FooContainersRecord & rec) = 0;

    virtual FooContainersRecord get_containers_record() = 0;

    virtual void set_optional_containers_record(const std::experimental::optional<FooContainersRecord> & rec) = 0;

    virtual std::experimental::optional<FooContainersRecord> get_optional_containers_record() = 0;

    virtual void set_optional_map_string_int(const std::experimental::optional<std::unordered_map<std::string, int32_t>> & m) = 0;

    virtual std::experimental::optional<std::unordered_map<std::string, int32_t>> get_optional_map_string_int() = 0;

    virtual void set_optional_list_int(const std::experimental::optional<std::vector<int32_t>> & m) = 0;

    virtual std::experimental::optional<std::vector<int32_t>> get_optional_list_int() = 0;

    virtual void set_list_record(const std::vector<FooSomeOtherRecord> & lr) = 0;

    /**get_list_record(): list<foo_some_other_record>; */
    virtual void set_list_binary(const std::vector<std::vector<uint8_t>> & lb) = 0;

    virtual std::vector<std::vector<uint8_t>> get_list_binary() = 0;

    /**
     * Commented out until we figure out the std::hash situation in hpp
     *set_set_record(sr: set<foo_some_other_record>);
     *get_set_record(): set<foo_some_other_record>;
     */
    static std::shared_ptr<FooContainersInterface> create();
};

}  // namespace testsuite
