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
#include "levels/bob/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_bob_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _generic_yay0SegmentRomStart, _generic_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group3_yay0SegmentRomStart, _group3_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group3_geoSegmentRomStart, _group3_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_4), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM, bob_geo_000458), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS, bob_geo_000470), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bob_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BREAKABLE_BOX, 53, 142, -317, 0, 0, 0, 0x00000000, bhvBreakableBox),
		OBJECT(MODEL_WOODEN_SIGNPOST, -247, 135, -1800, 0, 0, 0, (0x0 << 16), bhvMessagePanel),
		OBJECT(MODEL_STAR, -27, 388, -1374, 0, 0, 0, (0 << 24) | (0 << 16), bhvStar),
		OBJECT(MODEL_NONE, 14, 17, 818, 0, -170, 0, (0 << 24) | (0x0A << 16), bhvInstantActiveWarp),
		MARIO_POS(0x01, -177, 20, -8, 990),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, bob_area_2),
		WARP_NODE(0x0A, LEVEL_BOB, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BREAKABLE_BOX, -999, 280, 22, 0, 0, 0, 0x00000000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, -984, 366, -242, 0, 0, 0, 0x00000000, bhvBreakableBox),
		OBJECT(MODEL_AK47_RED, 1707, 767, -1431, 0, 0, 0, (0 << 24) | (0 << 16) | (0 << 8), bhvOneCoin),
		OBJECT(MODEL_AK47_GREEN, -1187, 270, 2268, 0, 0, 0, (1 << 24) | (1 << 16) | (1 << 8), bhvOneCoin),
		OBJECT(MODEL_WOODEN_SIGNPOST, -1748, 248, 1188, 0, 65, 0, (0x1 << 16), bhvMessagePanel),
		OBJECT(MODEL_NONE, -1146, 317, 1611, 0, -176, 0, (0x0A << 16), bhvInstantActiveWarp),
		OBJECT(MODEL_STAR, 1505, 1430, 1916, 0, 0, 0, (0 << 24) | (1 << 16), bhvStar),
		TERRAIN(bob_area_2_collision),
		MACRO_OBJECTS(bob_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(3, bob_area_3),
		WARP_NODE(0x0A, LEVEL_BOB, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x04, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -1015, 2292, 2638, 0, -175, 0, (0x0A << 16), bhvInstantActiveWarp),
		OBJECT(MODEL_GOOMBA, -1161, 2292, 996, 0, -175, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -1186, 2292, 323, 0, -175, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -1187, 2292, -496, 0, -175, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_STAR, 642, 3257, 1418, 0, 0, 0, (0 << 24) | (1 << 16), bhvStar),
		TERRAIN(bob_area_3_collision),
		MACRO_OBJECTS(bob_area_3_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -177, 20, -8, 990),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
