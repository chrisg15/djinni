// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from foo_listener_bf.djinni

#pragma once // python_cdef_ignore
#include <stdbool.h>  // python_cdef_ignore

#include <stdint.h> // python_cdef_ignore

struct DjinniWrapperFooListenerBf;
void foo_listener_bf___delete(struct DjinniObjectHandle * djinni_this);
void foo_listener_bf___wrapper_dec_ref(struct DjinniWrapperFooListenerBf * dh);
void foo_listener_bf___wrapper_add_ref(struct DjinniWrapperFooListenerBf * dh);

struct DjinniWrapperFooListenerBf *  make_proxy_object_from_handle_cw__foo_listener_bf(struct DjinniObjectHandle * c_ptr);
struct DjinniObjectHandle * get_handle_from_proxy_object_cw__foo_listener_bf(struct DjinniWrapperFooListenerBf * dw);
bool equal_handles_cw__foo_listener_bf(struct DjinniWrapperFooListenerBf * dw1, struct DjinniWrapperFooListenerBf * dw2);

void foo_listener_bf_add_callback_on_string_change(struct DjinniString *(* ptr)(struct DjinniObjectHandle * , struct DjinniString *));

void foo_listener_bf_add_callback_get_string(struct DjinniString *(* ptr)(struct DjinniObjectHandle * ));

void foo_listener_bf_add_callback_set_listener_bf(void(* ptr)(struct DjinniObjectHandle * , struct DjinniWrapperFooListenerBf *));

void foo_listener_bf_add_callback_get_listener_bf(struct DjinniWrapperFooListenerBf *(* ptr)(struct DjinniObjectHandle * ));

void foo_listener_bf_add_callback_set_binary(void(* ptr)(struct DjinniObjectHandle * , struct DjinniBinary *));

void foo_listener_bf_add_callback_get_binary(struct DjinniBinary *(* ptr)(struct DjinniObjectHandle * ));

void foo_listener_bf_add_callback_send_return(struct DjinniWrapperFooListenerBf *(* ptr)(struct DjinniObjectHandle * , struct DjinniWrapperFooListenerBf *));

void foo_listener_bf_add_callback_delete_fl_in_fl(void(* ptr)(struct DjinniObjectHandle * ));

void foo_listener_bf_add_callback___delete(void(* ptr)(struct DjinniObjectHandle * ));


struct DjinniString * cw__foo_listener_bf_on_string_change(struct DjinniWrapperFooListenerBf * djinni_this, struct DjinniString * private_string);

struct DjinniString * cw__foo_listener_bf_get_string(struct DjinniWrapperFooListenerBf * djinni_this);

void cw__foo_listener_bf_set_listener_bf(struct DjinniWrapperFooListenerBf * djinni_this, struct DjinniWrapperFooListenerBf * listener);

struct DjinniWrapperFooListenerBf * cw__foo_listener_bf_get_listener_bf(struct DjinniWrapperFooListenerBf * djinni_this);

void cw__foo_listener_bf_set_binary(struct DjinniWrapperFooListenerBf * djinni_this, struct DjinniBinary * b);

struct DjinniBinary * cw__foo_listener_bf_get_binary(struct DjinniWrapperFooListenerBf * djinni_this);

struct DjinniWrapperFooListenerBf * cw__foo_listener_bf_send_return(struct DjinniWrapperFooListenerBf * djinni_this, struct DjinniWrapperFooListenerBf * fl_bf);

void cw__foo_listener_bf_delete_fl_in_fl(struct DjinniWrapperFooListenerBf * djinni_this);

