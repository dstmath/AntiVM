//
// Created by BunnyBlue on 4/19/17.
//

#ifndef ANTIVM_ANTIVM_H
#define ANTIVM_ANTIVM_H

#include <pwd.h>
#include <grp.h>
#include <sys/stat.h>
#include <jni.h>
#include <sys/types.h>
#include <unistd.h>
#include <unistd.h>
#include <stdio.h>
#include <android/log.h>
#include <dlfcn.h>
#include <stddef.h>
#include <fcntl.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <pwd.h>
#include <grp.h>
#include <sys/stat.h>
#include <jni.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <android/log.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <jni.h>

#
#define TAG "AntiVM"
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG,  TAG, __VA_ARGS__)
#define LOGDT(T, ...) __android_log_print(ANDROID_LOG_DEBUG,  T, __VA_ARGS__)
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO,  TAG, __VA_ARGS__)
#define LOGW(...) __android_log_print(ANDROID_LOG_WARN,  TAG, __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, TAG, __VA_ARGS__)


void fixPath(char *path);


char *filterPackage(char *string);

#endif //ANTIVM_ANTIVM_H
