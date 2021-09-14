#include "process.h"

void No::Process::Init(Isolate* isolate, Local<Object> target, char ** argv, int argc) {
  Local<Context> context = isolate->GetCurrentContext();
  Local<ObjectTemplate> process = ObjectTemplate::New(isolate);
  Local<Object> obj = process->NewInstance(isolate->GetCurrentContext()).ToLocalChecked();

  Local<Array> arr = Array::New(isolate, argc);
  for (int i = 0; i < argc; i++) {
      arr->Set(context, Number::New(isolate, i), newStringToLcal(isolate, argv[i]));
  }
  setObjectValue(isolate, obj, "argv", arr);
  setObjectValue(isolate, target, "process", obj);
}