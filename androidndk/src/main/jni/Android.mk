LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_SRC_FILES :=JniShowInfo.cpp
LOCAL_MODULE :=JNI_SHOW
include $(BUILD_SHARED_LIBRARY)

