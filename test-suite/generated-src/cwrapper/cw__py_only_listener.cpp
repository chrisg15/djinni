// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from single_language_interfaces.djinni

#include <iostream> // for debugging
#include <cassert>
#include "wrapper_marshal.hpp"
#include "py_only_listener.hpp"

#include "cw__py_only_listener.hpp"

static void(*s_py_callback_py_only_listener___delete)(DjinniObjectHandle * );

std::shared_ptr<::testsuite::PyOnlyListener> DjinniWrapperPyOnlyListener::get(djinni::WrapperRef<DjinniWrapperPyOnlyListener> dw) {
    if (dw) {
        return dw->wrapped_obj;
    }
    return nullptr;
}

void py_only_listener___delete(DjinniObjectHandle * dh) {
    s_py_callback_py_only_listener___delete(dh);
}
void py_only_listener___wrapper_add_ref(DjinniWrapperPyOnlyListener * dh) {
    dh->ref_count.fetch_add(1);
}
void py_only_listener___wrapper_dec_ref(DjinniWrapperPyOnlyListener * dh) {
    const size_t ref = dh->ref_count.fetch_sub(1);
    if (ref == 1) {// value before sub is returned
        delete dh;
    }
}
djinni::Handle<DjinniWrapperPyOnlyListener> DjinniWrapperPyOnlyListener::wrap(std::shared_ptr<::testsuite::PyOnlyListener> obj) {
    if (obj)
        return djinni::Handle<DjinniWrapperPyOnlyListener>(new DjinniWrapperPyOnlyListener{ std::move(obj) }, py_only_listener___wrapper_dec_ref);
    return nullptr;
}

DjinniWrapperPyOnlyListener *  make_proxy_object_from_handle_cw__py_only_listener(DjinniObjectHandle * c_ptr) {
    return new DjinniWrapperPyOnlyListener{std::make_shared<PyOnlyListenerPythonProxy>(c_ptr)};
}

DjinniObjectHandle * get_handle_from_proxy_object_cw__py_only_listener(DjinniWrapperPyOnlyListener * dw) {
    PyOnlyListenerPythonProxy * cast_ptr = dynamic_cast<PyOnlyListenerPythonProxy * >(dw->wrapped_obj.get());
    if (!cast_ptr) { return nullptr; }
    else return cast_ptr->get_m_py_obj_handle();
}

bool equal_handles_cw__py_only_listener(DjinniWrapperPyOnlyListener * dw1, DjinniWrapperPyOnlyListener * dw2) {
    return dw1->wrapped_obj == dw2->wrapped_obj;
}

DjinniObjectHandle * PyOnlyListenerPythonProxy::get_m_py_obj_handle() {
    return m_py_obj_handle;
}

PyOnlyListenerPythonProxy::PyOnlyListenerPythonProxy(DjinniObjectHandle * c_ptr) : m_py_obj_handle(c_ptr) {}

PyOnlyListenerPythonProxy::~PyOnlyListenerPythonProxy() {
    s_py_callback_py_only_listener___delete(m_py_obj_handle);
}

void py_only_listener_add_callback___delete(void(* ptr)(DjinniObjectHandle * )) {
    s_py_callback_py_only_listener___delete = ptr;
}

