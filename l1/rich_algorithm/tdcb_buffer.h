/*
/ * tdcb_buffer.h
 *
 *  Created on: 29/gen/2015
 *      Author: Valeria Fascianelli
 *      Email: vxf441@hep.ph.bham.ac.uk
 */

#ifndef TDCB_BUFFER_H_
#define TDCB_BUFFER_H_

// Definitions in the board header 1 only:

#define DATA_SOURCE_SUB_ID_MASK 0x00ff0000
#define DATA_SOURCE_SUB_ID_MASK_RSHIFT 16
#define DATA_BLOCK_SIZE_MASK 0x0000ffff
#define DATA_BLOCK_SIZE_MASK_RSHIFT 0
//#define DATA_SOURCE_ID_MASK 0xff000000
//#define DATA_SOURCE_ID_MASK_RSHIFT 24

// Definitions in the board header 2 only:
#define FORMAT_IDENTIFIER_MASK 0xff000000
#define FORMAT_IDENTIFIER_RSHIFT 24
#define L0_TRIGGER_TYPE_MASK 0x0000ff00
#define L0_TRIGGER_TYPE_MASK_RSHIFT 8
#define FPGA_ID_BOARD_HEADER_MASK 0x000000ff
#define FPGA_ID_BOARD_HEADER_RSHIFT 0
#define SPECIAL_TRIGGER_NWORDS_MASK 0x00000fff
#define SPECIAL_TRIGGER_NWORDS_RSHIFT 0

// Definitions in the FPGA header only:
#define FLAG_ERROR_MASK 0x01000000
#define FLAG_ERROR_RSHIFT 24
#define FPGA_ID_MASK 0x00ff0000
#define FPGA_ID_RSHIFT 16
#define NUMBER_OF_FRAME_MASK 0x000000ff
#define NUMBER_OF_FRAME_MASK_RSHIFT 0

// Definitions in frame header only:

#define NUMBER_OF_WORDS 0xffff0000
#define NUMBER_OF_WORDS_RSHIFT 16
#define FRAME_TIME_STAMP 0x0000ffff
#define FRAME_TIME_STAMP_RSHIFT 0

// Definitions in the measurement word:

#define TDCB_TYPE_MASK  0xf0000000  // Data type field
#define TDCB_ERROR  0x60000000  // TDC Error flag.
#define TDCB_LEADING  0x40000000
#define TDCB_TRAILING  0x50000000
#define TDCB_CHANNEL_MASK 0x00f80000
#define TDCB_CHANNEL_RSHIFT 19
#define TDCB_TDC_MASK 0x0f000000
#define TDCB_TDC_RSHIFT 24
#define TDCB_DATA_MASK  0x0007ffff

// FPGA IDs
#define FLAG_PP_FPGA0_MASK 0x00000001
#define FLAG_PP_FPGA1_MASK 0x00000002
#define FLAG_PP_FPGA2_MASK 0x00000004
#define FLAG_PP_FPGA3_MASK 0x00000008
#define FLAG_SL_FPGA_MASK 0x00000010
#define PP_FPGA0_FLAG_RSHIFT 0
#define PP_FPGA1_FLAG_RSHIFT 1
#define PP_FPGA2_FLAG_RSHIFT 2
#define PP_FPGA3_FLAG_RSHIFT 3
#define SL_FPGA_FLAG_RSHIFT 4

// Special triggers
#define L0_SPECIAL_TRIGGER_MASK 0x00000080
#define L0_SOB 0x00000088
#define L0_EOB 0x0000008c
//Definition for DIMEOB HEADER
#define SPECIAL_TRIGGER_DIMEOB_NUMBER_OF_WORDS 0x0000ffff
#define SPECIAL_TRIGGER_DIMEOB_SUBID 0xff000000
#define SPECIAL_TRIGGER_DIMEOB_DATABLOCK 0x00ff0000
#define SPECIAL_TRIGGER_DIMEOB_SUBID_RSHIFT 24
#define SPECIAL_TRIGGER_DIMEOB_DATABLOCK_RSHIFT 16
#define SPECIAL_TRIGGER_DIMEOB_NUMBER_OF_WORDS_RSHIFT 0

#define maxNhit 200
// to run header_ktag_ke3MC/beampions.txt
#define maxNFrame 11
// to run header_ktag_ke3MC/beampions.txt
#define maxNFPGA 16
//#define maxNTRB 6
//#define maxNFrame 7
#define maxNFPGA 4



#endif /* TDCB_BUFFER_H_ */
