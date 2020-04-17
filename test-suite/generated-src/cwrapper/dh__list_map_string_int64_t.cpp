// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from map.djinni

#include <iostream> // for debugging
#include <cassert>
#include "wrapper_marshal.hpp"
#include "map_list_record.hpp"

#include "dh__list_map_string_int64_t.hpp"
#include "dh__map_list_record.hpp"
#include "dh__map_string_int64_t.hpp"

static void(*s_py_callback_list_map_string_int64_t___delete)(DjinniObjectHandle *);
void list_map_string_int64_t_add_callback___delete(void(* ptr)(DjinniObjectHandle *)) {
    s_py_callback_list_map_string_int64_t___delete = ptr;
}

void list_map_string_int64_t___delete(DjinniObjectHandle * drh) {
    s_py_callback_list_map_string_int64_t___delete(drh);
}
void optional_list_map_string_int64_t___delete(DjinniOptionalObjectHandle *  drh) {
    s_py_callback_list_map_string_int64_t___delete((DjinniObjectHandle *) drh);
}
static DjinniObjectHandle * ( * s_py_callback_list_map_string_int64_t__get_elem)(DjinniObjectHandle *, size_t);

void list_map_string_int64_t_add_callback__get_elem(DjinniObjectHandle *( * ptr)(DjinniObjectHandle *, size_t)) {
    s_py_callback_list_map_string_int64_t__get_elem = ptr;
}

static size_t ( * s_py_callback_list_map_string_int64_t__get_size)(DjinniObjectHandle *);

void list_map_string_int64_t_add_callback__get_size(size_t( * ptr)(DjinniObjectHandle *)) {
    s_py_callback_list_map_string_int64_t__get_size = ptr;
}

static DjinniObjectHandle * ( * s_py_callback_list_map_string_int64_t__python_create)(void);

void list_map_string_int64_t_add_callback__python_create(DjinniObjectHandle *( * ptr)(void)) {
    s_py_callback_list_map_string_int64_t__python_create = ptr;
}

static void ( * s_py_callback_list_map_string_int64_t__python_add)(DjinniObjectHandle *, DjinniObjectHandle *);

void list_map_string_int64_t_add_callback__python_add(void( * ptr)(DjinniObjectHandle *, DjinniObjectHandle *)) {
    s_py_callback_list_map_string_int64_t__python_add = ptr;
}

djinni::Handle<DjinniObjectHandle> DjinniListMapStringInt64T::fromCpp(const std::vector<std::unordered_map<std::string, int64_t>> & dc) {
    djinni::Handle<DjinniObjectHandle> _handle(s_py_callback_list_map_string_int64_t__python_create(), & list_map_string_int64_t___delete);
    size_t size = dc.size();
    for (int i = 0; i < size; i++) {
        auto _el = DjinniMapStringInt64T::fromCpp(dc[i]);
        s_py_callback_list_map_string_int64_t__python_add(_handle.get(), _el.release());
    }

    return _handle;
}

std::vector<std::unordered_map<std::string, int64_t>> DjinniListMapStringInt64T::toCpp(djinni::Handle<DjinniObjectHandle> dh) {
    std::vector<std::unordered_map<std::string, int64_t>>_ret;
    size_t size = s_py_callback_list_map_string_int64_t__get_size(dh.get());
    _ret.reserve(size);

    for (int i = 0; i < size; i++) {
        _ret.push_back(DjinniMapStringInt64T::toCpp(djinni::Handle<DjinniObjectHandle>(s_py_callback_list_map_string_int64_t__get_elem(dh.get(), i), map_string_int64_t___delete)));
    }

    return _ret;
}

djinni::Handle<DjinniOptionalObjectHandle> DjinniListMapStringInt64T::fromCpp(std::experimental::optional<std::vector<std::unordered_map<std::string, int64_t>>> dc) {
    if (dc == std::experimental::nullopt) {
        return nullptr;
    }
    return djinni::optionals::toOptionalHandle(DjinniListMapStringInt64T::fromCpp(std::move(* dc)), optional_list_map_string_int64_t___delete);
}

std::experimental::optional<std::vector<std::unordered_map<std::string, int64_t>>>DjinniListMapStringInt64T::toCpp(djinni::Handle<DjinniOptionalObjectHandle> dh) {
     if (dh) {
        return std::experimental::optional<std::vector<std::unordered_map<std::string, int64_t>>>(DjinniListMapStringInt64T::toCpp(djinni::optionals::fromOptionalHandle(std::move(dh), list_map_string_int64_t___delete)));
    }
    return std::experimental::nullopt;
}

