/*
 * Copyright (C) 2012 Spreadtrum Communications Inc.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __GPIO_KANAS_W_H__
#define __GPIO_KANAS_W_H__

#ifndef __ASM_ARCH_BOARD_H
#error  "Don't include this file directly, include <mach/board.h>"
#endif

#define GPIO_TOUCH_RESET         81
#define GPIO_TOUCH_IRQ           82

#define GPIO_SENSOR_RESET        186//41
#define GPIO_MAIN_SENSOR_PWN     187//42
#define GPIO_SUB_SENSOR_PWN      188//43
#define CAM_FLASH_ENF_GPIO		111
#define CAM_FLASH_ENT_GPIO		112
#define SPRD_FLASH_ON			1
#define SPRD_FLASH_OFF			0
#define GPIO_TOUCHKEY_LED_EN	 116

#define SPRD_FLASH_OFST          0x890
#define SPRD_FLASH_CTRL_BIT      0x8000
#define SPRD_FLASH_LOW_VAL       0x3
#define SPRD_FLASH_HIGH_VAL      0xF
#define SPRD_FLASH_LOW_CUR       110
#define SPRD_FLASH_HIGH_CUR      470
#define REARCAM_SENSOR_CORE_EN   115

#define USB_OTG_CABLE_DETECT     72

#define GPIO_SUB_SENSOR_RESET        121

#define EIC_CHARGER_DETECT		(A_EIC_START + 0)
#define EIC_POWER_PBINT2        (A_EIC_START + 1)
#define EIC_POWER_PBINT         (A_EIC_START + 2)
#define EIC_AUD_HEAD_BUTTON     (A_EIC_START + 3)
#define EIC_CHG_CV_STATE       (A_EIC_START + 4)
#define EIC_AUD_HEAD_INST2      (A_EIC_START + 5)
#define EIC_VCHG_OVI            (A_EIC_START + 6)
#define EIC_VBAT_OVI            (A_EIC_START + 7)

#define EIC_KEY_POWER           (EIC_POWER_PBINT)
#define HEADSET_BUTTON_GPIO		122
#define HEADSET_DETECT_GPIO		120
#define HEADSET_SWITCH_GPIO   	0 
#define HEADSET_AMP_GPIO		131
#define HEADSET_EXT_MICBIAS_GPIO		123

#define HEADSET_IRQ_TRIGGER_LEVEL_DETECT 0
#define HEADSET_IRQ_TRIGGER_LEVEL_BUTTON 0

#define HEADSET_ADC_MIN_KEY_MEDIA 0
#define HEADSET_ADC_MAX_KEY_MEDIA 210
#define HEADSET_ADC_MIN_KEY_VOLUMEUP 211
#define HEADSET_ADC_MAX_KEY_VOLUMEUP 370
#define HEADSET_ADC_MIN_KEY_VOLUMEDOWN 371
#define HEADSET_ADC_MAX_KEY_VOLUMEDOWN 800
#define HEADSET_ADC_THRESHOLD_3POLE_DETECT 1107
#define HEADSET_IRQ_THRESHOLD_BUTTON 1
#define HEADSET_HEADMICBIAS_VOLTAGE 3000000

#define SPI0_CMMB_CS_GPIO        156
#define SPI1_WIFI_CS_GPIO        44

#define GPIO_BK                  136

#define GPIO_CMMB_RESET         144
#define GPIO_CMMB_INT           143
#define GPIO_CMMB_26M_CLK_EN    197

#define GPIO_BT_RESET       233
#define GPIO_BT_POWER       231
#define GPIO_BT2AP_WAKE     232
#define GPIO_AP2BT_WAKE     235

#define GPIO_WIFI_SHUTDOWN	230
#define GPIO_WIFI_IRQ		234

#define GPIO_GPS_RESET 167
#define GPIO_GPS_ONOFF 168

#define GPIO_PROX_INT 162
#define GPIO_ACC_INT  164
#define GPIO_GYRO_INT1 163
#define GPIO_M_RSTN	161
#define GPIO_M_DRDY 164

#define GPIO_SDIO_DETECT      75

#define GPIO_IF_PMIC_SDA 124
#define GPIO_IF_PMIC_SCL 125
#define GPIO_IF_PMIC_IRQ 126
#define GPIO_FUELGAUGE_SCL 65
#define GPIO_FUELGAUGE_SDA 66
#define GPIO_FUELGAUGE_ALERT 114
#define GPIO_MUIC_SDA	108
#define GPIO_MUIC_SCL	109
#define GPIO_MUIC_IRQ	110

#define GPIO_VIBRATOR_INT 117

#define GPIO_HW_REV0 129
#define GPIO_HW_REV1 128
#define GPIO_HW_REV2 127

/* ION config info
LCD:
   960x540

Video Playing:
   1080p 8 ref-frame

Video Recording:
   720p

Camera:
   8M,  support ZSL, support preview/capture rotation
*/
#define SPRD_ION_MM_SIZE         (40 * SZ_1M)
#define SPRD_ION_OVERLAY_SIZE    (4 * SZ_1M)

#endif
