#include "core_foundation.h"

VALUE rb_mCoreFoundation;

void
Init_core_foundation(void)
{
  rb_mCoreFoundation = rb_define_module("CoreFoundation");
}
