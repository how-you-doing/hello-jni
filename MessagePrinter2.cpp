#include <jni.h>
#include <stdio.h>
#include "MessagePrinter.h"

JNIEXPORT void JNICALL Java_MessagePrinter_printMsg(JNIEnv *env, jobject obj, jstring javaString)
{
    const char *nativeString = env->GetStringUTFChars(javaString, 0);
    printf("%s\n", nativeString);
    env->ReleaseStringUTFChars(javaString, nativeString);
}
