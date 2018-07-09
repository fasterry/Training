package com.androidndk;

public class ShowInfo {
    static {
        System.loadLibrary("JNI_SHOW");
    }

    public static native String getString();
}
