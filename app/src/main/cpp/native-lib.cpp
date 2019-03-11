#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_lovego_helloworldndk_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject jobject) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
