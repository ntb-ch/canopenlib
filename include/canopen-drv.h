#ifndef _CANOPEN_DRV_H_
#define _CANOPEN_DRV_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "canopen.h"


int canopen_frame_fill_pdo_set_position(canopen_frame_t *frame, uint8_t function_code, uint8_t node, uint16_t control, uint32_t targetpos);
int canopen_pdo_set_abs_position(int sock, uint8_t node, uint8_t function_code, uint16_t control, uint32_t targetpos);
int canopen_pdo_get_act_position(int sock, uint8_t node, uint8_t function_code);
int canopen_get_pdo(int sock, uint8_t node, uint8_t function_code);
int canopen_frame_fill_pdo_get_position(canopen_frame_t *frame, uint8_t function_code, uint8_t node);
int canopen_frame_fill_get_pdo(canopen_frame_t *frame, uint8_t function_code, uint8_t node);
int canopen_read_socket(int sock, uint8_t function_code, uint16_t *status, uint32_t *actpos);
int canopen_pdo_send_2bytes(int sock, uint8_t node, uint8_t function_code, uint16_t userData);
int canopen_frame_fill_pdo_2bytes(canopen_frame_t *frame, uint8_t function_code, uint8_t node, uint16_t userData);
int canopen_pdo_send_4bytes(int sock, uint8_t node, uint8_t function_code, int32_t userData);
int canopen_frame_fill_pdo_4bytes(canopen_frame_t *frame, uint8_t function_code, uint8_t node, int32_t userData);

int canopen_pdo_send_6bytes(int sock, uint8_t node, uint8_t function_code, uint16_t devCtrl, uint32_t data);
int canopen_frame_fill_pdo_6bytes(canopen_frame_t *frame, uint8_t function_code, uint8_t node, uint16_t devCtrl, uint32_t data);

int canopen_pdo_send_8bytes(int sock, uint8_t node, uint8_t function_code, uint32_t userData1, uint32_t userData2);
int canopen_frame_fill_pdo_8bytes(canopen_frame_t *frame, uint8_t function_code, uint8_t node, uint32_t userData1, uint32_t userData2);

int canopen_pdo_request(int sock, uint8_t node, uint8_t function_code);
int canopen_frame_fill_pdo_request(canopen_frame_t *frame, uint8_t function_code, uint8_t node);

int canopen_read_frame(int sock, canopen_frame_t* canopen_frame);
int canopen_read_socket_4bytes(int sock, uint8_t function_code, uint32_t *data);

#ifdef __cplusplus
}
#endif

#endif /* _CANOPEN_DRV_H_ */
