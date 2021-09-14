#ifndef Util_H
#define Util_H

#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "include/common.h"

using namespace v8;

namespace No {
    namespace Util {
        void Log(const char * str);
        Local<String> newStringToLcal(Isolate * isolate, const char * str, NewStringType type = NewStringType::kNormal);
        void setMethod(Isolate *isolate, Local<ObjectTemplate> recv, const char *name, FunctionCallback callback);
        void setObjectTemplateValue(Isolate *isolate, Local<ObjectTemplate> recv, const char *name, Local<Data> value);
        void setObjectValue(Isolate *isolate, Local<Object> recv, const char *name, Local<Value> value);
    }
}

#endif 
