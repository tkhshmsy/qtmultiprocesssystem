﻿#ifndef MULTIPROCESSSYSTEM_GLOBAL_H
#define MULTIPROCESSSYSTEM_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QT_BUILD_MULTIPROCESSSYSTEM_LIB)
#  define MULTIPROCESSSYSTEM_EXPORT Q_DECL_EXPORT
#else
#  define MULTIPROCESSSYSTEM_EXPORT Q_DECL_IMPORT
#endif

#endif // MULTIPROCESSSYSTEM_GLOBAL_H
