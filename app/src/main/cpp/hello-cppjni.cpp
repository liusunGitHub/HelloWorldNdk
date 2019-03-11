#include <jni.h>
#include <string>

extern "C" JNIEXPORT jint JNICALL
Java_com_lovego_helloworldndk_MainActivity_JniCppAdd(
        JNIEnv* env,
        jobject jobject,jint a,jint b) {
        int ia = a;
        int ib = b;
        printf(ia+" ========== %d",a+b);
    return a+b;
}
