#ifndef LIBTROW_GLOBAL_H
#define LIBTROW_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(LIBTROW_LIBRARY)
#  define LIBTROWSHARED_EXPORT Q_DECL_EXPORT
#else
#  define LIBTROWSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // LIBTROW_GLOBAL_H
