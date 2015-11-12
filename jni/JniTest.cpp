#include <jni.h>
#include <string.h>
#include <stdlib.h>
#ifndef _Included_com_example_jnitest_MainActivity
#define _Included_com_example_jnitest_MainActivity
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_example_jnitest_MainActivity
 * Method:    getPrintText
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_jnitest_MainActivity_getPrintText
  (JNIEnv *env, jobject obj,jstring str){
	const char *cha = env->GetStringUTFChars(str,JNI_FALSE);
	return env->NewStringUTF(cha);
}

#ifdef __cplusplus
}
#endif
#endif
