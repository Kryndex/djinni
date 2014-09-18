// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from example.djinni

#include "NativeTextboxListener.hpp"  // my header
#include "NativeItemList.hpp"

namespace djinni_generated {

NativeTextboxListener::NativeTextboxListener() : djinni::JniInterfaceJavaExt<::textsort::TextboxListener, NativeTextboxListener>() {}

NativeTextboxListener::JavaProxy::JavaProxy(jobject obj) : JavaProxyCacheEntry(obj) {}

void NativeTextboxListener::JavaProxy::JavaProxy::update(const ::textsort::ItemList & c_items) {
    JNIEnv * const jniEnv = djinni::jniGetThreadEnv();
    djinni::JniLocalScope jscope(jniEnv, 10);
    djinni::LocalRef<jobject> j_items(jniEnv, NativeItemList::toJava(jniEnv, c_items));
    const NativeTextboxListener & data = djinni::JniClass<NativeTextboxListener>::get();
    jniEnv->CallVoidMethod(getGlobalRef(), data.method_update, j_items.get());
    djinni::jniExceptionCheck(jniEnv);
};

}  // namespace djinni_generated
