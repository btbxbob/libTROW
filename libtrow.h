#ifndef LIBTROW_H
#define LIBTROW_H

#include "libtrow_global.h"
#include <QString>

/*!
 * \brief The LibTROW class
 * \link http://trow.cc/wiki/trow/api/start
 */
class LIBTROWSHARED_EXPORT LibTROW
{

public:
    /*!
     * \brief The Respond class
     * 服务器回复的类，似乎只有错误信息呢。
     */
    class Respond
    {
        short error;
        QString message;
    };

    /*!
     * \brief The Stats class
     * 存放从服务器返回的t，也就是时间，注意有超时
     */
    class Stats :Respond
    {
        short t;
    };

    class Request
    {
        QString appkey;
        QString apptoken;
        short t;
    };

    LibTROW();
    Stats stats;

private:
    bool is_timeout();

};

#endif // LIBTROW_H
