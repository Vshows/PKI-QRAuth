/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_Vshows_PKI_util_JniUtils */

#ifndef _Included_com_Vshows_PKI_util_JniUtils
#define _Included_com_Vshows_PKI_util_JniUtils
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_Vshows_PKI_util_JniUtils
 * Method:    getKeyValue
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_Vshows_PKI_util_JniUtils_getKeyValue
  (JNIEnv *, jclass);

/*
 * Class:     com_Vshows_PKI_util_JniUtils
 * Method:    getIv
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_Vshows_PKI_util_JniUtils_getIv
  (JNIEnv *, jclass);

/*
 * Class:     com_Vshows_PKI_util_JniUtils
 * Method:    checkSign
 * Signature: (Ljava/lang/Object;)I
 */
JNIEXPORT jint JNICALL Java_com_Vshows_PKI_util_JniUtils_checkSign
  (JNIEnv *, jclass, jobject);

#ifdef __cplusplus
}
#endif
#endif
