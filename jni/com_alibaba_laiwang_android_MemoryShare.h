/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_alibaba_laiwang_android_MemoryShare */

#ifndef _Included_com_alibaba_laiwang_android_MemoryShare
#define _Included_com_alibaba_laiwang_android_MemoryShare
#ifdef __cplusplus
extern "C" {
#endif


JNIEXPORT jint JNICALL Java_com_alibaba_laiwang_android_MemoryShare_native_1init
  (JNIEnv *, jobject);

/*
 * Class:     com_alibaba_laiwang_android_MemoryShare
 * Method:    native_open
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_alibaba_laiwang_android_MemoryShare_native_1open
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_alibaba_laiwang_android_MemoryShare
 * Method:    native_mmap
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_alibaba_laiwang_android_MemoryShare_native_1mmap
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_alibaba_laiwang_android_MemoryShare
 * Method:    native_close
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_alibaba_laiwang_android_MemoryShare_native_1close
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_alibaba_laiwang_android_MemoryShare
 * Method:    native_read
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_alibaba_laiwang_android_MemoryShare_native_1read
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_alibaba_laiwang_android_MemoryShare
 * Method:    native_write
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_alibaba_laiwang_android_MemoryShare_native_1write
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_alibaba_laiwang_android_MemoryShare
 * Method:    native_unmmap
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_alibaba_laiwang_android_MemoryShare_native_1unmmap
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
