#include <jni.h>

JNIEXPORT jint JNICALL
Java_com_lovego_helloworldndk_MainActivity_JniCAdd(
        JNIEnv* env,
        jobject jobject,jint a,jint b) {
    return a+b;
}
