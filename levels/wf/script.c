#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/wf/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_wf_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _wf_segment_7SegmentRomStart, _wf_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _wdw_skybox_yay0SegmentRomStart, _wdw_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group1_yay0SegmentRomStart, _group1_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group1_geoSegmentRomStart, _group1_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group13_yay0SegmentRomStart, _group13_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group13_geoSegmentRomStart, _group13_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _wf_segment_7SegmentRomStart, _wf_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _wdw_skybox_mio0SegmentRomStart, _wdw_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_2), 
	JUMP_LINK(script_func_global_14), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, wf_area_1),
		WARP_NODE(0x0A, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_WF, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_CHUCKYA, -379, 3750, -140, 0, 0, 0, (1 << 24) | (1 << 16) | (1 << 8), bhvChuckya),
		OBJECT(MODEL_BREAKABLE_BOX, 1201, 200, -1337, 0, 0, 0, 0x00000000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 1188, 200, -1348, 0, 0, 0, 0x00000000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 1211, 200, -1371, 0, 0, 0, 0x00000000, bhvBreakableBox),
		OBJECT(MODEL_AK47_BLUE, -3140, 4457, -3486, 0, 0, 0, (1 << 24) | (1 << 16) | (1 << 8), bhvOneCoin),
		OBJECT(MODEL_AK47_BLUE, 1843, 2407, -3511, 0, 0, 0, (1 << 24) | (1 << 16) | (1 << 8), bhvOneCoin),
		OBJECT(MODEL_AK47_BLUE, -1922, 2630, -510, 0, 0, 0, (1 << 24) | (1 << 16) | (1 << 8), bhvOneCoin),
		OBJECT(MODEL_HEAVE_HO, -2845, 1125, 22, 0, 0, 0, (1 << 24) | (1 << 16) | (1 << 8), bhvHeaveHo),
		OBJECT(MODEL_HEAVE_HO, -1021, 1125, -58, 0, 0, 0, (1 << 24) | (1 << 16) | (1 << 8), bhvHeaveHo),
		OBJECT(MODEL_HEAVE_HO, -2985, 3371, -2627, 0, 0, 0, (1 << 24) | (1 << 16) | (1 << 8), bhvHeaveHo),
		OBJECT(MODEL_AK47_RED, 4274, 0, 4216, 0, 0, 0, (1 << 24) | (1 << 16) | (1 << 8), bhvOneCoin),
		OBJECT(MODEL_AK47_RED, 920, 2250, -870, 0, 0, 0, (1 << 24) | (1 << 16) | (1 << 8), bhvOneCoin),
		OBJECT(MODEL_AK47_RED, 208, 434, 659, 0, 0, 0, (1 << 24) | (1 << 16) | (1 << 8), bhvOneCoin),
		OBJECT(MODEL_AK47_RED, -3589, 0, 4328, 0, 0, 0, (1 << 24) | (1 << 16) | (1 << 8), bhvOneCoin),
		OBJECT(MODEL_AK47_RED, 3281, 0, -3596, 0, 0, 0, (1 << 24) | (1 << 16) | (1 << 8), bhvOneCoin),
		OBJECT(MODEL_AK47_RED, -770, 3000, -3488, 0, 0, 0, (1 << 24) | (1 << 16) | (1 << 8), bhvOneCoin),
		OBJECT(MODEL_AK47_RED, 974, 2250, -2717, 0, 0, 0, (1 << 24) | (1 << 16) | (1 << 8), bhvOneCoin),
		OBJECT(MODEL_METAL_BOX, -514, 2250, -2229, 0, 0, 0, (1 << 24) | (1 << 16) | (1 << 8), bhvPushableMetalBox),
		OBJECT(MODEL_METAL_BOX, -978, 375, 1825, 0, 0, 0, (1 << 24) | (1 << 16) | (1 << 8), bhvPushableMetalBox),
		OBJECT(MODEL_CHUCKYA, 1015, 3000, -3371, 0, 0, 0, (1 << 24) | (1 << 16) | (1 << 8), bhvChuckya),
		OBJECT(MODEL_AK47_RED, 205, 434, 318, 0, 0, 0, (1 << 24) | (1 << 16) | (1 << 8), bhvOneCoin),
		OBJECT(MODEL_AK47_GREEN, -383, 3750, 252, 0, 0, 0, (1 << 24) | (1 << 16) | (1 << 8), bhvOneCoin),
		OBJECT(MODEL_AK47_GREEN, -2133, 2630, -521, 0, 0, 0, (1 << 24) | (1 << 16) | (1 << 8), bhvOneCoin),
		OBJECT(MODEL_AK47_GREEN, 21, 3750, -140, 0, 0, 0, (1 << 24) | (1 << 16) | (1 << 8), bhvOneCoin),
		OBJECT(MODEL_NONE, 3707, 0, -857, 0, -68, 0, (0x0A << 16), bhvInstantActiveWarp),
		TERRAIN(wf_area_1_collision),
		MACRO_OBJECTS(wf_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_UNDERGROUND),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(1, 0, 0, 0, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
