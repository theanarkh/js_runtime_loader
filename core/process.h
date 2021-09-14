#ifndef CHILD_PROCESS_H
#define CHILD_PROCESS_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/wait.h>
#include <errno.h>

#include "util.h"
#include "include/common.h"

using namespace v8;
using namespace No::Util;

namespace No {
    namespace Process {
        void Init(Isolate* isolate, Local<Object> target, char ** argv, int argc);
    }
}

#endif 