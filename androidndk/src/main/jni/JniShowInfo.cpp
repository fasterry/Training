#include "com_androidndk_ShowInfo.h"

//
// Created by zcl on 2018/7/8.
//

JNIEXPORT jstring JNICALL Java_com_androidndk_ShowInfo_getString
  (JNIEnv *env, jclass jclass){
    return env->NewStringUTF("Hello World From JNI!!!!!");
  }