# AUTOGENERATED FILE - DO NOT MODIFY!
# This file generated by Djinni from foo_containers.djinni

from djinni.support import MultiSet # default imported in all files
from djinni.exception import CPyException # default imported in all files
from djinni.pycffi_marshal import CPyBoxedI32, CPyObject, CPyObjectProxy, CPyString

from dh__set_string import SetStringHelper
from dh__set_string import SetStringProxy
from PyCFFIlib_cffi import ffi, lib

from djinni import exception # this forces run of __init__.py which gives cpp option to call back into py to create exception

class MapBoxedInt32TSetStringHelper:
    c_data_set = MultiSet()

    @staticmethod
    def check_c_data_set_empty():
        assert len(MapBoxedInt32TSetStringHelper.c_data_set) == 0
        SetStringHelper.check_c_data_set_empty()

    @ffi.callback("struct DjinniObjectHandle *(struct DjinniObjectHandle *, struct DjinniBoxedI32 *)")
    def __get_value(cself, key):
        pyKey = CPyBoxedI32.toPyOptWithoutTakingOwnership(key)
        try:
            _ret = CPyObjectProxy.fromPy(SetStringHelper.c_data_set, SetStringProxy(CPyObjectProxy.toPyObj(None, cself)[pyKey]))
            assert _ret != ffi.NULL
            return _ret
        except Exception as _djinni_py_e:
            CPyException.setExceptionFromPy(_djinni_py_e)
            return ffi.NULL

    @ffi.callback("size_t(struct DjinniObjectHandle *)")
    def __get_size(cself):
        return len(CPyObjectProxy.toPyObj(None, cself))

    @ffi.callback("struct DjinniObjectHandle *()")
    def __python_create():
        c_ptr = ffi.new_handle(MapBoxedInt32TSetStringProxy(dict()))
        MapBoxedInt32TSetStringHelper.c_data_set.add(c_ptr)
        return ffi.cast("struct DjinniObjectHandle *", c_ptr)

    @ffi.callback("void(struct DjinniObjectHandle *, struct DjinniBoxedI32 *, struct DjinniObjectHandle *)")
    def __python_add(cself, key, value):
        CPyObjectProxy.toPyObj(None, cself)[CPyBoxedI32.toPyOpt(key)] = CPyObjectProxy.toPyObj(SetStringHelper.c_data_set, value)

    @ffi.callback("void(struct DjinniObjectHandle * )")
    def __delete(c_ptr):
        assert c_ptr in MapBoxedInt32TSetStringHelper.c_data_set
        MapBoxedInt32TSetStringHelper.c_data_set.remove(c_ptr)

    @ffi.callback("struct DjinniBoxedI32 *(struct DjinniObjectHandle *)")
    def __python_next(cself):
        try:
            with CPyBoxedI32.fromPyOpt(next(CPyObjectProxy.toPyIter(cself))) as py_obj:
                return py_obj.release_djinni_boxed()
        except Exception as _djinni_py_e:
            CPyException.setExceptionFromPy(_djinni_py_e)
            return ffi.NULL

    @staticmethod
    def _add_callbacks():
        lib.map_boxed_int32_t_set_string_add_callback__get_value(MapBoxedInt32TSetStringHelper.__get_value)
        lib.map_boxed_int32_t_set_string_add_callback___delete(MapBoxedInt32TSetStringHelper.__delete)
        lib.map_boxed_int32_t_set_string_add_callback__get_size(MapBoxedInt32TSetStringHelper.__get_size)
        lib.map_boxed_int32_t_set_string_add_callback__python_create(MapBoxedInt32TSetStringHelper.__python_create)
        lib.map_boxed_int32_t_set_string_add_callback__python_add(MapBoxedInt32TSetStringHelper.__python_add)
        lib.map_boxed_int32_t_set_string_add_callback__python_next(MapBoxedInt32TSetStringHelper.__python_next)

MapBoxedInt32TSetStringHelper._add_callbacks()

class MapBoxedInt32TSetStringProxy:
    def iter(d):
        for k in d:
            yield k

    def __init__(self, py_obj):
        self._py_obj = py_obj
        if py_obj is not None:
            self._py_iter = iter(py_obj)
        else:
            self._py_iter = None
