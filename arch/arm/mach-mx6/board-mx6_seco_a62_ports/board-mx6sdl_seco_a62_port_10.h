
//#ifndef _BOARD_MX6_SECO_A62_PORT_10_H
//#define _BOARD_MX6_SECO_A62_PORT_10_H

#include <mach/iomux-mx6dl.h>

#ifdef CONFIG_A62_PORT_10_CONF_1
// Conf 1 - UART5
static iomux_v3_cfg_t mx6sdl_seco_a62_port_10_conf_1_pads[] = {
	
	MX6DL_PAD_KEY_COL4__UART5_RTS,
	MX6DL_PAD_KEY_ROW4__UART5_CTS,
};
#endif
#ifdef CONFIG_A62_PORT_10_CONF_2
// Conf 2 - GENERIC GPIO
static iomux_v3_cfg_t mx6sdl_seco_a62_port_10_conf_2_pads[] = {

        MX6DL_PAD_KEY_COL4__GPIO_4_14,
 	MX6DL_PAD_KEY_ROW4__GPIO_4_15,

};
#endif
#ifdef CONFIG_A62_PORT_10_CONF_3
// Conf 3 - GENERIC GPIO
static iomux_v3_cfg_t mx6sdl_seco_a62_port_10_conf_3_pads[] = {

        MX6DL_PAD_KEY_COL4__CAN2_TXCAN,
	MX6DL_PAD_KEY_ROW4__CAN2_RXCAN,	

};
#endif
