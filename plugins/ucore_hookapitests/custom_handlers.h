/*
Copyright (C) <2012> <Syracuse System Security (Sycure) Lab>
This is a plugin of DECAF. You can redistribute and modify it
under the terms of BSD license but it is made available
WITHOUT ANY WARRANTY. See the top-level COPYING file for more details.

For more information about DECAF and other softwares, see our
web site at:
http://sycurelab.ecs.syr.edu/

If you have any questions about DECAF,please post it on
http://code.google.com/p/decaf-platform/
*/

#ifndef CUSTOM_HANDLERS_H_
#define CUSTOM_HANDLERS_H_

#include "DECAF_target.h"
#include "DECAF_main.h"
#include "qemu-objects.h"
#include "vmi_c_wrapper.h" //for find_pid();

void hello_ret_handler (void *opaque);

#endif /* CUSTOM_HANDLERS_H_ */

