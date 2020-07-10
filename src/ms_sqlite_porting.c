/*
 * Copyright (c) 2015-2020 ACOINFO Co., Ltd.
 * All rights reserved.
 *
 * Detailed license information can be found in the LICENSE file.
 *
 * File: ms_sqlite_porting.c SQLite porting.
 *
 * Author: Jiao.jinxing <jiaojixing@acoinfo.com>
 *
 */

#include <ms_rtos.h>

int chmod(const char *__path, mode_t __mode)
{
    return 0;
}

int fchmod(int fd, mode_t __mode)
{
    return 0;
}

int utimes(const char *__path, const struct timeval *__tvp)
{
    return 0;
}
