/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_cc_apptroy_NativeFunction */

#ifndef _Included_com_cc_apptroy_NativeFunction
#define _Included_com_cc_apptroy_NativeFunction
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_cc_apptroy_NativeFunction
 * Method:    test
 * Signature: (Ljava/lang/ClassLoader;)V
 */
JNIEXPORT void JNICALL Java_com_cc_apptroy_NativeFunction_test
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_cc_apptroy_NativeFunction
 * Method:    showDexFile
 * Signature: ()Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_com_cc_apptroy_NativeFunction_showDexFile
  (JNIEnv *, jobject);

/*
 * Class:     com_cc_apptroy_NativeFunction
 * Method:    dumpDexFileByCookie
 * Signature: (ILjava/lang/ClassLoader;)V
 */
JNIEXPORT void JNICALL Java_com_cc_apptroy_NativeFunction_dumpDexFileByCookie
  (JNIEnv *, jobject, jint, jobject);

/*
 * Class:     com_cc_apptroy_NativeFunction
 * Method:    getInlineOperation
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_cc_apptroy_NativeFunction_getInlineOperation
  (JNIEnv *, jobject);

/*
 * Class:     com_cc_apptroy_NativeFunction
 * Method:    dumpMemory
 * Signature: (II)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_com_cc_apptroy_NativeFunction_dumpMemory
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_cc_apptroy_NativeFunction
 * Method:    getHeaderItemPtr
 * Signature: (II)Lcom/cc/apptroy/DexFileHeadersPointer;
 */
JNIEXPORT jobject JNICALL Java_com_cc_apptroy_NativeFunction_getHeaderItemPtr
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_cc_apptroy_NativeFunction
 * Method:    getMethod
 * Signature: (Ljava/lang/Class;Ljava/lang/reflect/Method;)I
 */
JNIEXPORT jint JNICALL Java_com_cc_apptroy_NativeFunction_getMethod
  (JNIEnv *, jobject, jclass, jobject);

/*
 * Class:     com_cc_apptroy_NativeFunction
 * Method:    getConstructor
 * Signature: (Ljava/lang/Class;Ljava/lang/reflect/Constructor;)I
 */
JNIEXPORT jint JNICALL Java_com_cc_apptroy_NativeFunction_getConstructor
  (JNIEnv *, jobject, jclass, jobject);

/*
 * Class:     com_cc_apptroy_NativeFunction
 * Method:    getclinit
 * Signature: (Ljava/lang/Class;)I
 */
JNIEXPORT jint JNICALL Java_com_cc_apptroy_NativeFunction_getclinit
  (JNIEnv *, jobject, jclass);

/*
 * Class:     com_cc_apptroy_NativeFunction
 * Method:    nativeLog
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_cc_apptroy_NativeFunction_nativeLog
  (JNIEnv *, jobject, jstring, jstring);

#ifdef __cplusplus
}
#endif
#endif