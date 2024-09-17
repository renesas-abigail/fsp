/*
* Copyright (c) 2020 - 2024 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/

#include "hw_sce_ra_private.h"

void HW_SCE_p_func043 (void)
{
    WR1_PROG(REG_A0H, 0x00010000U);

    HW_SCE_p_func100(0x8e389e5eU, 0xbf24033dU, 0x7a882180U, 0x3de84865U);
    WR1_PROG(REG_B0H, 0x00001898U);
    WR1_PROG(REG_D0H, 0x08000085U);
    WR1_PROG(REG_00H, 0x00430011U);
    WAIT_STS(REG_04H, 30, 0);
    WR1_PROG(REG_40H, 0x00001800U);

    HW_SCE_p_func100(0xc8abd055U, 0xaf022a14U, 0x43fe3a31U, 0x214b2c28U);
    WR1_PROG(REG_D0H, 0x08000095U);
    WR1_PROG(REG_00H, 0x00430011U);
    WAIT_STS(REG_04H, 30, 0);
    WR1_PROG(REG_40H, 0x00001800U);

    HW_SCE_p_func100(0xe963a30dU, 0xfd25ea85U, 0x38a919bfU, 0xdb8ae843U);

    WR1_PROG(REG_94H, 0x000008a5U);

    WR1_PROG(REG_D0H, 0x080000c5U);
    WR1_PROG(REG_B0H, 0x00000893U);
    WR1_PROG(REG_00H, 0x00430009U);
    WAIT_STS(REG_04H, 30, 0);
    WR1_PROG(REG_40H, 0x00001800U);
    WR1_PROG(REG_B0H, 0x00000894U);
    WR1_PROG(REG_00H, 0x00430009U);
    WAIT_STS(REG_04H, 30, 0);
    WR1_PROG(REG_40H, 0x00001800U);

    WR1_PROG(REG_D0H, 0x0b040104U);
    WR1_PROG(REG_9CH, 0x810100c0U);
    WR1_PROG(REG_00H, 0x00490005U);
    WAIT_STS(REG_04H, 30, 0);
    WR1_PROG(REG_40H, 0x00001800U);

    WR1_PROG(REG_9CH, 0x80840005U);
    WR1_PROG(REG_00H, 0x03410011U);
    WAIT_STS(REG_04H, 30, 0);
    WR1_PROG(REG_40H, 0x00001800U);

    WR1_PROG(REG_94H, 0x00003845U);
    WR1_PROG(REG_94H, 0x00008c40U);
    WR1_PROG(REG_94H, 0x00ffffffU);
    WR1_PROG(REG_94H, 0x00009040U);
    WR1_PROG(REG_94H, 0x01000000U);
    WR1_PROG(REG_94H, 0x00003c45U);

    WR1_PROG(REG_D4H, 0x40000000U);
    WR1_PROG(REG_D0H, 0x30009105U);
    WR1_PROG(REG_9CH, 0x81840005U);
    WR1_PROG(REG_00H, 0x00490011U);
    WAIT_STS(REG_04H, 30, 0);
    WR1_PROG(REG_40H, 0x00001800U);

    WR1_PROG(REG_94H, 0x00008c40U);
    WR1_PROG(REG_94H, 0x00ffffffU);
    WR1_PROG(REG_94H, 0x00009040U);
    WR1_PROG(REG_94H, 0x02000000U);
    WR1_PROG(REG_94H, 0x00003c45U);

    WR1_PROG(REG_D4H, 0x40000000U);
    WR1_PROG(REG_D0H, 0x30009045U);
    WR1_PROG(REG_9CH, 0x81840005U);
    WR1_PROG(REG_00H, 0x00490011U);
    WAIT_STS(REG_04H, 30, 0);
    WR1_PROG(REG_40H, 0x00001800U);

    HW_SCE_p_func100(0x9aa1b558U, 0x89ec1951U, 0x26740fe4U, 0x27381492U);
    WR1_PROG(REG_D0H, 0x08000085U);
    WR1_PROG(REG_00H, 0x00410011U);
    WAIT_STS(REG_04H, 30, 0);
    WR1_PROG(REG_40H, 0x00001800U);

    HW_SCE_p_func100(0x82844ed4U, 0xbf7a5757U, 0xd337bbabU, 0xf8008d6bU);
    WR1_PROG(REG_14H, 0x000000a1U);
    WR1_PROG(REG_D0H, 0x0c000094U);
    WAIT_STS(REG_14H, 31, 1);
    WR1_PROG(REG_2CH, change_endian_long(0x00000000U));

    WR1_PROG(REG_94H, 0x00007c07U);
    WR1_PROG(REG_40H, 0x00602000U);
    WR1_PROG(REG_24H, 0x00000000U);
}