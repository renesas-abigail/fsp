/***********************************************************************************************************************
 * Copyright [2020-2024] Renesas Electronics Corporation and/or its affiliates.  All Rights Reserved.
 *
 * This software and documentation are supplied by Renesas Electronics America Inc. and may only be used with products
 * of Renesas Electronics Corp. and its affiliates ("Renesas").  No other uses are authorized.  Renesas products are
 * sold pursuant to Renesas terms and conditions of sale.  Purchasers are solely responsible for the selection and use
 * of Renesas products and Renesas assumes no liability.  No license, express or implied, to any intellectual property
 * right is granted by Renesas. This software is protected under all applicable laws, including copyright laws. Renesas
 * reserves the right to change or discontinue this software and/or this documentation. THE SOFTWARE AND DOCUMENTATION
 * IS DELIVERED TO YOU "AS IS," AND RENESAS MAKES NO REPRESENTATIONS OR WARRANTIES, AND TO THE FULLEST EXTENT
 * PERMISSIBLE UNDER APPLICABLE LAW, DISCLAIMS ALL WARRANTIES, WHETHER EXPLICITLY OR IMPLICITLY, INCLUDING WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, AND NONINFRINGEMENT, WITH RESPECT TO THE SOFTWARE OR
 * DOCUMENTATION.  RENESAS SHALL HAVE NO LIABILITY ARISING OUT OF ANY SECURITY VULNERABILITY OR BREACH.  TO THE MAXIMUM
 * EXTENT PERMITTED BY LAW, IN NO EVENT WILL RENESAS BE LIABLE TO YOU IN CONNECTION WITH THE SOFTWARE OR DOCUMENTATION
 * (OR ANY PERSON OR ENTITY CLAIMING RIGHTS DERIVED FROM YOU) FOR ANY LOSS, DAMAGES, OR CLAIMS WHATSOEVER, INCLUDING,
 * WITHOUT LIMITATION, ANY DIRECT, CONSEQUENTIAL, SPECIAL, INDIRECT, PUNITIVE, OR INCIDENTAL DAMAGES; ANY LOST PROFITS,
 * OTHER ECONOMIC DAMAGE, PROPERTY DAMAGE, OR PERSONAL INJURY; AND EVEN IF RENESAS HAS BEEN ADVISED OF THE POSSIBILITY
 * OF SUCH LOSS, DAMAGES, CLAIMS OR COSTS.
 **********************************************************************************************************************/

#include "hw_sce_ra_private.h"

void HW_SCE_p_func312 (void)
{
    uint32_t oLoop = 0U;

    WR1_PROG(REG_1600H, 0x0000379dU);

    WR1_PROG(REG_1600H, 0x00000842U);

    WR1_PROG(REG_1600H, 0x0000b460U);
    WR1_PROG(REG_1600H, 0x00000003U);

    WR1_PROG(REG_1404H, 0x18380000U);
    WR1_PROG(REG_1400H, 0x00c00661U);
    WAIT_STS(REG_1404H, 30, 0);
    WR1_PROG(REG_143CH, 0x00001800U);

    WR1_PROG(REG_1600H, 0x0000b480U);
    WR1_PROG(REG_1600H, 0x00000080U);
    WR1_PROG(REG_1608H, 0x80a00004U);
    WR1_PROG(REG_1400H, 0x03400081U);
    WAIT_STS(REG_1404H, 30, 0);
    WR1_PROG(REG_143CH, 0x00001800U);

    for (oLoop = 0U; oLoop < 3U; oLoop++)
    {
        WR1_PROG(REG_1404H, 0x18380000U);
        WR1_PROG(REG_1400H, 0x00c00091U);
        WAIT_STS(REG_1404H, 30, 0);
        WR1_PROG(REG_143CH, 0x00001800U);

        HW_SCE_p_func100(0x523d94c2U, 0xdbd8ba50U, 0xbeffe85bU, 0x1482b8a1U);
        WR1_PROG(REG_1600H, 0x00007c02U);
        WR1_PROG(REG_143CH, 0x00600000U);
        WR1_PROG(REG_1458H, 0x00000000U);

        if (RD1_MASK(REG_1440H, 0xffffffffU) == 0x00000000U)
        {
            WR1_PROG(REG_1014H, 0x00000220U);
            WR1_PROG(REG_1018H, 0x000008c0U);
            WR1_PROG(REG_1020H, 0x00000e98U);

            WR1_PROG(REG_1004H, 0x10100009U);
            WR1_PROG(REG_1000H, 0x00010001U);
            WAIT_STS(REG_1000H, 0, 0);

            HW_SCE_p_func101(0xb55f8900U, 0xbd88ea29U, 0x2b4a0988U, 0xca27c477U);
        }
        else if (RD1_MASK(REG_1440H, 0xffffffffU) == 0x00000001U)
        {
            WR1_PROG(REG_1014H, 0x000001a0U);
            WR1_PROG(REG_1018H, 0x000008c0U);
            WR1_PROG(REG_1020H, 0x00000e98U);

            WR1_PROG(REG_1004H, 0x10100009U);
            WR1_PROG(REG_1000H, 0x00010001U);
            WAIT_STS(REG_1000H, 0, 0);

            HW_SCE_p_func101(0x6596e211U, 0xa0885e6dU, 0x6e78d789U, 0x391d0ff3U);
        }
        else if (RD1_MASK(REG_1440H, 0xffffffffU) == 0x00000002U)
        {
            WR1_PROG(REG_1014H, 0x00000120U);
            WR1_PROG(REG_1018H, 0x000008c0U);
            WR1_PROG(REG_1020H, 0x00000e98U);

            WR1_PROG(REG_1004H, 0x10100009U);
            WR1_PROG(REG_1000H, 0x00010001U);
            WAIT_STS(REG_1000H, 0, 0);

            HW_SCE_p_func101(0x3058884cU, 0x06b89cd0U, 0x911bef5dU, 0xaa1e6dcdU);
        }

        WR1_PROG(REG_1014H, 0x00000838U);
        WR1_PROG(REG_1018H, 0x000008c0U);
        WR1_PROG(REG_1020H, 0x00000d88U);

        WR1_PROG(REG_1004H, 0x10100009U);
        WR1_PROG(REG_1000H, 0x00010001U);
        WAIT_STS(REG_1000H, 0, 0);

        WR1_PROG(REG_1014H, 0x00000e98U);
        WR1_PROG(REG_1018H, 0x00000d88U);
        WR1_PROG(REG_101CH, 0x00000948U);
        WR1_PROG(REG_1020H, 0x00000948U);

        WR1_PROG(REG_1004H, 0x1010000dU);
        WR1_PROG(REG_1000H, 0x00010201U);
        WAIT_STS(REG_1000H, 0, 0);

        WR1_PROG(REG_1404H, 0x1d080000U);
        WR1_PROG(REG_1400H, 0x00c00081U);
        WAIT_STS(REG_1404H, 30, 0);
        WR1_PROG(REG_143CH, 0x00001800U);

        WR1_PROG(REG_1014H, 0x000008c8U);
        WR1_PROG(REG_1018H, 0x00000d88U);
        WR1_PROG(REG_1020H, 0x00000ae8U);

        WR1_PROG(REG_1004H, 0x10100009U);
        WR1_PROG(REG_1000H, 0x00010001U);
        WAIT_STS(REG_1000H, 0, 0);

        WR1_PROG(REG_1404H, 0x18380000U);
        WR1_PROG(REG_1400H, 0x00c00091U);
        WAIT_STS(REG_1404H, 30, 0);
        WR1_PROG(REG_143CH, 0x00001800U);

        WR1_PROG(REG_1404H, 0x1d080000U);
        WR1_PROG(REG_1600H, 0x00000884U);
        WR1_PROG(REG_1608H, 0x81a00004U);
        WR1_PROG(REG_1400H, 0x00c90081U);
        WAIT_STS(REG_1404H, 30, 0);
        WR1_PROG(REG_143CH, 0x00001800U);

        WR1_PROG(REG_1014H, 0x00000948U);
        WR1_PROG(REG_1018H, 0x00000d88U);
        WR1_PROG(REG_1020H, 0x00000d88U);

        WR1_PROG(REG_1004H, 0x10100007U);
        WR1_PROG(REG_1000H, 0x00010001U);
        WAIT_STS(REG_1000H, 0, 0);

        WR1_PROG(REG_1014H, 0x00000d88U);
        WR1_PROG(REG_1018H, 0x000008c0U);
        WR1_PROG(REG_1020H, 0x00000e10U);

        WR1_PROG(REG_1004H, 0x10100009U);
        WR1_PROG(REG_1000H, 0x00010001U);
        WAIT_STS(REG_1000H, 0, 0);

        WR1_PROG(REG_1014H, 0x00000630U);
        WR1_PROG(REG_1018H, 0x000008c0U);
        WR1_PROG(REG_1020H, 0x00000d88U);

        WR1_PROG(REG_1004H, 0x10100009U);
        WR1_PROG(REG_1000H, 0x00010001U);
        WAIT_STS(REG_1000H, 0, 0);

        WR1_PROG(REG_1014H, 0x00000e10U);
        WR1_PROG(REG_1018H, 0x00000d88U);
        WR1_PROG(REG_101CH, 0x00000948U);
        WR1_PROG(REG_1020H, 0x00000948U);

        WR1_PROG(REG_1004H, 0x1010000dU);
        WR1_PROG(REG_1000H, 0x00010201U);
        WAIT_STS(REG_1000H, 0, 0);

        WR1_PROG(REG_1404H, 0x19480000U);
        WR1_PROG(REG_1400H, 0x00c00091U);
        WAIT_STS(REG_1404H, 30, 0);
        WR1_PROG(REG_143CH, 0x00001800U);

        WR1_PROG(REG_1014H, 0x000007b8U);
        WR1_PROG(REG_1018H, 0x000009d0U);
        WR1_PROG(REG_1020H, 0x00000d88U);

        WR1_PROG(REG_1004H, 0x10100009U);
        WR1_PROG(REG_1000H, 0x00010001U);
        WAIT_STS(REG_1000H, 0, 0);

        WR1_PROG(REG_1014H, 0x00000e98U);
        WR1_PROG(REG_1018H, 0x00000d88U);
        WR1_PROG(REG_101CH, 0x00000a58U);
        WR1_PROG(REG_1020H, 0x00000a58U);

        WR1_PROG(REG_1004H, 0x1010000dU);
        WR1_PROG(REG_1000H, 0x00010201U);
        WAIT_STS(REG_1000H, 0, 0);

        WR1_PROG(REG_1404H, 0x1c780000U);
        WR1_PROG(REG_1400H, 0x00c00111U);
        WAIT_STS(REG_1404H, 30, 0);
        WR1_PROG(REG_143CH, 0x00001800U);

        WR1_PROG(REG_1014H, 0x00000ae8U);
        WR1_PROG(REG_1018H, 0x00000d88U);
        WR1_PROG(REG_1020H, 0x00000d88U);

        WR1_PROG(REG_1004H, 0x10100009U);
        WR1_PROG(REG_1000H, 0x00010001U);
        WAIT_STS(REG_1000H, 0, 0);

        WR1_PROG(REG_1014H, 0x00000a58U);
        WR1_PROG(REG_1018H, 0x00000d88U);
        WR1_PROG(REG_1020H, 0x00000a58U);

        WR1_PROG(REG_1004H, 0x20200009U);
        WR1_PROG(REG_1000H, 0x00010001U);
        WAIT_STS(REG_1000H, 0, 0);

        WR1_PROG(REG_1014H, 0x000009d8U);
        WR1_PROG(REG_1018H, 0x00000d00U);
        WR1_PROG(REG_1020H, 0x00000bf8U);

        WR1_PROG(REG_1004H, 0x10100009U);
        WR1_PROG(REG_1000H, 0x00010001U);
        WAIT_STS(REG_1000H, 0, 0);

        WR1_PROG(REG_1404H, 0x19480000U);
        WR1_PROG(REG_1400H, 0x00c00091U);
        WAIT_STS(REG_1404H, 30, 0);
        WR1_PROG(REG_143CH, 0x00001800U);

        WR1_PROG(REG_1014H, 0x000005b0U);
        WR1_PROG(REG_1018H, 0x000009d0U);
        WR1_PROG(REG_1020H, 0x00000d88U);

        WR1_PROG(REG_1004H, 0x10100009U);
        WR1_PROG(REG_1000H, 0x00010001U);
        WAIT_STS(REG_1000H, 0, 0);

        WR1_PROG(REG_1014H, 0x00000e10U);
        WR1_PROG(REG_1018H, 0x00000d88U);
        WR1_PROG(REG_101CH, 0x00000a58U);
        WR1_PROG(REG_1020H, 0x00000d88U);

        WR1_PROG(REG_1004H, 0x1010000dU);
        WR1_PROG(REG_1000H, 0x00010201U);
        WAIT_STS(REG_1000H, 0, 0);

        WR1_PROG(REG_1014H, 0x000008c8U);
        WR1_PROG(REG_1018H, 0x000009d0U);
        WR1_PROG(REG_1020H, 0x00000948U);

        WR1_PROG(REG_1004H, 0x10100009U);
        WR1_PROG(REG_1000H, 0x00010001U);
        WAIT_STS(REG_1000H, 0, 0);

        WR1_PROG(REG_1404H, 0x18380000U);
        WR1_PROG(REG_1400H, 0x00c00091U);
        WAIT_STS(REG_1404H, 30, 0);
        WR1_PROG(REG_143CH, 0x00001800U);

        WR1_PROG(REG_1014H, 0x00000d88U);
        WR1_PROG(REG_1018H, 0x00000948U);
        WR1_PROG(REG_1020H, 0x00000948U);

        WR1_PROG(REG_1004H, 0x20200009U);
        WR1_PROG(REG_1000H, 0x00010001U);
        WAIT_STS(REG_1000H, 0, 0);

        WR1_PROG(REG_1014H, 0x000008c8U);
        WR1_PROG(REG_1018H, 0x000009d0U);
        WR1_PROG(REG_1020H, 0x000009d8U);

        WR1_PROG(REG_1004H, 0x10100009U);
        WR1_PROG(REG_1000H, 0x00010001U);
        WAIT_STS(REG_1000H, 0, 0);

        WR1_PROG(REG_1404H, 0x1a580000U);
        WR1_PROG(REG_1400H, 0x00c00091U);
        WAIT_STS(REG_1404H, 30, 0);
        WR1_PROG(REG_143CH, 0x00001800U);

        WR1_PROG(REG_1014H, 0x00000738U);
        WR1_PROG(REG_1018H, 0x00000ae0U);
        WR1_PROG(REG_1020H, 0x00000d88U);

        WR1_PROG(REG_1004H, 0x10100009U);
        WR1_PROG(REG_1000H, 0x00010001U);
        WAIT_STS(REG_1000H, 0, 0);

        WR1_PROG(REG_1014H, 0x00000e98U);
        WR1_PROG(REG_1018H, 0x00000d88U);
        WR1_PROG(REG_101CH, 0x00000b68U);
        WR1_PROG(REG_1020H, 0x00000b68U);

        WR1_PROG(REG_1004H, 0x1010000dU);
        WR1_PROG(REG_1000H, 0x00010201U);
        WAIT_STS(REG_1000H, 0, 0);

        WR1_PROG(REG_1404H, 0x1c780000U);
        WR1_PROG(REG_1400H, 0x00c00111U);
        WAIT_STS(REG_1404H, 30, 0);
        WR1_PROG(REG_143CH, 0x00001800U);

        WR1_PROG(REG_1014H, 0x00000bf8U);
        WR1_PROG(REG_1018H, 0x00000d88U);
        WR1_PROG(REG_1020H, 0x00000d88U);

        WR1_PROG(REG_1004H, 0x10100009U);
        WR1_PROG(REG_1000H, 0x00010001U);
        WAIT_STS(REG_1000H, 0, 0);

        WR1_PROG(REG_1014H, 0x00000b68U);
        WR1_PROG(REG_1018H, 0x00000d88U);
        WR1_PROG(REG_1020H, 0x00000b68U);

        WR1_PROG(REG_1004H, 0x20200009U);
        WR1_PROG(REG_1000H, 0x00010001U);
        WAIT_STS(REG_1000H, 0, 0);

        WR1_PROG(REG_1014H, 0x00000ae8U);
        WR1_PROG(REG_1018H, 0x00000d00U);
        WR1_PROG(REG_1020H, 0x000008c8U);

        WR1_PROG(REG_1004H, 0x10100009U);
        WR1_PROG(REG_1000H, 0x00010001U);
        WAIT_STS(REG_1000H, 0, 0);

        WR1_PROG(REG_1404H, 0x1a580000U);
        WR1_PROG(REG_1400H, 0x00c00091U);
        WAIT_STS(REG_1404H, 30, 0);
        WR1_PROG(REG_143CH, 0x00001800U);

        WR1_PROG(REG_1014H, 0x00000530U);
        WR1_PROG(REG_1018H, 0x00000ae0U);
        WR1_PROG(REG_1020H, 0x00000d88U);

        WR1_PROG(REG_1004H, 0x10100009U);
        WR1_PROG(REG_1000H, 0x00010001U);
        WAIT_STS(REG_1000H, 0, 0);

        WR1_PROG(REG_1014H, 0x00000e10U);
        WR1_PROG(REG_1018H, 0x00000d88U);
        WR1_PROG(REG_101CH, 0x00000b68U);
        WR1_PROG(REG_1020H, 0x00000d88U);

        WR1_PROG(REG_1004H, 0x1010000dU);
        WR1_PROG(REG_1000H, 0x00010201U);
        WAIT_STS(REG_1000H, 0, 0);

        WR1_PROG(REG_1014H, 0x000009d8U);
        WR1_PROG(REG_1018H, 0x00000ae0U);
        WR1_PROG(REG_1020H, 0x00000a58U);

        WR1_PROG(REG_1004H, 0x10100009U);
        WR1_PROG(REG_1000H, 0x00010001U);
        WAIT_STS(REG_1000H, 0, 0);

        WR1_PROG(REG_1404H, 0x19480000U);
        WR1_PROG(REG_1400H, 0x00c00091U);
        WAIT_STS(REG_1404H, 30, 0);
        WR1_PROG(REG_143CH, 0x00001800U);

        WR1_PROG(REG_1014H, 0x00000d88U);
        WR1_PROG(REG_1018H, 0x00000a58U);
        WR1_PROG(REG_1020H, 0x00000a58U);

        WR1_PROG(REG_1004H, 0x20200009U);
        WR1_PROG(REG_1000H, 0x00010001U);
        WAIT_STS(REG_1000H, 0, 0);

        WR1_PROG(REG_1014H, 0x000009d8U);
        WR1_PROG(REG_1018H, 0x00000ae0U);
        WR1_PROG(REG_1020H, 0x00000ae8U);

        WR1_PROG(REG_1004H, 0x10100009U);
        WR1_PROG(REG_1000H, 0x00010001U);
        WAIT_STS(REG_1000H, 0, 0);

        WR1_PROG(REG_1404H, 0x1c780000U);
        WR1_PROG(REG_1400H, 0x00c00111U);
        WAIT_STS(REG_1404H, 30, 0);
        WR1_PROG(REG_143CH, 0x00001800U);

        WR1_PROG(REG_1014H, 0x000008c8U);
        WR1_PROG(REG_1018H, 0x00000d00U);
        WR1_PROG(REG_1020H, 0x00000d88U);

        WR1_PROG(REG_1004H, 0x10100009U);
        WR1_PROG(REG_1000H, 0x00010001U);
        WAIT_STS(REG_1000H, 0, 0);

        WR1_PROG(REG_1014H, 0x00000ae8U);
        WR1_PROG(REG_1018H, 0x00000d00U);
        WR1_PROG(REG_1020H, 0x00000c78U);

        WR1_PROG(REG_1004H, 0x10100009U);
        WR1_PROG(REG_1000H, 0x00010001U);
        WAIT_STS(REG_1000H, 0, 0);

        WR1_PROG(REG_1404H, 0x1b680000U);
        WR1_PROG(REG_1400H, 0x00c00091U);
        WAIT_STS(REG_1404H, 30, 0);
        WR1_PROG(REG_143CH, 0x00001800U);

        WR1_PROG(REG_1014H, 0x00000d88U);
        WR1_PROG(REG_1018H, 0x00000c78U);
        WR1_PROG(REG_1020H, 0x00000e98U);

        WR1_PROG(REG_1004H, 0x20200009U);
        WR1_PROG(REG_1000H, 0x00010001U);
        WAIT_STS(REG_1000H, 0, 0);

        WR1_PROG(REG_1404H, 0x1d080000U);
        WR1_PROG(REG_1600H, 0x0000b480U);
        WR1_PROG(REG_1600H, 0x00000080U);
        WR1_PROG(REG_1608H, 0x81a00004U);
        WR1_PROG(REG_1400H, 0x00c90081U);
        WAIT_STS(REG_1404H, 30, 0);
        WR1_PROG(REG_143CH, 0x00001800U);

        WR1_PROG(REG_1014H, 0x00000d88U);
        WR1_PROG(REG_1018H, 0x00000e98U);
        WR1_PROG(REG_1020H, 0x00000b68U);

        WR1_PROG(REG_1004H, 0x20200009U);
        WR1_PROG(REG_1000H, 0x00010001U);
        WAIT_STS(REG_1000H, 0, 0);

        WR1_PROG(REG_1600H, 0x0000b480U);
        WR1_PROG(REG_1600H, 0x00000080U);
        WR1_PROG(REG_1608H, 0x80a00004U);
        WR1_PROG(REG_1404H, 0x1a680000U);
        WR1_PROG(REG_1400H, 0x03430081U);
        WAIT_STS(REG_1404H, 30, 0);
        WR1_PROG(REG_143CH, 0x00001800U);

        WR1_PROG(REG_1600H, 0x00002c40U);

        HW_SCE_p_func101(0x53c7c5daU, 0x1e475c2eU, 0x382f6910U, 0x99701872U);
    }

    WR1_PROG(REG_1458H, 0x00000000U);

    WR1_PROG(REG_1600H, 0x38000843U);
    WR1_PROG(REG_1608H, 0x00000080U);
    WR1_PROG(REG_143CH, 0x00260000U);

    WR1_PROG(REG_143CH, 0x00402000U);
    WR1_PROG(REG_1458H, 0x00000000U);

    WR1_PROG(REG_1014H, 0x00000a58U);
    WR1_PROG(REG_1018H, 0x00000d00U);
    WR1_PROG(REG_1020H, 0x000008c8U);

    WR1_PROG(REG_1004H, 0x10100009U);
    WR1_PROG(REG_1000H, 0x00010001U);
    WAIT_STS(REG_1000H, 0, 0);

    WR1_PROG(REG_1444H, 0x000000a7U);
    WR1_PROG(REG_1608H, 0x800103a0U);
    WAIT_STS(REG_1444H, 31, 1);
    WR1_PROG(REG_1420H, change_endian_long(0x0000f312U));
    WR1_PROG(REG_1458H, 0x00000000U);

    HW_SCE_p_func101(0x3709a461U, 0x906d1d7dU, 0x0480525dU, 0x9129c45fU);
    HW_SCE_p_func311();

    WR1_PROG(REG_1600H, 0x000037bcU);

    WR1_PROG(REG_1600H, 0x00007c1dU);
    WR1_PROG(REG_143CH, 0x00602000U);
    WR1_PROG(REG_1458H, 0x00000000U);
}