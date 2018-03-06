
#ifndef __CAN_H
#define __CAN_H

void CEC_CAN_IRQHandler (void);
void Init_CAN(void);
uint8_t out_config_convert(uint8_t data);

#endif
