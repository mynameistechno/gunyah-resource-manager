// © 2021 Qualcomm Innovation Center, Inc. All rights reserved.
//
// SPDX-License-Identifier: BSD-3-Clause

struct vm_console;
typedef struct vm_console vm_console_t;

rm_error_t
vm_console_init(void);

vm_console_t *
vm_console_create(vm_t *vm);

bool
vm_console_msg_handler(vmid_t client_id, uint32_t msg_id, uint16_t seq_num,
		       void *buf, size_t len);

void
vm_console_destroy(vm_console_t *console);

void
vm_console_deinit(void);
