/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class Javathon */

#ifndef _Included_Javathon
#define _Included_Javathon
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     Javathon
 * Method:    startPython
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_Javathon_startPython
  (JNIEnv *, jobject);

/*
 * Class:     Javathon
 * Method:    handleEvent
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_Javathon_handleEvent
  (JNIEnv *, jobject, jstring);

/*
 * Class:     Javathon
 * Method:    stopPython
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_Javathon_stopPython
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif