// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from test.djinni

#include "NativeTestHelpers.hpp"  // my header
#include "HBool.hpp"
#include "HI32.hpp"
#include "HI64.hpp"
#include "HMap.hpp"
#include "HOptional.hpp"
#include "HString.hpp"
#include "NativeClientInterface.hpp"
#include "NativeColor.hpp"
#include "NativeMapListRecord.hpp"
#include "NativeNestedCollection.hpp"
#include "NativePrimitiveList.hpp"
#include "NativeSetRecord.hpp"

namespace djinni_generated {

NativeTestHelpers::NativeTestHelpers() : djinni::JniInterfaceCppExt<TestHelpers>("com/dropbox/djinni/test/TestHelpers$NativeProxy") {}

using namespace ::djinni_generated;

CJNIEXPORT void JNICALL Java_com_dropbox_djinni_test_TestHelpers_00024NativeProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<std::shared_ptr<TestHelpers>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_com_dropbox_djinni_test_TestHelpers_getSetRecord(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);

        SetRecord cr = TestHelpers::get_set_record();

        return NativeSetRecord::toJava(jniEnv, cr);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0  /* value doesn't matter */ )
}

CJNIEXPORT jboolean JNICALL Java_com_dropbox_djinni_test_TestHelpers_checkSetRecord(JNIEnv* jniEnv, jobject /*this*/, jobject j_rec)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        SetRecord c_rec = NativeSetRecord::fromJava(jniEnv, j_rec);

        bool cr = TestHelpers::check_set_record(c_rec);

        return ::djinni::HBool::Unboxed::toJava(jniEnv, cr);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0  /* value doesn't matter */ )
}

CJNIEXPORT jobject JNICALL Java_com_dropbox_djinni_test_TestHelpers_getPrimitiveList(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);

        PrimitiveList cr = TestHelpers::get_primitive_list();

        return NativePrimitiveList::toJava(jniEnv, cr);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0  /* value doesn't matter */ )
}

CJNIEXPORT jboolean JNICALL Java_com_dropbox_djinni_test_TestHelpers_checkPrimitiveList(JNIEnv* jniEnv, jobject /*this*/, jobject j_pl)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        PrimitiveList c_pl = NativePrimitiveList::fromJava(jniEnv, j_pl);

        bool cr = TestHelpers::check_primitive_list(c_pl);

        return ::djinni::HBool::Unboxed::toJava(jniEnv, cr);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0  /* value doesn't matter */ )
}

CJNIEXPORT jobject JNICALL Java_com_dropbox_djinni_test_TestHelpers_getNestedCollection(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);

        NestedCollection cr = TestHelpers::get_nested_collection();

        return NativeNestedCollection::toJava(jniEnv, cr);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0  /* value doesn't matter */ )
}

CJNIEXPORT jboolean JNICALL Java_com_dropbox_djinni_test_TestHelpers_checkNestedCollection(JNIEnv* jniEnv, jobject /*this*/, jobject j_nc)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        NestedCollection c_nc = NativeNestedCollection::fromJava(jniEnv, j_nc);

        bool cr = TestHelpers::check_nested_collection(c_nc);

        return ::djinni::HBool::Unboxed::toJava(jniEnv, cr);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0  /* value doesn't matter */ )
}

CJNIEXPORT jobject JNICALL Java_com_dropbox_djinni_test_TestHelpers_getMap(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);

        std::unordered_map<std::string, int64_t> cr = TestHelpers::get_map();

        return ::djinni::HMap<::djinni::HString, ::djinni::HI64>::toJava(jniEnv, cr);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0  /* value doesn't matter */ )
}

CJNIEXPORT jboolean JNICALL Java_com_dropbox_djinni_test_TestHelpers_checkMap(JNIEnv* jniEnv, jobject /*this*/, jobject j_m)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        std::unordered_map<std::string, int64_t> c_m = ::djinni::HMap<::djinni::HString, ::djinni::HI64>::fromJava(jniEnv, j_m);

        bool cr = TestHelpers::check_map(c_m);

        return ::djinni::HBool::Unboxed::toJava(jniEnv, cr);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0  /* value doesn't matter */ )
}

CJNIEXPORT jobject JNICALL Java_com_dropbox_djinni_test_TestHelpers_getEmptyMap(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);

        std::unordered_map<std::string, int64_t> cr = TestHelpers::get_empty_map();

        return ::djinni::HMap<::djinni::HString, ::djinni::HI64>::toJava(jniEnv, cr);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0  /* value doesn't matter */ )
}

CJNIEXPORT jboolean JNICALL Java_com_dropbox_djinni_test_TestHelpers_checkEmptyMap(JNIEnv* jniEnv, jobject /*this*/, jobject j_m)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        std::unordered_map<std::string, int64_t> c_m = ::djinni::HMap<::djinni::HString, ::djinni::HI64>::fromJava(jniEnv, j_m);

        bool cr = TestHelpers::check_empty_map(c_m);

        return ::djinni::HBool::Unboxed::toJava(jniEnv, cr);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0  /* value doesn't matter */ )
}

CJNIEXPORT jobject JNICALL Java_com_dropbox_djinni_test_TestHelpers_getMapListRecord(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);

        MapListRecord cr = TestHelpers::get_map_list_record();

        return NativeMapListRecord::toJava(jniEnv, cr);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0  /* value doesn't matter */ )
}

CJNIEXPORT jboolean JNICALL Java_com_dropbox_djinni_test_TestHelpers_checkMapListRecord(JNIEnv* jniEnv, jobject /*this*/, jobject j_m)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        MapListRecord c_m = NativeMapListRecord::fromJava(jniEnv, j_m);

        bool cr = TestHelpers::check_map_list_record(c_m);

        return ::djinni::HBool::Unboxed::toJava(jniEnv, cr);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0  /* value doesn't matter */ )
}

CJNIEXPORT void JNICALL Java_com_dropbox_djinni_test_TestHelpers_checkClientInterfaceAscii(JNIEnv* jniEnv, jobject /*this*/, jobject j_i)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        std::shared_ptr<ClientInterface> c_i = NativeClientInterface::fromJava(jniEnv, j_i);

        TestHelpers::check_client_interface_ascii(c_i);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_dropbox_djinni_test_TestHelpers_checkClientInterfaceNonascii(JNIEnv* jniEnv, jobject /*this*/, jobject j_i)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        std::shared_ptr<ClientInterface> c_i = NativeClientInterface::fromJava(jniEnv, j_i);

        TestHelpers::check_client_interface_nonascii(c_i);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_dropbox_djinni_test_TestHelpers_checkEnumMap(JNIEnv* jniEnv, jobject /*this*/, jobject j_m)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        std::unordered_map<color, std::string> c_m = ::djinni::HMap<NativeColor, ::djinni::HString>::fromJava(jniEnv, j_m);

        TestHelpers::check_enum_map(c_m);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_com_dropbox_djinni_test_TestHelpers_returnNone(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);

        std::experimental::optional<int32_t> cr = TestHelpers::return_none();

        return ::djinni::HOptional<std::experimental::optional, ::djinni::HI32>::toJava(jniEnv, cr);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0  /* value doesn't matter */ )
}

}  // namespace djinni_generated
