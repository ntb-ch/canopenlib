//------------------------------------------------------------------------------
// Copyright (C) 2012, Robert Johansson <rob@raditex.nu>, Raditex Control AB
// All rights reserved.
//
// This file is part of the rSCADA system.
//
// rSCADA 
// http://www.rSCADA.se
// info@rscada.se
//
//------------------------------------------------------------------------------

// 
// CANopen communication routines and data types.
//

#ifndef _CAN_IF_H_
#define _CAN_IF_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>


int can_socket_open();
int can_socket_close(int socket);

int can_filter_node_set(int socket, uint8_t node);
int can_filter_clear(int socket);

#ifdef __cplusplus
}
#endif

#endif /* _CAN_IF_H */
